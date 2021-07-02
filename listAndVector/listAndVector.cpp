#include <iostream>
#include <list>
#include <vector>
#include <set>
#include <utility>
#include <map>
#include "Personne.h"

using namespace std;

int main() {
    map<string, Personne> maCollection;
    Personne jad("DIET", "Jean-Aymeric "), bobo("OLLIVIER", "Boris"), cricri("LAPORTE", "Christophe");
    maCollection.insert(make_pair("jad", jad));
    maCollection.insert(make_pair("bobo", bobo));
    maCollection.insert(make_pair("cricri", cricri));
    maCollection.insert(make_pair("0", jad));
    maCollection.insert(make_pair("1", bobo));
    maCollection.insert(make_pair("2", cricri));

    cout << maCollection["jad"] << "\n";
    cout << maCollection["bobo"] << "\n";
    cout << maCollection["cricri"] << "\n";
}
