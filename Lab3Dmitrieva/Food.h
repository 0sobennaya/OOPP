#pragma once
#include "Dmitrieva_product.h"
#include <boost/serialization/base_object.hpp>

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

};
