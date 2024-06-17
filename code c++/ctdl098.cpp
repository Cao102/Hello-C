#include <iostream>
#include <stack>
#include <sstream>

std::string reverseWord(std::string word) {
    std::stack<char> charStack;
   
    for (char c : word) {
        charStack.push(c);
    }
   
    std::string reversedWord = "";
    while (!charStack.empty()) {
        reversedWord += charStack.top();
        charStack.pop();
    }
    return reversedWord;
}

std::string reverseSentence(std::string sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::string reversedSentence = "";
    
    while (iss >> word) {
        reversedSentence += reverseWord(word) + " ";
    }
    return reversedSentence;
}

int main() {
    int T;
    std::cin >> T; 

    
    for (int i = 0; i < T; ++i) {
        std::cin.ignore(); // 
        std::string sentence;
        std::getline(std::cin, sentence); 

        std::cout << reverseSentence(sentence) << std::endl; 
    }

    return 0;
}