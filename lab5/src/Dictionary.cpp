//
// Created by krystian on 17.11.2023.
//

#include "Dictionary.h"

#include <vector>

void Dictionary::add(const string& word, const string& translation) {
    words[word] = translation;
}

bool Dictionary::remove(const string& word) {
    const auto it = words.find(word);
    if(it == words.end()) return false;
    words.erase(it);
    return true;
}

string Dictionary::show() const {
    string result;
    for(const auto& [word, translation] : words) {
        result.append(word);
        result.append(": ");
        result.append(translation);
        result.append("\n");
    }
    return result;
}

const string& Dictionary::getTranslation(const string& word) const {
    return words.at(word);
}

string Dictionary::showZA() const {
    vector<pair<string, string>> words_sorted;
    //Mozna by zarezerwowac pamiec dla words_sorted
    for(const auto& pair : words) {
        words_sorted.push_back(pair);
    }
    sort(words_sorted.begin(), words_sorted.end(), [](const auto& pair1, const auto& pair2) {
        return pair1.first > pair2.first;
    });
    string result;
    for(const auto& [word, translation] : words_sorted) {
        result.append(word);
        result.append(": ");
        result.append(translation);
        result.append("\n");
    }
    return result;
}
