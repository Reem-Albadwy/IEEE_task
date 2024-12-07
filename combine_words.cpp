#include <iostream>
#include <string>
using namespace std;
string combine_Words(const string& word1, const string& word2) {
    string combined_Word;
    int max_Length = max(word1.size(), word2.size());
    for (int i = 0; i < max_Length; i++) {
        if (i < word1.size())
            combined_Word += word1[i];
        if (i < word2.size()) 
            combined_Word += word2[i];
    }
    return combined_Word;
}

int main() {
    cout << combine_Words("Ahmed is", "Amazing") << "\n";
    cout << combine_Words("SCE WORD", "ERT") << "\n";      
    cout << combine_Words("IEEE ManCSC", "Backend Committee") << "\n";  
}
