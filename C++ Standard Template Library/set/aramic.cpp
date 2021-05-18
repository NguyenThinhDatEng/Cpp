#include "set.h"

int aramic(std::vector<std::string> words)
{
    set<string> s;
    int lengthWords = words.size();
    do
    {
        set<char> tmp;
        string str = words.at(lengthWords - 1);
        int indexStr = str.size() - 1;
        do
        {
            tmp.insert(str.at(indexStr));
            indexStr--;
        } while (indexStr >= 0);
        string result = "";
        for (auto ch : tmp)
            result += ch;
        s.insert(result);
        lengthWords--;
    } while (lengthWords > 0);
    return s.size();
}
