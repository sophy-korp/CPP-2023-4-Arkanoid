#ifndef INC_MAKE_BOTTOM_H
#define INC_MAKE_BOTTOM_H
#include "bonus.h"
class make_bottom :
	public bonus
{
public:
	make_bottom(pair_t p) :bonus(p) {};
	virtual void drawBonus() override;
	virtual void activate() override;
};
#endif
