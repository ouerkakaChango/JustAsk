#ifndef GOD_H
#define GOD_H
#include "Utility.h"
//In charge of all global things
class God
{
private:
	God(){}
	map<string, void*> allObjs;
	map<string, string> allConnections;
public:
	friend class Connector;
	static God& GetInstance();
	template<class T>
	T* Create(string name) {
		T* re = new T;
		re->name = name;
		allObjs[name] = re;
		return re;
	}
	//God的Response处理所有自然发生，物理规则导致的事情
	//目前比较简单，即使很高层的行为，如手打击键盘导致键盘输出电信号,pc接受输入产生输出，也可以认为是物理规则发生的
	//然而用户ask就不属于这类范畴
	void Response(class User* user, string action, string content);
	void Response(class Computer* computer, string action, string content);
};
#define GOD God::GetInstance()
#endif

