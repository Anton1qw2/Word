#include <QCoreApplication>
#include <iostream>
#include <set>
#include <string>
#include <iostream>
std::set<char> row1 {'q', 'w', 'e', 'r','t', 'y', 'u', 'i', 'o', 'p'};
std::set<char> row2 {'a', 's', 'd','f' , 'g', 'h', 'j', 'k', 'l'};
std::set<char> row3 {'z', 'x', 'c', 'v','b','n','m'};

bool findV(std::string s){
    bool here = true;
   if (row1.count(tolower(s[0]))){
       for (int i =1; i<s.size(); i++){
           here = here && (row1.count(tolower((s[i]))));
       }
       return here;
   }
   if (row2.count(tolower(s[0]))){
       for (int i =1; i<s.size(); i++){
           here = here && (row2.count(tolower((s[i]))));
       }
       return here;
   }
   if (row3.count(tolower(s[0]))){
       for (int i =1; i<s.size(); i++){
           here = here && (row3.count(tolower((s[i]))));
       }
       return here;
   }

}

int main(int argc, char *argv[])
{

 //   std::set<char> row1 {'q', 'w', 'e', 'r','t', 'y', 'u', 'i', 'o', 'p'};
 //   std::set<char> row2 {'a', 's', 'd','f' , 'g', 'h', 'j', 'k', 'l'};
 //   std::set<char> row3 {'z', 'x', 'c', 'v','b','n','m'};
    std::vector<std::string> arg{"eweqw", "dffsdgj", "ikmj"};
    std::vector<std::string> trueworld;
    for (int i = 0; i <arg.size(); i++){
       if (findV(arg[i])){
           trueworld.push_back(arg[i]);
       }
    }
    std::cout<< trueworld.size();

    return 0;
}
