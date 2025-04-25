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

::: code-group
```c++ [Selection Sort]
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
```c++ [Bubble Sort]
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void sortByAbsValue(vll &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size() - i - 1; j++)
        {
            if (abs(vec[j]) > abs(vec[j + 1]))
                swap(vec[j], vec[j + 1]);
        }
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

```c++ [Insertion Sort]
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void sortByAbsValue(vll &vec)
{
    for (int i = 1; i < vec.size(); i++)
    {
        ll key = vec[i];
        ll j = i - 1;

        while (j >= 0 && abs(vec[j]) > abs(key))
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
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

:::

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
```c++ [Selection Sort]
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


```c++ [Bubble Sort]
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void oddDesc_evenAsc (vll &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = 0; j < vec.size() - i - 2; j++)
        {
            if (vec[j] < vec[j + 2] && (j % 2))
                swap(vec[j], vec[j + 2]);
            if (vec[j] > vec[j + 2] && !(j % 2))
                swap(vec[j], vec[j + 2]);
        }
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


```c++ [Insertion Sort]
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void oddDesc_evenAsc(vll &vec)
{
    int n = vec.size();

    for (int i = 2; i < n; i++)
    {
        ll key = vec[i];
        ll j = i - 2;
        if (j % 2)
        {
            while (j >= 0 && j % 2 && vec[j] < key)
            {
                vec[j + 2] = vec[j];
                j -= 2;
            }
        }
        else if (!(j % 2))
        {

            while (j >= 0 && !(j % 2) && vec[j] > key)
            {
                vec[j + 2] = vec[j];
                j -= 2;
            }
        }
        vec[j + 2] = key;
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
::: code-group
```c++ [Bubble Sort]
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define vll vector<ll>
#define nl '\n'

ll compare(ll x, ll y)
{
    return x - y;
}

void bubleSort(vll &vec, ll arr[])
{
    ll n = vec.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compare(arr[vec[j]], arr[vec[j + 1]]) > 0)
            {
                swap(vec[j], vec[j + 1]);
            }
            if (compare(arr[vec[j]], arr[vec[j + 1]]) == 0)
            {
                if (vec[j] > vec[j + 1])
                    swap(vec[j], vec[j + 1]);
            }
        }
    }
}

void print_me(vll vec)
{
    for (auto &i : vec)
        cout << i << " ";
    cout << nl;
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
    // vll vec  = take_Input();
    vll vec = {4, 3, 6, 6, 6, 6, 1, 3, 4, 4, 1, 0, 0};
    // vll vec = {4, 3, 1, 6, 1, 3, 4, 4};
    ll arr[vec.size() + 1] = {0};

    for (int i = 0; i < vec.size(); i++)
        arr[vec[i]]++;

    bubleSort(vec, arr);
 
    print_me(vec);

    return 0;
}
```
```c++ [Selection Sort]


#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define vll vector<ll>
#define nl '\n'
void print_me(vll vec)

ll compare(ll x, ll y)
{
    return x - y;
}



void selectionSort(vll &vec, ll arr[])
{

    ll n = vec.size();
    for (int i = 0; i < n; i++)
    {

        ll index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (compare(arr[vec[j]], arr[vec[index]]) > 0)
            {
                index = j;
            }
            if (compare(arr[vec[j]], arr[vec[index]]) == 0)
            {
                if (vec[j] < vec[index])
                    index = j;
            }
        }

        swap(vec[index], vec[i]);
    }
}
void print_me(vll vec)
{
    for (auto &i : vec)
        cout << i << " ";
    cout << nl;
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
    // vll vec  = take_Input();
    vll vec = {4, 3, 6, 6, 6, 6, 1, 3, 4, 4, 1, 0, 0};
    // vll vec = {4, 3, 1, 6, 1, 3, 4, 4};
    ll arr[vec.size() + 1] = {0};

    for (int i = 0; i < vec.size(); i++)
        arr[vec[i]]++;

    selectionSort(vec, arr);
  
    print_me(vec);

    return 0;
}


```
```c++ [Insertion Sort]

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define vll vector<ll>
#define nl '\n'


ll compare(ll x, ll y)
{
    return x - y;
}

void insertionSort(vll &vec, ll arr[])
{
    ll n = vec.size();
    for (int i = 1; i < n; i++)
    {
        ll key = vec[i];
        ll j = i - 1;
        while (j >= 0 && (compare(arr[key], arr[vec[j]]) > 0 ||
                          (compare(arr[key], arr[vec[j]]) == 0 && vec[j] > key)))
        {
            vec[j + 1] = vec[j];

            j--;
        }
        vec[j + 1] = key;
    }
}


void print_me(vll vec)
{
    for (auto &i : vec)
        cout << i << " ";
    cout << nl;
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
    // vll vec  = take_Input();
    vll vec = {4, 3, 6, 6, 6, 6, 1, 3, 4, 4, 1, 0, 0};
    // vll vec = {4, 3, 1, 6, 1, 3, 4, 4};
    ll arr[vec.size() + 1] = {0};

    for (int i = 0; i < vec.size(); i++)
        arr[vec[i]]++;

    insertionSort(vec, arr);
    print_me(vec);

    return 0;
}


```
:::

## Problem 9
![Sorting](/DSA/Question_Image/Sorting/Sort_By_Duration.png)

::: code-group
```c++ [Bubble Sort]
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define vll vector<ll>
#define nl '\n'

int compare(pair<ll, ll> pr)
{
    return pr.second - pr.first;
}

void sortByDuration(vector<pair<ll, ll>> &vec)
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = 0; j < vec.size() - i - 1; j++)
        {
            if (compare(vec[j]) > compare(vec[j + 1]))
                swap(vec[j], vec[j + 1]);
        }
    }
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

{% raw %}
vector<pair<ll, ll>> vec = {{2, 5}, {1, 2}, {4, 6}};
{% endraw %}


    sortByDuration(vec);

    for (auto x : vec)
        cout << "(" << x.first << "," << x.second << ") ";

    return 0;
}

```

```c++ [Selection Sort]
#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define vll vector<ll>
#define nl '\n'

int compare(pair<ll, ll> pr)
{
    return pr.second - pr.first;
}


void sortByDuration(vector<pair<ll, ll>> &vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        ll index = i;
        for (int j = i + 1; j < vec.size(); j++)
            if (compare(vec[index]) > compare(vec[j]))
                index = j;

        swap(vec[index], vec[i]);
    }
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
    {% raw %}
    vector<pair<ll, ll>> vec = {{2, 5}, {1, 2}, {4, 6}};
    {% endraw %}

    sortByDuration(vec);


    for (auto x : vec)
        cout << "(" << x.first << "," << x.second << ") ";

    return 0;
}

```
```c++ [Insertion Sort]

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define vll vector<ll>
#define nl '\n'

int compare(pair<ll, ll> pr)
{
    return pr.second - pr.first;
}


void sortByDuration(vector<pair<ll, ll>> &vec)
{
    for (int i = 1; i < vec.size(); i++)
    {
        pair<ll, ll> key = vec[i];
        ll j = i - 1;
        while (j >= 0 && compare(vec[j]) > compare(key))
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
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
{% raw %}
    vector<pair<ll, ll>> vec = {{2, 5}, {1, 2}, {4, 6}};
{% endraw %}

    sortByDuration(vec);


    for (auto x : vec)
        cout << "(" << x.first << "," << x.second << ") ";

    return 0;
}

```

:::

## problem 10
![Sorting](/DSA/Question_Image/Sorting/Sort_By_Length_insertion.png)

```c++
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define nl '\n'

void insertionSort(vector<string> &vec)
{
    for (int i = 1; i < vec.size(); i++)
    {
        string str = vec[i];
        ll j = i - 1;

        while (j >= 0 && vec[j].length() > str.length())
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = str;
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

    // vector<string> vec = {"Optimus", "Primuss", "heXcore", "Knight", "Fury"};
    vector<string> vec = {"apple", "banana", "kiwi", "grape", "orange"};

    insertionSort(vec);
    for (auto &i : vec)
        cout << i << " ";

    return 0;
}


```


## problem 11
![Sorting](/DSA/Question_Image/Sorting/Sort_By_Sum_Of_Digit_Selection.png)

```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'

ll digitSum(ll digit)
{
    ll sum = 0;
    while (digit > 0)
    {
        sum += digit % 10;
        digit /= 10;
    }
    return sum;
}

void sortBySumOfDigit(vll &vec)
{
    unordered_map<ll, ll> oldIndex;
    for (int i = 0; i < vec.size(); i++)
        oldIndex[vec[i]] = i;

    for (int i = 0; i < vec.size(); i++)
    {
        ll minIndx = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (digitSum(vec[minIndx]) > digitSum(vec[j]))
                minIndx = j;
            if (digitSum(vec[minIndx]) == digitSum(vec[j]) && j> oldIndex[vec[j]])
                swap(vec[j], vec[minIndx]);
        }
        swap(vec[i], vec[minIndx]);
    }
}

int main()
{

    vll vec = {19, 28, 92, 35, 47};
    sortBySumOfDigit(vec);
    for (auto &x : vec)
        cout << x << " ";
    return 0;
}

```
## problem 12

![Sorting](/DSA/Question_Image/Sorting/Sort_Float_Bubble.png)

```c++
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define nl '\n'

void sort_Float(vector<double> &vec)
{
    ll n = vec.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
                swap(vec[j], vec[j + 1]);
        }
    }
}
int main()
{
    vector<double> vec = {3.14, 2.71, 1.41, 4.67, 2.98};
    sort_Float(vec);
    for (auto &x : vec)
        cout << x << " ";
    return 0;
}

```