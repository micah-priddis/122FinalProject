#include "Unit.h"

Unit::Unit(sf::Texture* in_texture)
	: sf::Sprite(*in_texture)
{
	//loading the initial texture. 
	//later..... 4 textures per unit, each for facing a cardinal direction?
	//this->setTexture(in_texture);
}

Unit::~Unit()
{
}

//****getters
int Unit::getMaxHealth() {
	return maxHealth;
}

int Unit::getCurrentHealth() {
	return currentHealth;
}

int Unit::getAttackDamage() {
	return attackDamage;
}

int Unit::getAttackRange() {
	return attackRange;
}
int Unit::getTravelRange() {
	return travelRange;
}

int Unit::getCost() {
	return cost;
}

int Unit::getSight() {
	return sight;
}

int Unit::getTeam() {
	return team;
}

//****setters
void Unit::setMaxHealth(int in_health) {
	maxHealth = in_health;
}

void Unit::setCurrentHealth(int in_health) {
	currentHealth = in_health;
}

void Unit::setAttackDamage(int in_damage) {
	attackDamage = in_damage;
}

void Unit::setAttackRange(int in_range) {
	attackRange = in_range;
}

void Unit::setTravelRange(int in_range) {
	travelRange = in_range;
}

void Unit::setSight(int in_sight) {
	sight = in_sight;
}

void Unit::setCost(int in_cost) {
	cost = in_cost;
}

void Unit::setTeam(int in_team) {
	team = in_team;
}
