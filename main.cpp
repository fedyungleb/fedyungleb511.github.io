#include <iostream>

using namespace std;
int h, w, l;//brick info
int n;//number of holes
int h1, w1, l1;//hole info

int main() {

    cout << "Enter the height of the brick(h):";
    cin >> h;
    cout << "Enter the width of the brick(w):";
    cin >> w;
    cout << "Enter the length og the brick(l):";
    cin >> l;
    cout << "Number of the holes:";
    cin >> n;
    bool ans[n + 3];
    for (int i = 1; i <= n; i++) {
        int y = 0;
        cout << "Enter the height of the hole(h1):";
        cin >> h1;
        cout << "Enter the width of the hole(w1):";
        cin >> w1;
        cout << "Enter the length of the hole(l1):";
        cin >> l1;
        if (h > h1) y++;
        if (w > w1) y++;
        if (l > l1) y++;
        if (y == 0) ans[i] = true;
        else ans[i] = false;
    }
    for (int i = 1; i <= n; i++) {
        if (ans[i] == true)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


