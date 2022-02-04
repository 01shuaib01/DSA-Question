//  #wipro

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
   long long int s1 = 0;
    long long int s2 = 0;
    long long int sum;
    
    for(int i=0;i<n;i++){
        s1 = s1*10 + a[i];
    }
 
    for(int i=0;i<m;i++){
        s2 = s2*10 + b[i];
    }
    sum = s1+s2;
    
    vector<int>c;
    while(sum!=0){
        int last = sum % 10;
        c.push_back(last);
        sum = sum / 10;
    }
    reverse(c.begin(),c.end());
    return c;
}