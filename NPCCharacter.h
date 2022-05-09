#pragma once

#include "Includes.h"


class NPCCharacter
{
public:
	NPCCharacter();
	unsigned short int getStats();

protected:
	// ����� ���������
	std::string Role;
	//�������������� ���������
	unsigned short int Int;
	unsigned short int Ref;
	unsigned short int Tech;
	unsigned short int Cool;
	unsigned short int Attr;
	unsigned short int Luck;
	unsigned short int MA;
	unsigned short int Body;
	unsigned short int Emp;
	// ����� ���������
	unsigned short int SPHead;
	unsigned short int SPTorso;
	unsigned short int SPRArm;
	unsigned short int SPLArm;
	unsigned short int SPRLeg;
	unsigned short int SPLLeg;
	// ��������� ���������
	std::string Cyberware;//�� �������� ��� ������ ���� ������
	std::string Weapon;
};

NPCCharacter::NPCCharacter()
{
}

inline unsigned short int NPCCharacter::getStats()
{
	return 0;
}
