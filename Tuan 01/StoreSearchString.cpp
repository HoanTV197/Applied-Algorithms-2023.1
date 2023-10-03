#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    unordered_set<string> database;
    string key;

    // Đọc khối thông tin đầu tiên chứa các key
    while (cin >> key && key != "*") {
        database.insert(key);
    }

    // Đọc khối thứ hai chứa các thao tác tìm kiếm và chèn
    while (cin >> key && key != "***") {
        string cmd;
        cin >> cmd;
        if (cmd == "find") {
            if (database.find(key) != database.end()) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        } else if (cmd == "insert") {
            auto result = database.insert(key);
            if (result.second) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }

    return 0;
}
