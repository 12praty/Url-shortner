#pragma once
#include "string"
#include "unordered_map"
#include <string>
using namespace std;

class UrlShortener{
    private:
        unordered_map<string, string>url;
        int counter =1;
    public:
        string shorten(const string& longUrl);//Takes a long URL and returns a short code.
        string resolve(const string& code );//Takes a short code and returns the original long URL.
};
