#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <boost/serialization/access.hpp>

class Dmitrieva_product {
protected:
	std::string _name = "None";
	float _price = -1.0;
	int _amount = -1;
	bool _is_active = 0; //0 - no, 1 - yes
public:
	virtual void add_product();
	virtual void export_product(std::ostream& stream, bool pretty);
	
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