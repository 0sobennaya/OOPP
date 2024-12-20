#pragma once
#include <string>
#include <boost/serialization/access.hpp>
#include <QPainter>

class Dmitrieva_product {
public:
    Dmitrieva_product() = default;
    virtual ~Dmitrieva_product() = default;
    //getters
    std::string get_name();
    float get_price();
    int get_amount();
    bool get_status();
    //setters
    void set_name(std::string name);
    void set_price(float price);
    void set_amount(int amount);
    void set_status(bool status);
    virtual void draw(QPainter& painter, int x, int& y, std::vector<int> &table_sizes);
    virtual void draw_in_cols(QPainter& painter);
    virtual std::shared_ptr<Dmitrieva_product> clone() const;
protected:
	std::string _name = "None";
	float _price = -1.0;
	int _amount = -1;
    bool _is_active = 0; //0 - no, 1 - yes
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
