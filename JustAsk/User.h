#ifndef USER_H
#define USER_H
#include "Utility.h"
class User
{
public:
	User();
	~User();
	string name;
	void Ask(string content);
	vector<string> desciption;
};
#endif

