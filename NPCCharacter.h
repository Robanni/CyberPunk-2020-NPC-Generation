#pragma once

#include "Includes.h"
#include "GameFunctions.h"



class NPCCharacter
{
public:
	NPCCharacter(std::string role);
	unsigned short int getStats();

protected:
	// Класс персонажа
	std::string Role;
	//Характеристики персонажа
	unsigned short int Int;
	unsigned short int Ref;
	unsigned short int Tech;
	unsigned short int Cool;
	unsigned short int Attr;
	unsigned short int Luck;
	unsigned short int MA;
	unsigned short int Body;
	unsigned short int Emp;
	// Броня персонажа
	unsigned short int SPHead;
	unsigned short int SPTorso;
	unsigned short int SPRArm;
	unsigned short int SPLArm;
	unsigned short int SPRLeg;
	unsigned short int SPLLeg;
	// Оснащение персонажа
	std::vector<std::string> Cyberware;
	std::string Weapon;
};

NPCCharacter::NPCCharacter(std::string role)
{	
	Int = rollRange(5, 10);
	Ref = rollRange(5, 10);
	Tech = rollRange(5, 10);
	Cool = rollRange(5, 10);
	Attr = rollRange(5, 10);
	Luck = rollRange(5, 10);
	MA = rollRange(5, 10);
	Body = rollRange(5, 10);
	Emp = rollRange(5, 10);

	Role = role;

	

}

inline unsigned short int NPCCharacter::getStats()
{
	return 0;
}
