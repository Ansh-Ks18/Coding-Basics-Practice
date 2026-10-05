#include <iostream>
#include <vector>
using namespace std;

void fun(int n,vector<int>v2){
    vector<int>:: iterator it;
    for(it=v2.begin();it!=v2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}


int main() {
   int i,n;
   cin>>n;
  vector<int> v(n);

//for print the elements of vector 
for(int i=0;i<n;i++){
    cin>>v[i];
}

for (int x : v) {
    cout << x << " ";
}
cout<<endl;
//Given a vector of integers, print the first and last elements.
cout<<v.front()<<endl;
cout<<v.back()<<endl;

//Insert and Delete:

v.insert(v.begin(),19);
v.pop_back();


for (int x : v) {
    cout << x << " ";
}
cout<<endl;

vector<int>v2(n,18);

fun(n,v2);

//Square of elements
vector<int>v3{1,2,3,4,5,6};
for(int i=0;i<n;i++){
   v3[i]=v3[i]*v3[i];
}

cout<<"Square of elements:";
for (int x : v3) {
    cout << x << " ";
}





return 0;
}