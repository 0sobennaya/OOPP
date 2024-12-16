// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include <string>
#include <fstream>
#include <iostream>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/export.hpp>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

struct Dmitrieva_productCPP
{
    char Name[100];
    float Price;
    int Amount;
    bool Status;
    int Caloric;
    bool Veget;
};



class Dmitrieva_product {
public:
	std::string _name = "None";
	float _price = -1.0;
	int _amount = -1;
	bool _is_active = 0; //0 - no, 1 - yes
    virtual ~Dmitrieva_product() {}

private:
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version)
	{
		ar& _name;
		ar& _price;
		ar& _amount;
		ar& _is_active;
	}
};

class Food : public Dmitrieva_product {
private:
	int _caloric_content = -1;
	bool _is_vegetarian = 0;

	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version)
	{
		ar& boost::serialization::base_object<Dmitrieva_product>(*this);
		ar& _caloric_content;
		ar& _is_vegetarian;
	}
public:
    ~Food() {}
};

class Dmitrieva_market {
public:
	std::vector <std::shared_ptr<Dmitrieva_product>> _products;
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive& ar, const unsigned int version) {
        ar& _products;
    }
};

extern "C" {

    __declspec(dllexport) void LoadData(Dmitrieva_market* market, char* filename) {
        try {
            std::ifstream stream(filename);
            if (!stream.is_open()) {
                throw std::runtime_error("File open error.");
            }

            boost::archive::text_iarchive ar(stream);
            ar&* market;
        }
        catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    __declspec(dllexport) int GetSizeMarket(Dmitrieva_market* market) {
        return (int)market->_products.size();
    }

    __declspec(dllexport) void GetStruct(Dmitrieva_market* market,Dmitrieva_productCPP&product, int index) {
        /*if (!animal.Bird) {
          animal.Bird = true;

          const auto check_bird = std::dynamic_pointer_cast<Bird>(zoo->Animals[index]);
          animal.Can_fly = check_bird->Can_fly;
        }*/
        strcpy(product.Name, market->_products[index]->_name.c_str());
        product.Price = market->_products[index]->_price;
        product.Amount = market->_products[index]->_amount;
        product.Status = market->_products[index]->_is_active;
    }

    __declspec(dllexport) void SaveData(Dmitrieva_market* market, char* filename) {
        std::ofstream stream(filename);
        boost::archive::text_oarchive ar(stream);
        ar&* market;
    }

    __declspec(dllexport) Dmitrieva_market* CreateMarket() {
        return new Dmitrieva_market();
    }

    __declspec(dllexport) void DeleteMarket(Dmitrieva_market* market) {
        delete market;
    }
}