#include "fonctions.h"

using namespace System;

Boolean verifyEntryUint(String^ entry) {
	for each (Char i in entry) {
		if (!Char::IsNumber(i)) return false;
	}
	return true;
}