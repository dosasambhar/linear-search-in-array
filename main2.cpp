#include <iostream>
using namespace std;
bool find(int arr[], int size, int key){
  for(int i=0; i<key; i++){
    if(arr[i]==key)
      return true;
    }
    return false;
  }


int main(){
  int arr[5]={1,2,3,4,5};
  cout<<"enter no."<<endl;
  int key;
  cin>> key;
  if (find(arr,5,key)){
    cout<<"found"<<endl;
  }
    else {
      cout<<"not found"<<endl;
    }

}