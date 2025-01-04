#include <bits/stdc++.h>
using namespace std;
#define int long long
 void fahad ()
 {
     int segment_count;
        cin >> segment_count;

        vector<pair<int, int>> segments(segment_count);
        for (int index = 0; index < segment_count; index++)
        {
            cin >> segments[index].first >> segments[index].second;
        }

        string result_string = "";
        set<int> unique_values;
        map<int, int> value_frequency;

        for (int index = 0; index < segment_count; index++)
        {
            if (segments[index].first == segments[index].second)
            {
                unique_values.insert(segments[index].first);
                value_frequency[segments[index].first]++;
            }
        }

        vector<int> sorted_unique_values;
        for (auto iterator = unique_values.begin(); iterator != unique_values.end(); iterator++)
        {
            sorted_unique_values.push_back(*iterator);
        }

        for (int index = 0; index < segment_count; index++)
        {
            int left_bound = segments[index].first;
            int right_bound = segments[index].second;

            if (left_bound == right_bound)
            {
                if (value_frequency[left_bound] > 1)
                {
                    result_string.push_back('0');
                }
                else
                {
                    result_string.push_back('1');
                }
                continue;
            }

            int lower_position = lower_bound(sorted_unique_values.begin(), sorted_unique_values.end(), left_bound) - sorted_unique_values.begin();
            int upper_position = lower_bound(sorted_unique_values.begin(), sorted_unique_values.end(), right_bound + 1) - sorted_unique_values.begin();
            int range_length = (upper_position - 1) - lower_position + 1;

            if (range_length == right_bound - left_bound + 1)
            {
                result_string.push_back('0');
            }
            else
            {
                result_string.push_back('1');
            }
        }

        cout << result_string << endl;
 }
int32_t main()
{
    int test_case_count;
    cin >> test_case_count;
    while (test_case_count--)
    {
        fahad();
    }

    return 0;
}
