#include <iostream>
using namespace std;

int lastIndex(int input[], int size, int x)
{
  if (size == 0)
    {
      return -1;
    }

    int answer = lastIndex(input + 1, size - 1, x);

    if (answer != -1)
    {
      return answer + 1;
    }

    if (input[0] == x)
    {
      return 0;
    }
    else
    {
      return -1;
    }
}

int main()
{
    int size, x;
    cin >> size;
    int input[10];
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
    cin >> x;
    cout << lastIndex(input, size, x);
    return 0;
}
