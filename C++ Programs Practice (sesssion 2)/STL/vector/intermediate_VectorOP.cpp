#include <iostream>
#include<bits/stdc++.h>
using namespace std;



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

vector<int>::reverse_iterator it;
for(it=v.rbegin();it!=v.rend();it++){
    cout<<*it<<" ";
}
cout<<endl;


int max_var=*max_element(v.begin(),v.end());
int min_var=*min_element(v.begin(),v.end());
cout<<max_var<<" "<<min_var<<" "<<endl;


cout<<"Sorted :";
sort(v.begin(),v.end());
for (int x : v) {
    cout << x << " ";
}

cout<<endl;
//rotation by k=2
int temp=v[0];
int temp1 =v[1];

for(int i=0;i<n;i++){
    v[i]=v[i+2];
}

v[n-1]=temp1;
v[n-2]=temp;

for (int x : v) {
    cout << x << " ";
}
cout<<endl;


rotate(v.begin(),v.begin()+3,v.end());

cout<<" using Stl using rotate:";
    for (int x : v) {
       cout << x << " ";
    }
   cout << endl;

   set<int>s1={1,2,2,2,3,4,5,5};
for(auto i:s1)
cout<<i<<" ";
cout<<endl;
//code for dublicate element

vector<int>o={1,2,2,3,4,5,5,6,6,6,6};
vector<int>newO;

for(int i=0;i<o.size();i++){
 bool   isdublicate=false;

for(int j=0;j<newO.size();j++){
    if(o[i]==newO[j]){
        isdublicate=true;
        break;
    }}

    if(!isdublicate){
        newO.push_back(o[i]);
        
    }

}
cout << "By vector for dublicate elements:";
for (int i = 0; i < newO.size(); i++) {
        cout<<newO[i] << " ";  // Print each unique element
    }
cout << endl;
//using more simple way to remove the duplicate 

 vector<int> v5 = {1, 2, 2, 3, 4, 4, 5, 7}; // your vector

    // Sort the vector
sort(v5.begin(), v5.end());

    // Remove duplicates
    v5.erase(std::unique(v5.begin(), v5.end()), v5.end());

    // Print the resulting vector
    for (int x : v5) {
      cout << x << " ";
    }
cout << endl;

    return 0;
}
