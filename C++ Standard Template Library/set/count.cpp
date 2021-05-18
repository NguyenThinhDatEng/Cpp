// set.count(value)
// return true if *it was existed in the set
#include "set.h"
std::vector<std::vector<int>> uniqueRows(std::vector<std::vector<int>> matrix)
{
    set< vector<int> > s;
    vector< vector<int> > result;
    vector< vector<int> >::iterator it = matrix.begin();
    do
    {
        if (!s.count(*it))
        {
            s.insert(*it);
            result.push_back(*it);
        }
        it++;
    } while (it != matrix.end());
    return result;
}
