#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int array_size;
        cin >> array_size;

        vector<int> array_elements(array_size);
        for (int index = 0; index < array_size; index++)
        {
            cin >> array_elements[index];
        }

        bool is_valid = true;

        for (int current_index = 0; current_index < array_size; current_index++)
        {
            if (current_index - 1 >= 0 && array_elements[current_index - 1] >= array_elements[current_index])
            {
                if (2 * array_elements[current_index] > array_elements[current_index - 1])
                {
                    is_valid = false;
                    break;
                }
            }
            else if (current_index - 1 >= 0 && array_elements[current_index - 1] < array_elements[current_index])
            {
                if (2 * array_elements[current_index - 1] > array_elements[current_index])
                {
                    is_valid = false;
                    break;
                }
            }

            if (current_index + 1 <= array_size - 1 && array_elements[current_index + 1] >= array_elements[current_index])
            {
                if (2 * array_elements[current_index] > array_elements[current_index + 1])
                {
                    is_valid = false;
                    break;
                }
            }
            else if (current_index + 1 <= array_size - 1 && array_elements[current_index + 1] < array_elements[current_index])
            {
                if (2 * array_elements[current_index + 1] > array_elements[current_index])
                {
                    is_valid = false;
                    break;
                }
            }
        }

        if (is_valid == false)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
