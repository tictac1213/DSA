#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char c){
        data = c;
        for (int i = 0; i < 26 ; i++)
        {
            children[i] = NULL;
            isTerminal = false;
        }
    }
};

class Trie{
    public: 
    TrieNode* root = new TrieNode('\0');

    void insertInTrie(Trie head, string s){
        
    }
};

int main(){
    


return 0;
}