#include <iostream>
#include <map>
#include <iterator>

using namespace std;

bool pairSum(int arr[], int sum, int length){
  map <int, int> pairSum;
  for(int i=0; i<length; i++){
      pairSum.insert(pair <int, int> (arr[i], 1));
  }

  for(int i=0; i<length; i++){
    int remainder = sum - arr[i];
    if(pairSum[remainder] == 1){
      cout << "Pair Sum present " << arr[i] << " "<< remainder<< "\n";
      return true;
    }
  }
  cout << "Pair Sum not present ";
  return false;
}


int main() {

  int arr[] = {1, 144, 144, 1, 3, 144, 3, 11, 2, 2, 4};
  int sum = 14;
  pairSum(arr, sum, 11);
  return 0;
}
