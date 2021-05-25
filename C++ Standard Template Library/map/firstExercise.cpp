#include "map.h"
// associative container
// A element of map = key value + mapped value (ánh xạ của key)
// don't contain keys with the same key value						same set
// type of key value and type of mapped value can be different		map<char, int> {{'a', 1}}
// The elements in the map are arranged in a certain order by comparison	same set

//#declare
/*
	map<type01, type02> name_map;
*/
//# Sort up ascending
/*
struct cmp{
	bool operator() (char a,char b) {return a<b;}
};
.....
map <char,int,cmp> m; 
*/

//# sort descending
/*
struct cmp{
	bool operator() (char a,char b) {return a>b;}
};
.....
map <char,int,cmp> m;
*/

/*
	(*it).first = it -> first: type01		the value of key value
	(*it).second = it -> second: type02		the value of mapped value
	(*it): pair								the vaule of element which was pointed
*/

//# access to element
/* 
	operator[key]
	if (key was existed) return mapped value;
	else
		add to map that key
	Ex:  m['a']=1;
*/

//#insert
/*
	map_name[key] = mapped;
	map_name.insert(make_pair(key, mapped));
	map_name.insert(pair<type01,type02>(key, mapped) );
*/

std::vector<string> countChar(string s)
{
	map<char, int> character;
	vector<string> v;
	for (char c : s)
		character[c]++;
	for (auto x : character)
	{
		string s = "";
		s = x.first + " " + to_string(x.second);
		v.push_back(s);
	}
	return v;
}


