#include <iostream>
#include <algorithm>
// #include <boost/algorithm/string.hpp>
// #include <boost/tokenizer.hpp>
#include <regex>

// typedef boost::tokenizer <boost::char_separator<char>> tokenizer;

using namespace std;
void print(char x){
    cout<<x<<"|";
}
char toUpper(char ch){
    if((ch>='a' and ch<='z'))
      return ch-32;
    return ch;
}

int main() {
//    string line1="Programowanie";
//    string line2("Programowanie");
//
//    cout << "Podaj slowo: " << endl;
//    cin>>line1;
//    cin.clear();
//    cin.ignore();
//
//    cout << "Wczytane slowo: " << line1 << endl;
//    getline(cin, line2);
//    cout << "Zadanie: " << line2 << endl;
//
//
//
//    if(line1==line2) cout << "Napisy sa takie same" << endl;
//    else cout << "Napisy roznia sie" << endl;
//
//    line1 = line1 + " " + line2;
//
//    cout << "Napis: " << line1 << endl;
//    cout << "Druga litera: " << line1[1] << endl;
//
//    cout << "Napis w for: " << endl;
//    for(int i = 0; i < line1.length(); i++) {
//        cout << line1[i];
//    }
//    cout << endl;
//
//    line1.append(" i psa");
//    cout<<"Napis po append: "<<line1<<endl;
//    int ind=line1.find('a');
//    cout<<"Pierwsze wystapienie znkau 'a' "<<ind<<endl;
//    ind=line1.find('a',7);
//    cout<<"Pierwsze wystapienie znkau 'a' po 7 pozycji " <<ind<<endl;
//    ind=line1.find_last_not_of("kgtoa");
//    cout<< "Ostatnie wystepienie litery ktora nie jestkgtoa: "<<ind<<endl;
//    line2=line1.substr(0,3);
//    cout<<"Substr(0,3): "<<line2<<endl;
//    line1.insert(line1.begin(),'*');
//    line1.push_back('*');
//    cout<<"Napis po insert i push_back: "<<line1<<endl;
//    for (string:: iterator it = line1.begin();it != line1.end(); it++)
//        cout << *it;
//
//    string::iterator del;
//
//    del = line1.erase(line1.begin()+0,line1.begin()+5);
//    cout<<*del<<endl;
//    cout<<"Napis po erase: "<<line1<<endl;
//
//    cout<<"Transform"<<endl;
//    transform(line1.begin(),line1.end(),line1.begin(),toUpper);
//    cout<<line1<<endl;
//    cout<<"find"<<endl;
//    del=find(line1.begin(),line1.end(),'K');
//    cout<<*del<<endl;
//    cout<<"for_each"<<endl;
//    for_each(line1.begin(),line1.end(),print);

//    string line = "programowanie";
//    cout << line << endl;
//    boost::algorithm::to_upper(line);
//    cout << "To upper: " << line << endl;
//    line = boost::algorithm::to_lower_copy(line);
//    cout << "To lower: " << line << endl;
//
//    cout << "Erase first: " << boost::algorithm::erase_first_copy(line, "o") << endl;
//    cout << "Erase all: " << boost::algorithm::erase_all_copy(line, "o") << endl;
//    cout << "Replace first: " << boost::algorithm::replace_first_copy(line, "p", "P") << endl;
//    cout << "Replace all: " << boost::algorithm::replace_all_copy(line, "o", "-O-") << endl;
//
//    vector<string> vec{"Programowanie", "w", "C++"};
//    cout << "Join: " << boost::algorithm::join(vec, " ") << endl;
//
//    string s = "  Programowanie w C++  ";
//    cout << s << endl;
//    cout << "Trim: " << "_" << boost::algorithm::trim_copy(s) << "_" << endl;
//    s = "---Programowanie w C++---";
//    cout << s << endl;
//    cout << "Trim if is_any_of: " << boost::algorithm::trim_copy_if(s, boost::algorithm::is_any_of("-")) << endl;
//
//    s = "123Programowanie w C++12";
//    cout << s << endl;
//    cout << "Trim if digit: " << boost::algorithm::trim_copy_if(s,boost::algorithm::is_digit()) << endl;
//
//    s = "Programowanie w C++";
//    cout << s << endl;
//    cout << "Ends_with: " << boost::algorithm::ends_with(s, "C++") << endl;
//    cout << "Contains: " << boost::algorithm::contains(s, "gram") << endl;
//
//    s = "Programowanie w C++";
//    cout << s << endl;
//    vector<string> vec1;
//    boost::algorithm::split(vec1, s, boost::algorithm::is_space());
//    cout << "Zawartosc wektora: " << endl;
//    for(int i = 0; i < vec1.size(); i++)
//        cout << vec1[i] << endl;
//
//    s = "Programowanie w C++";
//    boost::char_separator<char> sep{" "};
//    tokenizer tok{s, sep};
//
//    for(tokenizer::iterator it = tok.begin(); it != tok.end(); ++it) {
//        cout << *it << endl;
//    }




//    string line="Programowanie w C++";
//    if(regex_match(line, regex("(Prog)(.*)")))
//        cout << "Znaleziono" << endl;
//    else cout << "Nie znaleziono!" << endl;
//
//    regex regPattern("(Prog)(.*)");
//    if(regex_match(line, regPattern))
//        cout << "Znaleziono" << endl;
//    else cout << "Nie znaleziono!" << endl;
//
//    if(regex_match(line.begin(), line.end(), regPattern))
//        cout << "Znaleziono" << endl;
//    else cout << "Nie znaleziono!" << endl;
//
//    smatch res;
//    regPattern = "(Prog)(.*)";
//    regex_match(line, res, regPattern);
//    cout << "Regex_match: " << endl;
//    cout << "Czy znaleziony? " << res.size() << endl;
//    if(res.size() != 0)
//        cout << "Wzorzec: " << res[0] << " zostal znaleziony" << endl;
//    cout << endl << "Porownanie match i search" << endl;
//    line = "*******Programowanie w C++********";
//    regPattern = "(Prog)(.*)";
//    regex_match(line, res, regPattern);
//    cout << "Regex_match: " << endl;
//    cout << "Czy znaleziony? " << res.size() << endl;
//    if(res.size() != 0)
//        cout << "Wzorzec: " << res[0] << " zostal znaleziony" << endl;
//
//    regex_search(line, res, regPattern);
//    cout << "Regex_search: " << endl;
//    cout << "Liczba dopasowan: " << res.size() << endl;
//    cout << "res.str(): " << res.str() << endl;
//    cout << "res.length(): " << res.length() << endl;
//    cout << "res.position(): " << res.position() << endl;
//    cout << "res.prefix: " << res.prefix().str() << endl;
//    cout << "res.suffix: " << res.suffix().str() << endl;
//    cout << endl;
//
//    cout << "Podgrupy ver1: " << endl;
//    for (int i=0; i<res.size(); ++i)
//    {
//        cout << "[" << res[i] << "] ";
//        cout << "res.str(): " << res.str(i) << endl;
//        cout << "res.position(): "<<res.position(i)<< endl;
//        cout<<"res.dl: "<<res.length(i)<<endl;
//        cout << endl;
//    }
//    cout << "Podgrupy ver2:" << endl;
//
//    for (auto pos = res.begin(); pos != res.end(); pos++)
//    {
//        cout << "[" << *pos <<"] ";
//        cout << "dl: " << pos->length() << endl;
//    }
//
//    cout<<endl<<"Replace: "<<endl;
//    line="*******Programowanie w C++********";
//    regPattern="(C\\+{2})";
//    cout<<"Przed replace: "<<line<<endl;
//    line=regex_replace(line, regPattern, "Java");
//    cout<<"Po replace: "<<line<<endl;

    smatch res;
    string line("fewmsnawk3m2m+64.789as,d-7.234sk2m+0.01sck");
    if(regex_search(line,res, regex(R"((\+|\-)[0-9]+\.[0-9]+)"))) {
        cout << "Podgrupy ver2:" << endl;
        for (const auto & match : res)
        {
            cout << "[" << match <<"] ";
            cout << "dl: " << match.length() << endl;
        }
    }

    smatch res2;
    string line2("fewm04:00:00snawk3m2m12:34:56as,d04:00:00sk2m25:30:45sck");
    if(regex_search(line2,res2, regex(R"([0-9]{2}:[0-9]{2}(:[0-9]{2}|))"))) {
        cout << "Podgrupy ver2:" << endl;
        for (const auto & match : res2)
        {
            cout << "[" << match <<"] ";
            cout << "dl: " << match.length() << endl;
        }
    }
    return 0;
}