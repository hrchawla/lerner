#include<iostream>
#include<vector>

using namespace std;

void printSomething(){
    cout<<"Something"<<endl;
}

int main()
{
    vector<int> vin = {1,2,3,4,5};
    for(int in : vin) {
	in *= 12;
	in += 10;
	cout<<in<<endl;
    }
}
