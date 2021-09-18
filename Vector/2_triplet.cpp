#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> > triplets(vector<int> arr,int targetSum){

	int n = arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>>v;

	for(int i=0;i<n-3;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int c_sum=arr[i];
            c_sum+=arr[j];
            c_sum+=arr[k];


            if(c_sum==targetSum)
            {
                v.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(c_sum > targetSum){
				k--;
			}
			else{
				j++;
			}


        }
    }
	return v;

}

int main(){

	vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
	int S = 18;

	auto result = triplets(arr,S);

	for(auto v : result){
		for(auto no : v){
			cout<<no<<",";
		}
		cout<<endl;
	}


	return 0;
}
