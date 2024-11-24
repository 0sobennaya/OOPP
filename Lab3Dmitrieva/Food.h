#pragma once
#include "Dmitrieva_product.h"
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/export.hpp>

class Food : public Dmitrieva_product {
public:
    Food() = default;
    virtual ~Food() = default;
    void draw(QPainter& painter, int x, int& y, std::vector<int> &table_sizes) override;
    void draw_in_cols(QPainter& painter) override;
    std::shared_ptr<Dmitrieva_product> clone() const override;
protected:
	int _caloric_content = -1;
	bool _is_vegetarian = 0;
private:
	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version)
	{
        ar& boost::serialization::base_object<Dmitrieva_product>(*this);
		ar& _caloric_content;
		ar& _is_vegetarian;
	}

};

