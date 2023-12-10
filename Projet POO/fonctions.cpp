#include "fonctions.h"

using namespace System;

Boolean verifyEntryUint(String^ entry) {
	for each (Char i in entry) {
		if (!Char::IsNumber(i)) return false;
	}
	return true;
}

Boolean verifySqlInjection(String^ entry) {
	String^ forbidden = ";/_@:!§*%";
	for each (Char i in entry) {
		if (forbidden->Contains(i.ToString())) return true;
	}
	return false;
}