#include<iostream>
#include<array>

using namespace std;

// Main Function
int main() {
array<int,7> arr = {4,3,5,7,9,1,2};
unsigned int sum = INT_MIN;
cout<<"Enter the target sum : ";
cin>>sum;

// Introspect Sort bounded by O(nlogn) - Insertion Sort->Quick Sort, Heap Sort
sort(arr.begin(), arr.end());
for(int i = 0, j = arr.size() - 1; i < j;) {
    // Duplicates can be handled by incrementing i, decrementing j if equal to
    // next/previous values
    int target = arr[i] + arr[j];
    if(target == sum) {
        cout<<arr[i]<<" , "<<arr[j]<<endl;
        i++;
        j--;
        continue;
    } else if (target < sum) {
        i++;
    } else {
        j--;
    }
}

return 0;
}
