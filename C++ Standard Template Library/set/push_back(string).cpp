#include "set.h"
int cyclicShift(string word) {
	set<string> s;
	int i = word.size();
	do
	{
		s.insert(word);
		word = word.back() + word;
		word.pop_back();
		i--;
	} while (i > 0);
	return s.size();
}
