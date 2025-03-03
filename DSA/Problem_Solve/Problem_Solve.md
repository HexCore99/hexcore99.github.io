# Problem 1
## Find the First Occurence & Last Occurence of an Element in a Sorted Array
::: code-group
```c++ [BinarySearch Approach]
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



# Problem 2
## Find Perfect Square

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