#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter position to insert: ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    if(pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    
    for(int i = n; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = value;
    n++;

    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,i,j,elem;
    vector<int>arr;
    cout << "enter number of elements in the array";
    cin>>n;
    cout<<"enter array elements";
    for(i=1;i<=n;i++)
    {
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"which element has to be removed"<<"\t";
    cin>>elem;
    for(i=1;i<=n;i++)
    {
        if(arr[i]==elem)
        {
            for(j=i;j<n;j++)
            {
                arr[j]=arr[j+1];
            }
            break;
        }
    }
    for(i=0;i<=n-2;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}


OUTPUT:
 



























                                                              //TRAVERSAL//
#include <iostream>
using namespace std;

int main() {
  int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter items";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray elements are: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
