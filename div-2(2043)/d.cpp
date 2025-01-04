#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Range {
    ll a, b;
};

int main() {
    vector<ll> left = { /* your left array */ };
    vector<ll> right = { /* your right array */ };
    ll x = /* your x value */;
    vector<Range> ranges;

    ll min_suffix = LLONG_MAX, max_suffix = LLONG_MIN;
    if(left.empty()){
        min_suffix = 0;
        max_suffix = 0;
    }
    else{
        ll sum = 0;
        for(auto num:left){
            sum += num;
            min_suffix = min(min_suffix, sum);
            max_suffix = max(max_suffix, sum);
        }
        min_suffix = min(min_suffix, 0LL);
        max_suffix = max(max_suffix, 0LL);
    }

    ll min_prefix = LLONG_MAX, max_prefix = LLONG_MIN;
    if(right.empty()){
        min_prefix = 0;
        max_prefix = 0;
    }
    else{
        ll sum = 0;
        for(auto num:right){
            sum += num;
            min_prefix = min(min_prefix, sum);
            max_prefix = max(max_prefix, sum);
        }
        min_prefix = min(min_prefix, 0LL);
        max_prefix = max(max_prefix, 0LL);
    }

    ll min_sum_with_x = min_suffix + x + min_prefix;
    ll max_sum_with_x = max_suffix + x + max_prefix;

    // Ensure these variables are properly initialized
    ll min_sum_left = min_suffix;   // Replace with actual value if needed
    ll max_sum_left = max_suffix;   // Replace with actual value if needed
    ll min_sum_right = min_prefix;  // Replace with actual value if needed
    ll max_sum_right = max_prefix;  // Replace with actual value if needed

    ranges.push_back(Range{min_sum_left, max_sum_left});
    ranges.push_back(Range{min_sum_right, max_sum_right});
    ranges.push_back(Range{min_sum_with_x, max_sum_with_x});
    ranges.push_back(Range{0, 0});

    sort(ranges.begin(), ranges.end(), [&](const Range &a, const Range &b)->bool{
        if(a.a != b.a) return a.a < b.a;
        return a.b < b.b;
    });

    vector<Range> merged;
    for(auto &r: ranges){
        if(merged.empty()){
            merged.push_back(r);
        }
        else{
            Range &last = merged.back();
            if(r.a <= last.b + 1){
                last.b = max(last.b, r.b);
            }
            else{
                merged.push_back(r);
            }
        }
    }

    vector<ll> sums;
    for(auto &r: merged){
        for(ll val = r.a; val <= r.b; val++) sums.push_back(val);
    }

    sort(sums.begin(), sums.end());
    sums.erase(unique(sums.begin(), sums.end()), sums.end());

    cout << sums.size() << "\n";
    for(auto val : sums) cout << val << " ";
    cout << "\n";

    return 0;
}
