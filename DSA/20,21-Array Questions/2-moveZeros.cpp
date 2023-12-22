 #include<iostream>
 using namespace std;



 int main()
 {
    int n;
    cout << "Enter the number of elements in array ";
    cin >> n;
    int arr[n], zeroPtr, i, flag = 1;

    // for (i = 0; i < n && flag ; i++)
    // {
    //     cin >> arr[i];
    //     if(arr[i] == 0){
    //         flag = 0;
    //         zeroPtr = i;
    //     }
    // }
    // while(i < n)
    // {
    //    cin >> arr[i];
    //    if (arr[i] != 0)
    //    {
    //     swap(arr[zeroPtr],arr[i]);
    //     zeroPtr++;

    //    }
    //    i++;
    // }

    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }

    int k = 0;


for (int j = 0; j < n ; j++)
{
    if (arr[j] != 0)
    {
        swap(arr[k],arr[j]);
        k++;
    }
    
}
    
    
   cout << "The final array is ";
   for (int j = 0; j < n ; j++)
   {
    cout << arr[j] << " ";
   }
    

    return 0;
 }