#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int W, n;

    cout << "Enter number of objects: \n";
    cin >> n;

    cout << "Enter maximum weight, knapsack can carry: \n";
    cin >> W;

    vector<int> v(n + 1, 0);                             // Vector to store values
    vector<int> a(n + 1, 0);                             // Vector to store weights
    vector<vector<int>> k(n + 1, vector<int>(W + 1, 0)); // 2D vector for DP

    cout << "Enter weights of objects: \n";
    for (int i = 1; i <= n; i++)
    {
        cout << "w[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Enter profits/values of objects: \n";
    for (int i = 1; i <= n; i++)
    {
        cout << "p[" << i << "] = ";
        cin >> v[i];
    }

    // Calculate the maximum profit for each subproblem
    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= W; w++)
        {
            if (a[i] <= w)
            {
                k[i][w] = max(v[i] + k[i - 1][w - a[i]], k[i - 1][w]);
            }
            else
            {
                k[i][w] = k[i - 1][w];
            }
        }
    }

    // Print the k matrix (optional)
    cout << "\nP\tW\ti\t";
    for (int i = 0; i <= W; i++)
    {
        cout << i << "\t";
    }
    cout << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << v[i] << "\t" << a[i] << "\t" << i << "\t";
        for (int j = 0; j <= W; j++)
        {
            cout << k[i][j] << "\t";
        }
        cout << endl;
    }

    // Reconstruct the solution (find which items are included)
    int i = n, p = W, l = 0;
    vector<int> ks;
    int u = 0, x = 0;

    while (i > 0 && p >= 0)
    {
        if (k[i][W] != k[i - 1][W])
        {
            ks.push_back(i);
            p = p - a[i];
            u += a[i];
            x += v[i];
            i--;
        }
        else
        {
            i--;
        }
    }

    cout << "\nThe individual weights are: ";
    for (int j = 0; j < ks.size(); j++)
    {
        cout << ks[j] << "\t";
    }
    cout << endl;

    cout << "\nTotal weight to be carried in knapsack is: " << u << endl;
    cout << "Total profit in knapsack is: " << x << endl;

    return 0;
}