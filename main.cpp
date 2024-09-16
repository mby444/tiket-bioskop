#include <iostream>
using namespace std;

void checkSeats(const int &n, const int &m, int bookedSeats[], const int &s)
{
    int seats[n] = {};
    int emptyStreak = 0;
    int emptyCounter = 0;

    for (int i = 0; i < s; i++)
    {
        seats[bookedSeats[i] - 1] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (seats[i])
        {
            emptyCounter = 0;
            continue;
        }
        if (++emptyCounter > emptyStreak)
        {
            emptyStreak = emptyCounter;
        }
    }

    string result = (m <= emptyStreak) ? "YES" : "NO";
    cout << result << endl;
}

int main()
{
    int bookedSeats1[3] = {2, 5, 6};
    int bookedSeats2[4] = {1, 2, 4, 5};

    checkSeats(10, 3, bookedSeats1, sizeof(bookedSeats1) / sizeof(bookedSeats1[0])); // YES
    checkSeats(5, 2, bookedSeats2, sizeof(bookedSeats2) / sizeof(bookedSeats2[0]));  // NO

    return 0;
}
