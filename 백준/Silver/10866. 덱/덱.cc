#include<iostream>

using namespace std;

const int MAX = 10000;
int dat[2 * MAX + 1];
int head = MAX, tail = MAX - 1;

void push_front(int x)
{
    if (head != 0)
        dat[--head] = x;
}

void push_back(int x)
{
    if (tail != 2*MAX)
        dat[++tail] = x;
}

void pop_front()
{
    if (head <= tail)
        cout << dat[head++] << '\n';
    else
        cout << -1 << '\n';
}

void pop_back()
{
    if (tail >= head)
        cout << dat[tail--] << '\n';
    else
        cout << -1 << '\n';
}

void front()
{
    if (head <= tail)
        cout << dat[head] << '\n';
    else
        cout << -1 << '\n';
}

void back()
{
    if (tail >= head)
        cout << dat[tail] << '\n';
    else
        cout << -1 << '\n';
}

void size()
{
    cout << (tail - head + 1) << '\n';
}

void empty()
{
    cout << (head > tail ? 1 : 0) << '\n';
}

int main() {
    int N, val;
    string str;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> str;
        if (str == "push_front")
        {
            cin >> val;
            push_front(val);
        }
        else if (str == "push_back")
        {
            cin >> val;
            push_back(val);
        }
        else if (str == "pop_front")
        {
            pop_front();
        }
        else if (str == "pop_back")
        {
            pop_back();
        }
        else if (str == "size")
        {
            size();
        }
        else if (str == "empty")
        {
            empty();
        }
        else if (str == "front")
        {
            front();
        }
        else if (str == "back")
        {
            back();
        }
    }

    return 0;
}