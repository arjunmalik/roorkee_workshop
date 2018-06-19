#include <iostream>
#include <map>
#include <iterator>

using namespace std;

bool pairSum(int arr[], int sum, int length){
  map <int, int> pairSum;

  for(int i=0; i<length; i++){
    if(pairSum.find(arr[i]) == pairSum.end()){
      pairSum.insert(pair <int, int> (arr[i], 1));
    }
    else{
      pairSum[arr[i]]++;
    }
  }

  for(int i=0; i<length; i++){
    int remainder = sum - arr[i];
    if(pairSum[remainder] > 0 && remainder != arr[i]){
      cout << "Pair Sum present " << arr[i] << " "<< remainder<< "\n";
      return true;
    }
    else if(pairSum[remainder] == 2 && remainder == arr[i]){
      cout << "Pair Sum present " << arr[i] << " "<< remainder<< "\n";
      return true;
    }
  }

  cout << "Pair Sum not present ";
  return false;
}


int main() {

  int arr[] = {7, 1, 144, 144, 1, 3, 7, 19, 144, 3, 11, 2, 2, 4};
  int sum = 19;
  pairSum(arr, sum, 13);
  return 0;
}
