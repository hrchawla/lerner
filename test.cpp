#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vin = {1,2,3,4,5};
    for(int in : vin) {
	in *= 12;
	cout<<in<<endl;
    }
}
