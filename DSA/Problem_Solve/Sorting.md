---
prev: false
---

## problem 1
![Sorting](/DSA/Question_Image/Sorting/kth_Smallest.png)

```c++
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void selectionSort(vll &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[minIndex])
                minIndex = j;
        }
        swap(vec[i], vec[minIndex]);
    }
}
vll take_Input()
{
    int n;
    cin >> n;
    vll vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}

int main()
{
    // vll vec = take_Input();

    vll vec = {6, 5, 1, 3, 4};

    int k;
    cin >> k;

    selectionSort(vec);
    cout << vec[k - 1] << nl;

    return 0;
}

```

## Problem 2
![Sorting](/DSA/Question_Image/Sorting/Median_Of_The_Array.png)

```c++
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void selectionSort(vll &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[minIndex])
                minIndex = j;
        }
        swap(vec[i], vec[minIndex]);
    }
}

ll findMedian(vll vec)
{
    selectionSort(vec);
    return vec[vec.size() / 2];
}

vll take_Input()
{
    int n;
    cin >> n;
    vll vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}

int main()

{
    // vll vec = take_Input();

    vll vec = {6, 5, 1, 3, 4};

    cout << findMedian(vec) << nl;

    return 0;
}

```
## Problem 3
![Sorting](/DSA/Question_Image/Sorting/Find_Smallest_Difference.png)

```c++
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void selectionSort(vll &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[minIndex])
                minIndex = j;
        }
        swap(vec[i], vec[minIndex]);
    }
}

ll findSmallestDiff(vll vec)
{
    ll minDiff = LLONG_MAX;
    for (int i = 1; i < vec.size(); i++)
        minDiff = min(minDiff, (vec[i] - vec[i - 1]));

    return ((minDiff == LLONG_MAX) ? 0 : minDiff);
}

vll take_input()
{
    int n;
    cin >> n;

    vll vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}
int main()
{

    // vll vec = take_input();

    vll vec = {6, 5, 1, 3, 4, 4};

    for (auto &i : vec)
        cin >> i;

    selectionSort(vec);
    cout << findSmallestDiff(vec) << nl;

    return 0;
}

```


## Problem 4
![Sorting](/DSA/Question_Image/Sorting/Sort_By_Abs_Value.png)

```c++ 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void sortByAbsValue(vll &vec)
{
    // Selection Sort
    for (int i = 0; i < vec.size() - 1; i++)
    {
        ll minIdx = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (abs(vec[j]) < abs(vec[minIdx]))
                minIdx = j;
        }
        swap(vec[i], vec[minIdx]);
    }
}

vll take_Input()
{
    int n;
    cin >> n;
    vll vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}
int main()
{

    // vll vec = take_Input();

    vll vec = {6, 5, 1, 3, 4, -10, -5};

    sortByAbsValue(vec);
    for (auto &i : vec)
        cout << i << " ";

    return 0;
}

```

## Problem 5
![Sorting](/DSA/Question_Image/Sorting/sort_According_Length.png)

```c++ 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void sortByLength(vector<string> &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j].length() < vec[minIndex].length())
                minIndex = j;
        }
        swap(vec[i], vec[minIndex]);
    }
}
vector<string> take_Input()
{
    int n;
    cin >> n;
    vector<string> vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}
int main()
{
    // vector<string> vec = take_Input();

    vector<string> vec = {"Optimus", "Prime", "heXcore", "Knight", "Fury"};

    sortByLength(vec);
    for (auto &i : vec)
        cout << i << " ";

    return 0;
}

```

## Problem 6
![Sorting](/DSA/Question_Image/Sorting/Odd_Des__Even_Asc.png)

::: code-group
```c++ [Approach 1]
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void oddDesc_evenAsc(vll &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[index] && !(j % 2) && !(i % 2))
                index = j;
            else if (vec[j] > vec[index] && (j % 2) && (i % 2))
                index = j;
        }
        swap(vec[i], vec[index]);
    }

}

void print_me(vll vec)
{
    for (auto &i : vec)
        cout << i << " ";
}
vll take_Input()
{
    int n;
    cin >> n;
    vll vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}

int main()
{
    vll vec = {16, 17, 4, 18, 1, 20, 5, 12};

    // vll vec = take_Input();

    oddDesc_evenAsc(vec);
    print_me(vec);

    return 0;
}
```


```c++ [Approach 2]
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void oddDesc_evenAsc(vll &vec)
{
    // sorting even indices
    for (int i = 0; i < vec.size() - 1; i += 2)
    {
        int minIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[minIndex] && (j % 2) == 0)
                minIndex = j;
        }
        swap(vec[i], vec[minIndex]);
    }

    //sorting odd indices
    for (int i = 1; i < vec.size() - 1; i += 2)
    {
        int maxIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] > vec[maxIndex] && (j % 2))
                maxIndex = j;
        }
        swap(vec[i], vec[maxIndex]);
    }
}
void print_me(vll vec)
{
    for (auto &i : vec)
        cout << i << " ";
}
vll take_Input()
{
    int n;
    cin >> n;
    vll vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}

int main()
{
    vll vec = {16, 17, 4, 18, 1, 20, 5, 12};

    // vll vec = take_Input();

    oddDesc_evenAsc(vec);
    print_me(vec);

    return 0;
}

```
:::

## Problem 7
![Sorting](/DSA/Question_Image/Sorting/Lngst_Consequetive_Sequence.png)

```c++ 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void selectionSort(vll &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[minIndex])
                minIndex = j;
        }
        swap(vec[i], vec[minIndex]);
    }
}
ll lngst_cnsqtv_sbsqnc(vll vec)
{
    ll max_seq = 0;
    ll temp = 0;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i + 1] - vec[i] == 1)
        {
            temp++;
            max_seq = max(max_seq, temp);
        }
        else
            temp = 0;
    }
    return ++max_seq;
}

void print_me(vll vec)
{
    for (auto &i : vec)
        cout << i << " ";
}

vll take_Input()
{
    int n;
    cin >> n;
    vll vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}
int main()
{
    vll vec = {1, 9, 3, 10, 4, 20, 2};

    // vll vec = take_Input();

    selectionSort(vec);
    cout << lngst_cnsqtv_sbsqnc(vec) << nl;
    return 0;
}
```

## Problem 8
![Sorting](/DSA/Question_Image/Sorting/Sort_By_Freq.png)

```c++
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define vll vector<ll>
#define nl '\n'

vll sortByFreq(vll vec)
{
    vll temp;

    unordered_map<ll, ll> freq;
    for (int i = 0; i < vec.size(); i++)
    {
        freq[vec[i]]++;
    }

    while (!freq.empty())
    {
        auto mx = freq.begin();
        for (auto itr = freq.begin(); itr != freq.end(); ++itr)
        {
            if (mx->second < itr->second)
                mx = itr;
        }

        ll val = mx->second;
        while (val--)
        {
            temp.push_back(mx->first);
        }
        freq.erase(mx);
    }
    return temp;
}

void print_me(vll vec)
{
    for (auto &i : vec)
        cout << i << " ";
}

vll take_Input()
{
    int n;
    cin >> n;
    vll vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}
int main()
{
    vll vec = {4, 3, 6, 6, 6, 6, 1, 3, 4, 4, 1, 0, 0};

    // vll vec  = take_Input();
    vll sorted = sortByFreq(vec);
    print_me(sorted);

    return 0;
}

```

## Problem 9
![Sorting](/DSA/Question_Image/Sorting/Merge_and_Sort.png)

```c++
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void selectionSort(vll &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < vec[minIndex])
                minIndex = j;
        }
        swap(vec[i], vec[minIndex]);
    }
}

vll merge(vll vec1, vll vec2)
{
    vll merge;
    for (int i = 0; i < vec1.size(); i++)
        merge.push_back(vec1[i]);

    for (int i = 0; i < vec2.size(); i++)
        merge.push_back(vec2[i]);

    // sort merged vector
    selectionSort(merge);

    return merge;
}

void print_me(vll vec)
{
    for (auto &i : vec)
        cout << i << " ";
}

vll take_Input()
{
    int n;
    cin >> n;
    vll vec(n);
    for (auto &i : vec)
        cin >> i;

    return vec;
}
int main()
{
    // vll vec1 =  take_Input();
    // vll vec2 =  take_Input();

    vll vec1 = {1, 16, 13, 14, 4};
    vll vec2 = {15, 12, 5, 3, 7};

    vll sorted = merge(vec1, vec2);
    print_me(sorted);
    return 0;
}
```

## Problem 10
![Sorting](/DSA/Question_Image/Sorting/Sort_By_Duration.png)

```c++ 
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define vll vector<ll>
#define nl '\n'

vector<pair<ll, ll>> sortByDuration(vector<pair<ll, ll>> vec)
{
    unordered_map<ll, ll> mp;

    ll track = 0;
    for (auto &pr : vec)
    {
        mp[abs(pr.first - pr.second)] = track++;
    }
    vector<pair<ll, ll>> sorted;
    while (!mp.empty())
    {
        auto minn = mp.begin();

        for (auto itr = mp.begin(); itr != mp.end(); ++itr)
        {
            if (itr->first < minn->first)
                minn = itr;
        }
        sorted.push_back(vec[minn->second]);
        mp.erase(minn);
    }
    return sorted;
}

void take_Input(vector<pair<ll, ll>> &vec)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll first, second;
        cin >> first >> second;

        vec.push_back({first, second});
    }
}
int main()
{
    // vector<pair<ll, ll>> vec;
    // take_Input(vec);

    vector<pair<ll, ll>> vec = {{2, 5}, {1, 2}, {4, 6}};
    vector<pair<ll, ll>> sorted = sortByDuration(vec);

    for (auto &pr : sorted)
        cout << "(" << pr.first << " " << pr.second << ") ";

    return 0;
}

```