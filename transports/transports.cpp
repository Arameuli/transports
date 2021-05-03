#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Private_Tran.h"
#include "Public_Tran.h"
#include "Transport.h"
using namespace std;
int main()
{
    ifstream fin("input.txt");
    Private_Tran t;
    Public_Tran z;
    vector<Private_Tran> a;
    vector<Public_Tran> b;
    string s, c;
    cin >> s;
    for (int i = 0; i < 4; i++) {
        fin >> c;
        if (c == s && s=="private") {
            fin >> t.wheel >> t.length >> t.width >> t.hight >> t.inCity >> t.OnTheHighway;
            a.push_back(t);
        }
        else if (c == s && s == "public") {
            fin >> z.wheel >> z.length >> z.width >> z.hight >> z.place;
            b.push_back(z);
        }
    }
    if (s == "private") {
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a.size() - 1; j++) {
                if ((a[j].inCity + a[j].OnTheHighway) / 2. > (a[j + 1].inCity + a[j + 1].OnTheHighway) / 2.) {
                    swap(a[j], a[j + 1]);
                }
            }
        }
        for (int i = 0; i < a.size(); i++) {
            a[i].printPrivate();
        }
    }
    else {
        for (int i = 0; i < b.size(); i++) {
            for (int j = 0; j < b.size() - 1; j++) {
                if (b[j].place < b[j + 1].place)
                    swap(b[j], b[j + 1]);
            }
        }
        for (int i = 0; i < b.size(); i++)
            b[i].printPublic();
    }
    
}
