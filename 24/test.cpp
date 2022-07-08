#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(0);
    tm * ltm = localtime(&now);

    long int t1 = static_cast<long int> (1 + ltm->tm_mon);
    long int t2 = static_cast<long int> (ltm->tm_mday);
    cout << t1 << " " << t2 << "\n";
}