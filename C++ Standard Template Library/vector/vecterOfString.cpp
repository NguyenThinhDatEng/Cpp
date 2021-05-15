#include<vector>
#include<string>
std::vector<std::string> findLongestStrings(std::vector<std::string> arr)
{
    std::vector<std::string> v;
    auto maxLength = 0;
    for (auto str : arr)
    {
        if (str.length() > maxLength)
            maxLength = str.length();;
    }
    for (auto str : arr)
    {
        if (str.length() == maxLength)
            v.push_back(str);
    }
    return v;
}