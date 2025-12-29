#include <bits/stdc++.h>
using namespace std;

// int factorial(int n)
// {

//     if (n == 0)
//         return 1;

//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// int power(int n,int pow){
//         if(pow==0){
//             return 1;

//         }

//         else{
//             return n*power(n,pow-1);
//         }
// }

// int count(int n){
//     if(n==1)
//     return 1;

//     cout<<n<<" \t";
//     return count(n-1);
// }

// int fib(int n){
//     if(n==0||n==1){
//         return n;
//     }
//     cout<< n<<endl;
//     return fib(n-1)+fib(n-2);
// }
// int binar(int arr[], int target, int s, int e)
// {
//     if (s > e)
//         return -1;
//     int m = s + (e - s) / 2;

//     if (arr[m] == target)
//         return m;
//     if (arr[m] > target)
//     {
//         return binar(arr, target, s, m - 1);
//     }
//     else
//     {
//         return binar(arr, target, m + 1, e);
//     }
// }

// int sum(int arr[], int i, int n)
// {
//     if (i == n)
//     {
//         return 0;
//     }
//     return arr[i] + sum(arr, i+1, n);
// }

// bool linear(int *arr, int i, int target,int n)
// {
//     if(i==n){
//         return false;
//     }
//     if (arr[i] == target)
//         return true;

//     else
//     {
//         return linear(arr, i + 1, target,n);
//     }
// }

// void reverse(string &rev, int i, int j)
// {
//     if (i >= j)
//         return;

//     else
//     {
//         swap(rev[i], rev[j]);
//         i++;
//         j--;
//         reverse(rev, i, j);
//     }
// }

bool palindrome(string str, int i, int j)
{
    if (i >= j)
        return true;
    if (str[i] != str[j])
        return false;

    i++;
    j--;
    return palindrome(str, i, j);
}

int main()
{
    // cout << "the factorial is " << factorial(4);
    // cout << "the power is " << power(3,3);
    // cout << "the count is " << count(1000000);
    // cout << "the fib  is " << fib(6);
    int arr[] = {
        1,
        3,
        4,
        6,
        9,
        12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int e = n - 1;

    string s = "cat ";

    // cout << " the biunary search reasult is " << binar(arr, 34, 0, n);
    // cout << " the sum of the array reasult is " << sum(arr, 0, n);
    // cout << " the linear search for the number is " <<((linear(arr,0,6,n))?"found":"not found");
    // reverse(s, 0, s.size() - 1);
    // cout << " the revereed string is " << s;


    string pal="NOON";
    string str=s;
    cout << " checking the palindrome ::::->" <<(palindrome(str,0,str.size()-1)?"found":"not found");
    return 0;
}