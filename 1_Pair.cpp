#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> pairSum(vector<int> t,int sum){
	unordered_set<int> s;
	vector<int>v;
	for(int i=0;i<t.size();i++)
    {
        int x=sum-t[i];
        if(s.find(x)!=s.end())
        {
            v.push_back(x);
            v.push_back(t[i]);
            return v;
        }
        s.insert(t[i]);
    }
	return {};
}

int main(){

	vector<int> arr{0,1,0, 5, 2 , 3, -6, 9 , 11};
	int S = 0;
    auto p = pairSum(arr,S);
	if(p.size()==0){
		cout<<"No such pair";
	}
	else{
		cout<<p[0]<<","<<p[1]<<endl;
	}

	return 0;
}
