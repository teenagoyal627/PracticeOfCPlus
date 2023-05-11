//  #include<iostream>
//  #include<string>
//  using namespace std;
// int main()
// {
//     string w =" start https://www.wikipedia.org/";
//     char x;
//     cout<<"Enter w for wikipedia   "<<endl;
//     cin>>x;
//     system(w.c_str());
//     cin.get();
// }
//#include <stdio.h>
// #include<stdio.h>
// #include <string.h>
// #include <fstream>

// int main (int argc, char *argv[])
// {
//     char url[1000] = "https://www.google.com";

//     std::fstream fs;
//     fs.open(url);
//     fs.close();

//     return 0;
// }
// #include <windows.h>
//  #include <shellapi.h>
// ...
// ShellExecute(0, 0, L"http://www.google.com", 0, 0 , SW_SHOW );

// void SearchWeb( string word )
// {    
//     string base_URL = "http://www.bing.com/search?q=";
//     string search_URL = "dummy";
//     search_URL = base_URL + word;

//     cout << "Searching for: \"" << word << "\"\n";

//     ShellExecuteA(NULL, "open", search_URL.c_str(), NULL, NULL, SW_SHOWNORMAL);
// }
#include <iostream>
#include <string>
#include "multiplication.h"
#include <vector>
#include <HTTPRequest.h>
using std::cout;
using std::cin;
using std::getline;

using namespace Poco;
using namespace Net;

int main() {
    HTTPRequest *test = new HTTPRequest("HTTP_GET", "https://www.google.com", "HTTP/1.1");
}