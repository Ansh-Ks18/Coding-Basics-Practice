#include<iostream>
#include<vector>
using namespace std;
int main(){
  std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

  cout<<"enter the push elements:";
for(int i =0;i<5;i++){
    cout<<vec[i]<<" ";
}
cout<<endl;
cout<<"Print the first and last elements of the vector: "<<" ";
int x1=vec[0];
int x2=vec[4];
cout<<x1<<" "<<x2<<endl;



    // Set some content in the vector:
    for (int i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    std::cout << "Size: " << vec.size() << '\n';
    std::cout << "Capacity: " << vec.capacity() << '\n';



return 0;
}
