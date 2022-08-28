//SMSM ON CODE
//CH.3 big-O notation

#include <bits/stdc++.h>
using  namespace std;
//find max element in array
//complexity is O(n)
int find_max(const int arr[],int size){
    int max_element = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if(arr[i]>max_element)
            max_element=arr[i];
    }
    return max_element;
}


//function checks if an array has any duplicates
//complexity is O(n*n)
bool contains_duplicates (const int arr[],int size ){
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if(i!=j && arr[i]==arr[j])
                return 1;//True
        }
    }
    return 0;//False
}


//function checks if an array has any duplicates
//complexity is O(n*n)
bool faster_contains_duplicates (const int arr[],int size ){
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size; ++j) {
            if( arr[i]==arr[j])
                return 1;//contains duplicates
        }
    }
    return 0;//No contains duplicates
}

//binary search
//complexity is O(logN)
//The array must be sorted
int binary_search(const int arr[],int size,int item){
    int left =0,right =size-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==item)
            return mid;
        else if (arr[mid]<item)
            left = mid +1;
        else
            right = mid -1;
    }
    return -1;//Unsuccessful result
}


int main () {
    return 0;
}
