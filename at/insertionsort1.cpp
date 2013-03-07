#include <map>
#include <iostream>
#include <vector>
using namespace std;

void output(vector <int>  arr)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        if (i == 0)
        {
            cout<<arr[i];
        }
        else
        {
            cout<<" "<<arr[i];
        }
    }
    cout<<endl;
}

void insertionSort(vector <int>  arr) {
    int i;
    int s = arr.size();
    int tmp = arr[s-1];
    for (i = s - 2; i >= 0; --i)
    {
        if (arr[i] > tmp)
        {
            arr[i+1] = arr[i];
            output(arr);
        }
        else
        {
            arr[i+1] = tmp;
            break;
        }
    }
    if (i < 0)
    {
        arr[0] = tmp;
    }
    output(arr);
}

int main() {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }
    insertionSort(_ar);
    return 0;
}

