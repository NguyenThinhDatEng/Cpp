//
#include <iostream>
#include <map>

using namespace std;

int countSub_string(string binaryString)
{
	map<char, int> mp;
	int res = 0;

	int lengthParent = binaryString.size();
	int lengthSon = 2;
	do
	{
		for (int i = 0; i <= lengthParent - lengthSon; i++)
		{
			mp.clear();
			for (int j = 0; j < lengthSon; j++)
				mp[binaryString[i + j]]++;
			if (mp.size() == 2 && mp['1'] == mp['0'])
				res++;
		}
		lengthSon += 2;
	} while (lengthSon <= lengthParent);
	return res;
}

int main()
{
	//cout << "\nNguyen Van Thinh 20194178\n" << endl;
	string str;
	cin >> str;
	cout << countSub_string(str);
	//cout << "\n" << endl;
	return 0;
}