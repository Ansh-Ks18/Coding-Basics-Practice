#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v(n);
  
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    
    int q;
    cin>>q;

    int y;
    cin>>y;


    sort(v.begin(),v.end());
     vector<int>::iterator low,up;
     
    low=lower_bound(v.begin(),v.end(),1);
    if(low!=v.end() && *low==1){
        cout<<"Yes"<<" "<<(low- v.begin()) + 1<<endl;
    }

low=lower_bound(v.begin(),v.end(),4);
    if(low!=v.end() && *low==4){
        cout<<"Yes"<<" "<<(low- v.begin()) + 1<<endl;
    }
    else{
         cout<<"No"<<" "<<(low- v.begin()) + 1<<endl;
    }

    low=lower_bound(v.begin(),v.end(),9);
    if(low!=v.end() && *low==9){
        cout<<"Yes"<<" "<<(low- v.begin()) + 1<<endl;
    }
    else{
         cout<<"No"<<" "<<(low- v.begin()) + 1<<endl;
    }

    low=lower_bound(v.begin(),v.end(),15);
    if(low!=v.end() && *low==15){
        cout<<"Yes"<<" "<<(low- v.begin()) + 1<<endl;
    }
    else{
         cout<<"No"<<" "<<(low- v.begin()) + 1<<endl;
    }








    return 0;
}

