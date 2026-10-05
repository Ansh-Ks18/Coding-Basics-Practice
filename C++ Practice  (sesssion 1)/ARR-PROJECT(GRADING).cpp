#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int n;

//loop for store the marks of 5 students in the array
    for(int i=0;i<=4;i++){
        cin>>arr[i];
        
        cout<<"The grades of 5 students:"<<arr[i] <<" "<<endl;
    
    }



    //loop for checking greatest out of 5 grades
    cout<<"---------------------------------greatest marks---------------------------------------"<<endl<<endl;

int m;
m = arr[0];

for (int i = 0; i < 5; i++) {
if (arr[i] > m) {
    m = arr[i];
    
} 

}
 cout<<"the greatest marks from these 5 students are:"<<m<<endl<<endl;

cout<<"---------------------------------CONGRATS TOPPER---------------------------------------"<<endl<<endl;

 

   if (m > 90 && m <= 100) {  // Corrected to include 100 as a valid Grade A mark
    cout << "Grade A" << endl;
    cout << "---------------------------------CONGRATS FOR GRADE A--------------------------------------" << endl << endl;
} else if (m > 70 && m <= 90) {  // Corrected to include 90 as a valid Grade B+ mark
    cout << "Grade B+" << endl;
    cout << "---------------------------------CONGRATS FOR GRADE B+--------------------------------------" << endl << endl;
} else if (m > 50 && m <= 70) {  // Corrected to include 70 as a valid Grade B mark
    cout << "Grade B" << endl;
    cout << "---------------------------------CONGRATS FOR GRADE B--------------------------------------" << endl << endl;
} else if (m >= 30 && m <= 50) {  // Corrected to include 50 as a valid Grade C mark
    cout << "Grade C" << endl;
    cout << "---------------------------------CONGRATS FOR GRADE C DO WORK HARD TO GET MORE--------------------------------------" << endl << endl;
} else if (m > 10 && m < 30) {
    cout << "Grade D" << endl;
    cout << "---------------------------------TRY TO WORK HARD AND GET MORE THAN THIS--------------------------------------" << endl << endl;
} else {
    cout << "well try better luck next time" << endl;
}








 //loop for checking lowest out of 5 grades
 cout<<"----------------------------lowest marks ---------------------------------------------"<<endl<<endl;

 int l;
l= arr[0];

for (int i = 0; i < 5; i++) {
if (arr[i] < l) {
    l = arr[i];
    
} 

}
 cout<<"the lowest marks from these 5 students are:"<<l<<endl<<endl;



 cout<<"----------------------------DON'T FEEL SAD AND TRY YOUR BEST NEXT TIME TO GET THE BEST YOU WANT ---------------------------------------------"<<endl<<endl;


if (l > 90 && l <= 100) {
    cout << "Grade A" << endl;
    cout << "---------------------------------CONGRATS FOR GRADE A--------------------------------------" << endl << endl;
} else if (l > 70 && l <= 90) {
    cout << "Grade B+" << endl;
    cout << "---------------------------------CONGRATS FOR GRADE B+--------------------------------------" << endl << endl;
} else if (l > 50 && l <= 70) {
    cout << "Grade B" << endl;
    cout << "---------------------------------CONGRATS FOR GRADE B--------------------------------------" << endl << endl;
} else if (l >= 30 && l <= 50) {
    cout << "Grade C" << endl;
    cout << "---------------------------------CONGRATS FOR GRADE C DO WORK HARD TO GET MORE--------------------------------------" << endl << endl;
} else if (l > 10 && l < 30) {
    cout << "Grade D" << endl;
    cout << "---------------------------------TRY TO WORK HARD AND GET MORE THAN THIS--------------------------------------" << endl << endl;
} else {
    cout << "well try better luck next time" << endl;
}





//loop for assign grade for highest and lowest marks out of 5
cout<<"-------------------GRADEING ACCORDING TO MARKS FOR ALL 5  -------------"<<endl<<endl;

for (int i = 0; i < 5; i++) {
       
if(arr[i]>90 && arr[i]<100){
    cout<<"Grade A"<<endl;

}

else if(arr[i]>70 && arr[i]<80){
    cout<<"Grade B+"<<endl;
}

else if(arr[i]>50 && arr[i]<70){
    cout<<"Grade B"<<endl;
}

else if(arr[i]>30 && arr[i]<40){
    cout<<"Grade C"<<endl;
}
else if(arr[i]>10 && arr[i]<30){
    cout<<"Grade D"<<endl;
}
else{
    cout<<"well try better luck next time"<<endl;
}}

return 0;
}
   

    