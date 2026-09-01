#include<iostream>
#include "UrlShortener.h"
using namespace std;
int main(){
    UrlShortener shortener;
     string code1 = shortener.shorten("https://google.com");

     string code2 = shortener.shorten("https://github.com");
     cout << code1 << " -> " << shortener.resolve(code1) << endl;

     cout << code2 << " -> " << shortener.resolve(code2) << endl;
}
