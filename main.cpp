#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void foo()
{
    std::vector<int> my_vec;
    for (int i = 0; i < 1000; i++)
        my_vec.push_back(i - (rand() % 42));
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 1000000; i++)
        foo();
    return 0;
}