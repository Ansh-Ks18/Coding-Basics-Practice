#include<iostream>
#include<vector>
using namespace std;

int main(){
 std::vector<std::vector<int>> v = {
    {2, 2},
    {3, 1, 5, 4},
    {5, 1, 2, 8, 9, 3},
    {0, 1},
    {1, 3}

};

int x1=v[2][0];
int x2=v[2][4];
cout<<x1<<endl;
cout<<x2<<endl;
return 0;


}


