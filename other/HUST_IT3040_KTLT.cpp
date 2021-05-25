//
#include "vector.h"
#include <map>

std::vector<string> countChar(string s)
{
	map<char, int> character;
	vector<string> v;
	for (char c : s)
		character[c]++;
	for (auto x : character)
	{
		string str = "";
		str += x.first;
		str += " " + to_string(x.second);
		v.push_back(str);
	}
	return v;
}

string displayMap(map<char, int> mp)
{
	string str = "";
	for (auto x : mp)
	{
		str += x.first;
		str += to_string(x.second) + " ";
	}
	return str;
}

bool checkSum(vector<int> arr, int sum) {
	map<int, int> mp;
	for (auto x : arr)
		mp[x]++;
	map<int, int>::iterator it;
	for (auto x : arr)
	{
		it = mp.find(sum - x);
		if (it != mp.end())
			if ((*it).first != sum - x)
				return true;
			else
				if ((*it).second != 1)
					return true;
				else
					return false;
	}
	return false;
}

string modifyString(string s) {
	map<char, int> mp;
	for (auto x : s)
		mp[x]++;

	vector<pair<char, int> > vt(mp.begin(), mp.end());
	sort(vt.begin(), vt.end(), [](pair<char, int> a, pair<char, int> b)
	{
		if (a.second == b.second) return a.first < b.first;
		else
			return a.second > b.second;
	});
	string str = "";
	for (auto x : vt)
		str += x.first;
	return str;
}

vector<int> countPrefix(vector<string> contacts, vector<string> names)
{
	map<string, int> mp;
	string tmp;
	for (auto x : names)
	{
		int lengthName = x.size();
		int count = 0;
		for (auto y : contacts)
		{
			if (lengthName <= y.size())
			{
				tmp = y.substr(0, lengthName);
				if (x == tmp)
					count++;
			}
		}
		mp[x] = count;
	}
	vector<int> result;
	for (auto name : names) {
		result.push_back(mp[name]);
	}
	return result;
}


int main()
{
	cout << "\nNguyen Van Thinh 20194178\n" << endl;
	vector<string> v{ "Codelearn", "Codewar" };
	vector<string> n{ "Code", "Codel", "io" };
	displayList(countPrefix(v, n));
	cout << "\n" << endl;
	return 0;
}