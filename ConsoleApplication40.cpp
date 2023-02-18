#include <iostream>
#include <string>
#define size 10

int TroxArmor[size] = { 1323,234,13,34,123,234,5435,456,2,345};

using namespace std;

class Armor {
private:
	uint32_t ARMOR_LEVEL;
	uint32_t ARMOR_HEALTH_POINTS;
	uint32_t ARMOR_DEFENSE;
	uint16_t ARMOR_SPEED;
	uint32_t ARMOR_MAGIC_POINTS;
	uint32_t ARMOR_SPIRIT;
	uint32_t ARMOR_ATTACK;
	uint32_t ARMOR_STRENGTH;
	uint16_t ARMOR_SLOT;
	uint16_t ARMOR_ID;

public:


	void ArmorSetup(string ARMOR_NAME, int ArmorArray[8])
	{

	}

};
class Weapon {
private:
	string WEAPON_NAME;


	uint32_t WEAPON_LEVEL;
	uint32_t WEAPON_HEALTH_POINTS;
	uint32_t WEAPON_DEFENSE;
	uint16_t WEAPON_SPEED;
	uint32_t WEAPON_MAGIC_POINTS;
	uint32_t WEAPON_SPIRIT;
	uint32_t WEAPON_ATTACK;
	uint32_t WEAPON_STRENGTH;
	uint16_t WEAPON_SLOT;
	uint16_t WEAPON_ID;				//id that looks for weapons in case switch

public:

	void selectArmor(int weapon_id)
	{
		WEAPON_ID = weapon_id;
	}




	string getArmorName()
	{
		return WEAPON_NAME;
	}

	uint16_t getWeaponLevel()
	{
		return WEAPON_LEVEL;
	}
	uint16_t getWeaponHeath()
	{
		return WEAPON_HEALTH_POINTS;
	}
	uint16_t getWeaponMagic()
	{
		return WEAPON_MAGIC_POINTS;
	}
	uint16_t getWeaponDefense()
	{
		return WEAPON_DEFENSE;
	}
	uint16_t getWeaponSpeed()
	{
		return WEAPON_SPEED;
	}
	uint16_t getWeaponSpirit()
	{
		return WEAPON_SPIRIT;
	}
	uint16_t getWeaponAttack()
	{
		return WEAPON_ATTACK;
	}
	uint16_t getWeaponStrength()
	{
		return WEAPON_STRENGTH;
	}
	uint16_t getWeaponSlot()
	{
		return	WEAPON_SLOT;
	}


};
class Character : public Weapon {
private:
	string CHARACTER_NAME;
	uint32_t CHARACTER_EXP;


	uint32_t CHARACTER_LEVEL;
	uint32_t CHARACTER_HEALTH_POINTS;
	uint32_t CHARACTER_DEFENSE;
	uint32_t CHARACTER_SPEED;
	uint32_t CHARACTER_MAGIC_POINTS;
	uint32_t CHARACTER_SPIRIT;
	uint32_t CHARACTER_ATTACK;
	uint32_t CHARACTER_STRENGTH;
	uint32_t CHARACTER_ARMOR_SLOT;


	int CHARACTER_INVENTORY[50];
	int CHARACTER_DEFAULT_STATS[9];				//loads character default job stats
	int CHARACTER_HEAD_STATS[9];
	int CHARACTER_BODY_STATS[9];
	int CHARACTER_HANDS_STATS[9];
	int CHARACTER_LEGS_STATS[9];
	int CHARACTER_WAIST_STATS[9];
	int CHARACTER_LWEAPON_STATS[9];
	int CHARACTER_RWEAPON_STATS[9];


	bool HEAD_EQUIPPED;
	bool BODY_EQUIPPED;
	bool HANDS_EQUIPPED;
	bool LEGS_EQUIPPED;
	bool FEET_EQUIPPED;
	bool WAIST_EQUIPPED;
	bool L_WEAPON_EQUIPPED;
	bool R_WEAPON_EQUIPPED;
public:
	void setaStats(
		string CHARACTER_NAME,												//set character name
		uint32_t CHARACTER_LEVEL,											//set character basic level (lvl)
		uint32_t CHARACTER_HEALTH_POINTS,									//set character health points (hp)
		uint32_t CHARACTER_DEFENSE,											//set character defense (def)
		uint32_t CHARACTER_SPEED,											//set character speed (spd)
		uint32_t CHARACTER_MAGIC_POINTS,									//set character magic points (mp)
		uint32_t CHARACTER_SPIRIT,											//set character spirit (spt)
		uint32_t CHARACTER_ATTACK,											//set character attack (atk)
		uint32_t CHARACTER_STRENGTH,
		uint32_t CHARACTER_ARMOR_SLOT)

	{
		this->CHARACTER_NAME = CHARACTER_NAME;
		this->CHARACTER_LEVEL = CHARACTER_LEVEL;
		this->CHARACTER_HEALTH_POINTS = CHARACTER_HEALTH_POINTS;
		this->CHARACTER_DEFENSE = CHARACTER_DEFENSE;
		this->CHARACTER_SPEED = CHARACTER_SPEED;
		this->CHARACTER_MAGIC_POINTS = CHARACTER_MAGIC_POINTS;
		this->CHARACTER_SPIRIT = CHARACTER_SPIRIT;
		this->CHARACTER_ATTACK = CHARACTER_ATTACK;
		this->CHARACTER_STRENGTH = CHARACTER_STRENGTH;
		this->CHARACTER_ARMOR_SLOT = CHARACTER_ARMOR_SLOT;

	}

	void getCharData(int arrData[8]) {
		//arrData[can size or data ++]
		CHARACTER_LEVEL = arrData[0];
		CHARACTER_HEALTH_POINTS = arrData[1];
		CHARACTER_DEFENSE = arrData[2];
		CHARACTER_SPEED = arrData[3];
		CHARACTER_MAGIC_POINTS = arrData[4];
		CHARACTER_SPIRIT = arrData[5];
		CHARACTER_ATTACK = arrData[6];
		CHARACTER_STRENGTH = arrData[7];
		CHARACTER_ARMOR_SLOT = arrData[8];
	}

	//uint32_t CHARACTER_LEVEL;		//1
	//uint32_t HEALTH_POINTS;			//2
	//uint32_t DEFENSE;				//3
	//uint32_t SPEED;					//4
	//uint32_t MAGIC_POINTS;			//5
	//uint32_t SPIRIT;				//6
	//uint32_t ATTACK;				//7
	//uint32_t STRENGTH;				//8
	//uint32_t SLOT					//9


	void setaCharacterName(string C_NAME)
	{
		CHARACTER_NAME = C_NAME;
	}
	string getCharName()
	{
		return CHARACTER_NAME;
	}
	int getCharHP() {
		int equipChoice;
		if (HEAD_EQUIPPED == true) {
			std::cout << "HEAD SLOT NOT AVAILABLE" << std::endl; HEAD_EQUIPPED = true;
		}
		else {
			if (CHARACTER_LEVEL >= getWeaponLevel() && CHARACTER_ARMOR_SLOT == getWeaponSlot())
			{
				std::cout << "Equip item" << getArmorName() << std::endl;
			}
		}


	}

	void setaBodyArmor(bool bodyEq)
	{
		BODY_EQUIPPED = bodyEq;
	}
	void setHeadArmor(bool headsEq)
	{
		HANDS_EQUIPPED = headsEq;
	}
	void setLegEquip(bool legsEq)
	{
		LEGS_EQUIPPED = legsEq;
	}
	void setFeetEquipment(bool feetEq) {
		FEET_EQUIPPED = feetEq;
	}
	void setWaistEquip(bool waistEq)
	{
		WAIST_EQUIPPED = waistEq;
	}
	void setLeftWeapon(bool lWeapon)
	{
		L_WEAPON_EQUIPPED = lWeapon;
	}
	void setRightWeapon(bool rWeapon)
	{
		R_WEAPON_EQUIPPED = rWeapon;
	}

	void setArmorEquipArray(int equipArmorHead[10])
	{
		if (BODY_EQUIPPED == true) {
			std::cout << "gearEquipped";
		}
	}


	//getters for character data
	int getCharSpeed()
	{
		return CHARACTER_SPEED;
	}
	int getCharDef()
	{
		return CHARACTER_DEFENSE;
	}
	int getCharacterSpeed()
	{
		return CHARACTER_SPEED;
	}
	int getCharMP()
	{
		return CHARACTER_MAGIC_POINTS;
	}
	int getCharSpirit()
	{
		return CHARACTER_SPIRIT;
	}
	int getCharAtk()
	{
		return CHARACTER_ATTACK;
	}
	int getCharStr()
	{
		return CHARACTER_STRENGTH;
	}


};
int main() {

}
