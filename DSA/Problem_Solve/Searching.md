## Problem 1
# Find the First Occurence & Last Occurence of an Element in a Sorted Array
::: code-group
```c++ [BinarySearch Approach] {23-32,35-44}
// clang-format off
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll> 
#define nl '\n'
// clang-format on

void firstNlastIdx(vll vec, ll key)
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

    cout << "Left Index = " << lMostIndex << nl;

    cout << "Right Index = " << rMostIndex << nl;
}

int main()
{
    vll vec = {1, 2, 2, 2, 3, 3, 3, 3, 4, 5, 6, 7, 8, 9};
    firstNlastIdx(vec, 3);
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
If the given key value is not found: Insert the value into its correct position in the already sorted array, ensuring the array remains sorted after the insertion.

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
