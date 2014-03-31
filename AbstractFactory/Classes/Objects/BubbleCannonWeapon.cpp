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
#include "BubbleCannonWeapon.h"
#include "GameLayer.h"

/* ----------------------------------------------------------------------------
 *
 * Class methods
 *
 * ----------------------------------------------------------------------------
 */
/* ----------------------------------------------------------------------------
 *
 * ----------------------------------------------------------------------------
 */
BubbleCannonWeapon::BubbleCannonWeapon(GameLayer* game) : Weapon(game)
{

}

/* ----------------------------------------------------------------------------
 *
 * ----------------------------------------------------------------------------
 */
Weapon* BubbleCannonWeapon::create(GameLayer* game)
{
	BubbleCannonWeapon* bubbleCannonWeapon = new BubbleCannonWeapon(game);
	return bubbleCannonWeapon;
}

/* ----------------------------------------------------------------------------
 *
 * ----------------------------------------------------------------------------
 */
void BubbleCannonWeapon::shootBullet()
{
	CCLOG("Shooting Bubble Cannon!!!");
}
