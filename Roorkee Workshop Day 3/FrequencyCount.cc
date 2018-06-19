#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int numFreq(int arr[], int num, int length){
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

  cout << numFreq[num];
  return false;
}

int main() {

  int arr[] = {1, 144, 144,1, 3, 144, 3, 11, 2, 2, 4};
  int num = 10003;
  numFreq(arr, num, 11);
  return 0;
}
