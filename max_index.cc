#include <bits/stdc++.h>
using namespace std;
#define VP pair <int, int>

int lefty[100005];
int righty[100005];
int arr[100005];

int main(int argc, char* argv[]) {
    // this stack will contain the lagest value against each traversing elemt else pop the value       (description)
    // top value of the stack always seeking the lagest value rather than ownf they would find then push it and eliminate all affected smaller values.because we are going to move rightwards.
    stack <VP> first, second;
    int n;
    cin >> n;

    for (int i=1; i<=n; i++)
        cin >> arr[i];

    for (int i=1; i<=n; i++) {
        while (!first.empty() && first.top().first<=arr[i])
            first.pop();
        if (first.empty()){
            first.push(VP(arr[i], i));
            continue;
        }
        lefty[i]=first.top().second;
        first.push(VP(arr[i], i));
    }
    for (int i=n; i>=1; i--)
    {
        while (!second.empty() && second.top().first<=arr[i])
            second.pop();
        if (second.empty()) {
            second.push(VP(arr[i], i));
            continue;
        }
        righty[i]=second.top().second;
        second.push(VP(arr[i], i));
    }

    long long ans=0;

    for (int i=1; i<=n; i++)
    {
        long long temp = 1LL*lefty[i]*righty[i];
        if(temp > ans)
            ans = temp;
    }

    cout << ans;

    return 0
}