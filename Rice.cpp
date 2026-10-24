#include<iostream>
using namespace std;
int main(){
  
  
  //part1-variable declaration
  int rice, water;
  string  result;
  
  //part2-Input data
  cout << "Input Rice: ";
  cin >> rice;
  cout << "Input Water : ";
  cin >> water;
  //part3- processing-calculation
  if(water==0 || rice==0){
    cout<<"ERROR\n"<<endl;
    
  }else{
    if(rice > water){
      cout<<"SoftRice, Not delicious"<<endl;
    }else if(rice==water){
      cout<<"SoftRice, wow delicious"<<endl;
    }else{
      cout<<"Soft rice"<<endl;
    }
//    cout << "Result: " << result;  
  }  
 
  
  return 0;
  
  
  
}
