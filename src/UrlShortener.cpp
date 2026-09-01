#include "UrlShortener.h"
using namespace std;

string UrlShortener::shorten(const string& longUrl){
    // Generate a short code
    string code = to_string(counter++);
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