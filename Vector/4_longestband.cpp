
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int largestBand(vector<int> arr){

   int n=arr.size();
   unordered_set <int> s;

   for(int x:arr)
   {
       s.insert(x);
   }
   int largest=1;
   for(auto i:s)
   {

       int parent=i-1;
       if(s.find(parent)==s.end())
       {
           int next_no=i+1;
           int count=1;
           	while(s.find(next_no)!=s.end()){
				next_no++;
				count++;
			}
			if(count>largest)
            {
                largest=count;
            }
       }
   }
	return largest;
}



int main(){

	vector<int> arr{1, 9, 3, 0, 18, 5, 2, 10, 7, 12, 6};
	cout << largestBand(arr)<<endl;

	return 0;
}
