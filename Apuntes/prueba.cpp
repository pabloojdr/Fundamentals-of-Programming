#include <iostream>
using namespace std;

int numdigits(int n, int base=10);

int main()
{
    cout << "numdigits(" << 2021 << ", " << 10 << "): "
         << numdigits(2021, 10) << endl;
    cout << "numdigits(" << 2021 << ", " << 2 << "): "
         << numdigits(2021, 2) << endl;
    cout << "numdigits(" << 0 << "): "
         << numdigits(0) << endl;
    return 0;
}

int numdigits(int n, int base)
{
    int cnt = 0;
    do {
        n /= base;
        ++cnt;
    } while (n > 0);
    return cnt;
}
