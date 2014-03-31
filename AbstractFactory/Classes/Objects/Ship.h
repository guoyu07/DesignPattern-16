/* ----------------------------------------------------------------------------
 *
 * (C) Copyright 2014 Gustavo E. Rangel
 * Brussels, Belgium
 *
 * ----------------------------------------------------------------------------
 */

/* ----------------------------------------------------------------------------
 *
 * Includes
 *
 * ----------------------------------------------------------------------------
 */
#include "cocos2d.h"
#include "b2Sprite.h"
#include "Weapon.h"

#ifndef __SHIP_H__
#define __SHIP_H__

USING_NS_CC;

/* ----------------------------------------------------------------------------
 *
 * Class definition
 *
 * ----------------------------------------------------------------------------
 */
class Ship : public b2Sprite
{
public:
	// constructor
	Ship(GameLayer* game);
    CC_SYNTHESIZE(int, m_weapon, Weapon);

};

#endif //__SHIP_H__