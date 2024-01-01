// https://www.codingninjas.com/studio/problems/minimum-cost-to-make-string-valid_1115770?

#include <bits/stdc++.h> 
using namespace std;

int findMinimumCost(string str) {
  if(str.size() % 2 ){
    return -1;
  }
  stack<char> k;
  int cost = 0;
  for(int i = 0; i < str.size(); i++ ){
    if(str[i] == '{'){
      k.push('{');
    }
    else{
      if(k.empty()){
        cost++;
        k.push('{');
      }
      else{
        k.pop();
      }
    }
  }
  while(!k.empty()){
    k.pop();
    cost++;
    k.pop();
  }




  return cost;
}