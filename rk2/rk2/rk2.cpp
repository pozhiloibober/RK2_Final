// rk2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <list>
#include <vector>
#include <utility>
#include <functional>
#include <iterator>
#include <string>
#include <cstring>

using namespace std;
template<class T>
std::ostream& operator << (std::ostream& os, const pair<int, T> temp) {//task3
    os << "(" << temp.first << ", " << temp.second << ")" << std::endl;
    return os;
}

//task4
template<class T>
std::ostream& operator << (std::ostream& os, const pair<int, T> temp) {
    os << "(" << temp.first << ", " << temp.second << ")" << std::endl;
    return os;
}

//task5
template<class T>
class CheckBrackets : public Filo<char> {
private:
   

public:
    CheckBrackets() : Filo<char>() {
        char* ar = new char[1000];
        int countData = 0;
        int size = 1000;
    }
    ~CheckBrackets() {
        /*delete[] ar;*/
    }
    /*
        input		:	
        output		:	
        description	:	
    */
    int checkBrackets(const char* strBrackets) {
        for (int i = 0; i < strlen(strBrackets); i++) {
            if (strBrackets[i] == '{' || strBrackets[i] == '(' || strBrackets[i] == '[') {
                push_back(strBrackets[i]);
            }
            if (strBrackets[i] == '}') {
                pair<int, char> cur;
                cur = pop_back();
                char temp = cur.second;
                if (temp != '{')
                    return -1;
            }
            if (strBrackets[i] == ')') {
                pair<int, char> cur;
                cur = pop_back();
                char temp = cur.second;
                if (temp != '(')
                    return -1;
            }
            if (strBrackets[i] == ']') {
                pair<int, char> cur;
                cur = pop_back();
                char temp = cur.second;
                if (temp != '[')
                    return -1;
            }
        }
        pair<int, char> cur;
        cur = pop_back();
        char temp = cur.second;
        if (temp != 0)
            return -1;
        return 0;
    }
};

    int main()
    {
    }

