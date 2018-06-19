#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int numFreq(int arr[], int length){
  map <int, int> numFreq;
  for(int i=0; i<length; i++){
    if(numFreq.find(arr[i]) == numFreq.end()){
      numFreq.insert(pair <int, int> (arr[i], 1));
    }
    else
    {
      numFreq[arr[i]]++;
    }
  }

  for(int i=0; i<length; i++){
    if(numFreq[arr[i]] >= (length/2 + 1)){
      cout<<"Majority Element Found - " << arr[i];
      return arr[i];
    }
  }
  cout<<"Majority Element not found ";
  return -1;
}

int main() {

  int arr[] = {2, 2, 2,1, 3, 2, 3, 11, 2, 2, 4};
  numFreq(arr, 11);
  return 0;
}
