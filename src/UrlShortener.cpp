#include "UrlShortener.h"
using namespace std;

string UrlShortener::base62Encoding(int num){
    string chars;

    for (int i='a';i<='z';i++){
        chars+=i;
    }
    for (int i='A';i<='Z';i++){
        chars+=i;
    }

    for (int i='0';i<='9';i++){
        chars+=i;
    }
    string result;
    if(num==0){
        return "0";
    }
    while(num>0){
        result=chars[num%62]+result;
        num/=62;

    }
    return result;
}

string UrlShortener::shorten(const string& longUrl){
    // Generate a short code
    string code = base62Encoding(counter++);
    url[code] = longUrl;
    return code;
}

string UrlShortener::resolve(const string& code){
    // Look up the original URL from the short code
    auto it = url.find(code);
    if (it != url.end()) {
        return it->second;
    }
    return "";
}
