

//#PAYTM    #INFOSYS    #TCS.

#include <utility>

pair<int, int> swap(pair<int, int> swapValues)
{
    // Write your code here.
    //     swap(swapValues.first,swapValues.second);
    int temp = swapValues.first;
    swapValues.first = swapValues.second;
    swapValues.second = temp;

    return swapValues;
}
