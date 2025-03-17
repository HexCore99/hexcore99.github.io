## Problem 1
![First Occurence & Last Occurence of an Element in a Sorted Array](/DSA/Question_Image/Searching/Find_First_&_Last_Occurence_Binary.png)
::: code-group
```c++ [BinarySearch Approach] {23-32,35-44}
// clang-format off
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll> 
#define nl '\n'
// clang-format on

pair<ll,ll> firstNlastIdx(vll vec, ll key)
{
    ll lStart = 0;
    ll lEnd = vec.size() - 1;
    ll lMostIndex = -1;

    ll rStart = 0;
    ll rEnd = vec.size() - 1;
    ll rMostIndex = -1;

    while (lStart < lEnd || rStart < rEnd)
    {
        //left Most Idx
        ll lMid = lStart + (lEnd - lStart) / 2;
        if (vec[lMid] == key)
        {
            lEnd = lMid;
            lMostIndex = lMid;
        }
        else if (vec[lMid] > key)
            lEnd = lMid;
        else
            lStart = lMid + 1;

        // right Most Index
        ll rMid = rStart + (rEnd - rStart) / 2;
        if (vec[rMid] == key)
        {
            rStart = rMid + 1;
            rMostIndex = rMid;
        }
        else if (vec[rMid] > key)
            rEnd = rMid;
        else
            rStart = rMid + 1;
    }

    return {lMostIndex, rMostIndex};
}

int main()
{
    vll vec = {1, 2, 2, 2, 3, 3, 3, 3, 4, 5, 6, 7, 8, 9};
    pair<ll,ll> indices =  firstNlastIdx(vec, 3);
    cout <<"("<< indices.first << "," << indices.second << ")" << nl;
    return 0;
}
```

```c++ [Linear Search Approach]
// clang-format off
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define vll vector<ll>
// clang-format on
void firstNlastIndex(vll vec, ll key)
{
    ll firstIndex = -1;
    ll lastIndex = -1;
    for (ll i = 0; i < vec.size(); i++)
    {
        if (vec[i] == key)
        {
            if (firstIndex == -1)
                firstIndex = i;
            lastIndex = i;
        }
    }
    cout << "First Index = " << firstIndex << nl;
    cout << "Last Index = " << lastIndex << nl;
}

int main()
{
    vll vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 10};
    firstNlastIndex(vec, 0);

    return 0;
}
```
:::



## Problem 2
# Find Perfect Square

```c++ [Binary Search Approach]
// clang-format off
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define vll vector<ll> 

// clang-format on
ll perfectSquare(ll key)
{
    ll st = 0;
    ll end = key;

    while (st < end)
    {
        ll mid = st + (end - st) / 2;
        if (mid * mid == key)
            return mid;
        else if (mid * mid > key)
            end = mid;
        else
            st = mid + 1;
    }
    return -1;
}

int main()
{
    cout << perfectSquare(9) << nl;
    return 0;
}

```

## problem 3
If the given key value is found in the array: Delete the value from its current position and shift the remaining elements to fill the gap.

```c++ 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'

ll binary_Search(vll vec, ll key)
{

    ll left = 0;
    ll right = vec.size() - 1;
    while (right >= left)
    {
        ll mid = left + (right - left) / 2;

        if (vec[mid] == key)
            return mid;
        if (vec[mid] < key)
            left = mid + 1;
        else
            right = mid;
    }
    return -1;
}
void deleteTheKey(vll &vec, ll indx)
{
    if (indx != -1)
    {

        for (int i = indx; i < vec.size() - 1; i++)
            vec[i] = vec[i + 1];

        vec.pop_back();
    }
}
int main()
{
    vll vec = {1, 2, 3, 5, 6, 7, 8, 9};

    cout << "Before Delete: " << nl;
    for (auto i : vec)
        cout << i << " ";

    deleteTheKey(vec, binary_Search(vec, 10));

    cout << nl;
    cout << "After Delete: " << nl;
    for (auto i : vec)
        cout << i << " ";

    return 0;
}

```


## problem 4
![Insert an Element in a Sorted Array](/DSA/Question_Image/Searching/Find_Inserting_Position_Binary.png)

```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'

ll binary_Search(vll vec, ll key)
{

    ll left = 0;
    ll right = vec.size() - 1;
    ll leftBoundary = 0;
    while (right >= left)
    {
        ll mid = left + (right - left) / 2;

        if (vec[mid] == key)
            return -1;
        if (vec[mid] < key)

            leftBoundary = left = mid + 1;
        else
            right = mid - 1;
    }
    return leftBoundary;
}

void insertElement(vll &vec, ll pos, ll key)
{
    if (pos != -1)
    {
        vec.push_back(0);
        for (int i = vec.size() - 1; i > pos; i--)
            vec[i] = vec[i - 1];

        vec[pos] = key;
    }
}
int main()
{
    vll vec = {1, 2, 3, 5, 6, 7, 8, 9};

    ll key = 4;

    cout << "Before Insert: " << nl;
    for (auto i : vec)
        cout << i << " ";
    cout << nl;

    insertElement(vec, binary_Search(vec, key), key);
    // OR
    // vec.emplace(vec.begin() + binary_Search(vec, key), key);

    cout << "After Insert: " << nl;
    for (auto i : vec)
        cout << i << " ";

    return 0;
}
```
## problem 5
![Find the Square Root of a Number](/DSA/Question_Image/Searching/Find_First_Occurence.png)
```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll arrtor<ll>
#define nl '\n'

ll findFirstOccurence(ll arr[], ll size, ll target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    ll arr[] = {5, 3, 8, 1, 9};
    ll target = 8;
    ll size = sizeof(arr) / sizeof(arr[0]);
    cout << findFirstOccurence(arr, size, target);

    return 0;
}

```

## problem 6
![Find All Occurences of an Element in a Sorted Array](/DSA/Question_Image/Searching/Find_All_Occurence_Linear.png)
```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'

vll findAllOccurence(vll vec, ll target)
{
    vll occurence;
    for (int i = 0; i < vec.size(); i++)
        if (vec[i] == target)
            occurence.emplace_back(i);

    return occurence;
}

int main()
{
    vll vec = {4, 2, 3, 2, 4, 2};
    ll target = 2;
    vll occurence = findAllOccurence(vec, target);
    for (auto i : occurence)
        cout << i << " ";

    return 0;
}

```

## problem 7
![First Greater Element](/DSA/Question_Image/Searching/Find_First_Greater_Linear.png)

```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'

ll findFirstGreater(vll vec, ll target)
{
    for (auto i : vec)
        if (i > target)
            return i;
    return -1;
}

int main()
{
    vll vec = {3, 5, 7, 2, 8, 10};
    ll target = 6;

    cout << findFirstGreater(vec, target);

    return 0;
}
```

## problem 8
![Find Target Value Binary Search](/DSA/Question_Image/Searching/Find_Target_Value_Binary.png)
```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'
ll binary_Search(vll vec, ll key)
{

    ll left = 0;
    ll right = vec.size() - 1;
    while (right >= left)
    {
        ll mid = left + (right - left) / 2;

        if (vec[mid] == key)
            return mid;
        if (vec[mid] < key)

            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    vll vec = {1,3,5,7,9};
    ll target = 5;
    cout<<binary_Search(vec, target);

    return 0;
}

```

## problem 9
![Search In Descending](/DSA/Question_Image/Searching/Search_In_Descending_Binary.png)
```c++

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'
ll binary_Search(vll vec, ll key)
{

    ll left = 0;
    ll right = vec.size() - 1;
    while (right >= left)
    {
        ll mid = left + (right - left) / 2;

        if (vec[mid] == key)
            return mid;
        if (vec[mid] > key)

            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    vll vec = {9, 7, 5, 3, 1};
    ll target = 7;
    cout << binary_Search(vec, target);

    return 0;
}
```

## problem 10
![Count Target Occurences](/DSA/Question_Image/Searching/Count_Target_Occurence_Binary.png)
```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'
ll binary_Search(vll vec, ll key)
{
    bool found = false;
    ll left = 0;
    ll right = vec.size() - 1;

    ll firstOccurence = -1;
    ll lastOccurence = -1;
    while (right >= left)
    {
        ll mid = left + (right - left) / 2;

        if (vec[mid] == key)
        {
            found = true;
            right = mid - 1;
            firstOccurence = mid;
        }

        else if (vec[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    left = 0;
    right = vec.size() - 1;

    while (right >= left)
    {
        ll mid = left + (right - left) / 2;

        if (vec[mid] == key)
        {
            found = true;
            left = mid + 1;
            lastOccurence = mid;
        }

        else if (vec[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }

    if (found)
        return lastOccurence - firstOccurence + 1;
    else
        return -1;
}

int main()
{
    vll vec = {2,4,4,4, 6, 6, 7};
    ll target = 4;
    cout << binary_Search(vec, target);

    return 0;
}
```

## problem 11
![Find Cloesest Element](/DSA/Question_Image/Searching/Find_Closest_Element_Binary.png)
```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'
ll binary_Search(vll vec, ll key)
{
    ll left = 0, right = vec.size() - 1;
    ll closest = vec[0]; 

    while (left <= right)
    {
        ll mid = left + (right - left) / 2;

        
        if (abs(vec[mid] - key) < abs(closest - key))
            closest = vec[mid];

        if (vec[mid] == key)
            return vec[mid]; 

        if (vec[mid] < key)
            left = mid + 1; 
        else
            right = mid - 1; 
    }
    return closest;
}
int main()
{
    vll vec = {1, 3, 8, 10, 15};
    ll target = 3;
    cout << binary_Search(vec, target);

    return 0;
}

```
## problem 12
![Find Peak Element](/DSA/Question_Image/Searching/Find_Peak_Binary.png)
```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'
ll findPeak(vll vec)
{
    ll left = 0;
    ll right = vec.size() - 1;

    while (left < right)
    {
        ll mid = left + (right - left) / 2;

        if (vec[mid] < vec[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }
    return vec[left];
}

int main()
{
    vll vec = {1, 3, 8, 12, 4, 2};
    // vll vec = {1, 12, 8, 4, 2};

    cout << findPeak(vec);

    return 0;
}
```

## problem 13
![CT Question Kodu](/DSA/Question_Image/Searching/Kodu.jpg)
```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'

void insertionSort(vll &vec)
{
    for (ll i = 1; i < vec.size(); i++)
    {
        ll key = vec[i];
        ll j = i - 1;

        while (j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}
ll binSearch(vll vec, ll budget)
{
    ll left = 0;
    ll right = vec.size();

    while (left < right)
    {
        ll mid = left + (right - left) / 2;

        if (vec[mid] <= budget)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main()
{
    // vll vec = {1, 3, 8, 12, 4, 2};
    vll vec = {50, 20, 80, 40, 60, 30, 90};
    ll budget = 10;

    insertionSort(vec);
    ll result = binSearch(vec, budget);

    if (result == vec.size())
        cout << "Kodu Is not for you!" << nl;
    else if (budget == vec[result])
        cout << "Kodu lover gets " << vec[result] << " taka (exact match) watermelon" << nl;
    else
        cout << "Kodu lover gets " << vec[result] << " taka (next available price within the budget) watermelon" << nl;

    return 0;
}

```