#include<iostream>
using namespace std;



void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort (int arr[], int n )
{
    int opp =0;
    for (int i = 1; i < n ; i++)
    {
        bool check = true;
        for (int j = 0 ; j < n-i ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j +1]);
                check = false;
            }
            opp++;
        }
        if(check)
        {
            break;
        }
    }
    cout<<opp<<endl;

}

int main(){
    int n;
    cin >> n; 
    int arr[n];
    cout << "Enter the elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr,n);
    display(arr,n);

return 0;
}