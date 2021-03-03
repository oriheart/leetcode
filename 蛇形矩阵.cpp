
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> countBits(int num) {

        vector<int> res(num+1);
        res[0]=0;
        for(int i=1;i<=num;i++){

            if(i%2!=0){
                res[i]= res[i-1]+1;
            }
            else{
                res[i]=res[i/2];
            }
        }

        return res;
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
