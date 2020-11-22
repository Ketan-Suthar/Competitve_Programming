#include <bits/stdc++.h>
using namespace std;
#include <vector>
#define SIZE 100000
void Solution()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int countOccurence(int nums[],int n, int target)
{
    bool find = 0;
    int start = 0, end = n-1;
    int first, last;
    int mid;
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        if(nums[mid] == target)
        {
            first = mid;
            end = mid - 1;
            find = 1;
            continue;
        }
        if(target > nums[mid])
            start = mid + 1;
        else
            end = mid -1;
    }
    if(find == 0)
        return -1;
    start = first, end = n-1;
    while(start <= end)
    {
        mid = start + (end - start) / 2;
        if(nums[mid] == target)
        {
            last = mid;
            start = mid + 1;
            continue;
        }
        if(target > nums[mid])
            start = mid + 1;
        else
            end = mid -1;
    }
   
    return last - first + 1;
}
int main()
{
    Solution();
    int t;
    cin >> t;
    while(t--)
    {
        int n, arr[SIZE+1], target;
        cin >> n >> target;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cout << countOccurence(arr, n , target) << "\n";
    }
    return 0;
}