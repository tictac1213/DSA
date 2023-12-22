// the cout function is implemented differently for int and char array
  #include<iostream>
  using namespace std;
  
  
  int main(){
    char c[]="abcde";
    // char * ch ="abcde"; // never do this

    // also we should noe that char pointers continue printing till they get \0 so some times it goes on printing
    char charz = 'z';
    char *zp = &charz;
    cout << charz<< endl;
    cout << *zp<< endl;
  
  
  return 0;
  }