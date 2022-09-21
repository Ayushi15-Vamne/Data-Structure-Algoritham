 
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    int arr[] = {1,9,3,0,18,5,2,4,10,7,12,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> copy_arr;

    // copy arrary into set 
    for(int i:arr)
    {
        copy_arr.insert(i);
    }
    int res = 0;

    for(auto x:copy_arr)
    {
        int parent = x-1;
        if(copy_arr.find(parent)==copy_arr.end())
        {
            int next_Number = x+1;
            int counter=1;
            while(copy_arr.find(next_Number)!=copy_arr.end())
            {
                counter++;
                next_Number++;
            }
            if(counter>res){
                res=counter;
            }
        }

    }
    cout<<res;
	return 0;
}

