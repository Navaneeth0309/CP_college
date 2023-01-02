#include<iostream>

using namespace std;

void subArrWithSumKOptimal(int arr[], int n, int k) {
  int start = 0, end = -1, sum = 0;
  while (start < n) {
    while ((end + 1 < n) && (sum + arr[end + 1] <= k))
      sum += arr[++end];

    if (sum == k) {
      for (int p = start; p <= end; p++)
        cout << arr[p] << " ";
      cout << "\n";
    }
    sum -= arr[start];
    start++;
  }

}
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Subarray with given sum is: " << endl;
    subArrWithSumKOptimal(arr, n, k);
    return 0;
}
