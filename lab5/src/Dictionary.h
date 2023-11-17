//
// Created by krystian on 17.11.2023.
//

#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <map>
#include <string>

using namespace std;

class Dictionary {
private:
    map<string, string> words;
public:
    Dictionary() = default;
    void add(const string& word, const string& translation);
    bool remove(const string& word);
    string show() const;
    const string& getTranslation(const string& word) const;
    string showZA() const;
};



#endif //DICTIONARY_H
