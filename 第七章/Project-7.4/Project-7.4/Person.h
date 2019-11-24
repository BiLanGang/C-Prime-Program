#pragma once
#include<iostream>
using namespace std;
struct Person
{
	Person() = default;
	Person (string name, string addr) :Name(name),Address(addr){}
	string Name;
	string Address;
	string GetName()  const { return Name; }
	string GetAddr()  const { return Address; }
};