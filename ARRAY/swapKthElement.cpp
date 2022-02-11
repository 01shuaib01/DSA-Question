//  #MorganStainly

vector<int> swapKthElement(vector<int> arr, int k)
{
	// Write code here.
    int n = arr.size();
    swap(arr[k-1],arr[n-k]);
    return arr;
}