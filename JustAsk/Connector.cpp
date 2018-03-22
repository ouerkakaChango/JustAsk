#include "Connector.h"
#include "God.h"

Connector::Connector(string _UpperObj, string _LowerObj):
	UpperObj(_UpperObj),
	LowerObj(_LowerObj)
{
	if (UpperObj != "" || LowerObj != "") {
		GOD.allConnections[UpperObj] = LowerObj;
	}
}


void Connector::SetConnection(string _UpperObj, string _LowerObj) {
	if (_UpperObj == ""&&_LowerObj == "") {
		cout << "\nError:connection upper and lower all empty.";
	}
	UpperObj = _UpperObj;
	LowerObj = _LowerObj;
	GOD.allConnections[UpperObj] = LowerObj;
}
