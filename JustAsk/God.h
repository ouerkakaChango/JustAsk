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
	//God��Response����������Ȼ��������������µ�����
	//Ŀǰ�Ƚϼ򵥣���ʹ�ܸ߲����Ϊ�����ִ�����̵��¼���������ź�,pc����������������Ҳ������Ϊ�������������
	//Ȼ���û�ask�Ͳ��������෶��
	void Response(class User* user, string action, string content);
	void Response(class Computer* computer, string action, string content);
};
#define GOD God::GetInstance()
#endif

