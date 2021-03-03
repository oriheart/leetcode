#include<iostream>
#include<vector>

using  namespace std;
class Solution {
public:
    vector<int> countBits(int num){
    	vector<int> res(num+1);
    	for(int i=0;i<=num;i++){
    		res[i]=counts(i);
		}
		
		return  res;
	}
	
	int counts(int x){
		int count=0;
		while(x!=0){
			x=x&(x-1);
			count++;
		}
		
		return count;
	}
};

int main()
{
	Solution solution;
	int n;
	cin>>n;
	vector<int> res=solution.countBits(n);
	for(vector<int>::iterator i=res.begin();i!=res.end();i++){
		cout<<*i<<" ";
	}
} 
