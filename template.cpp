//How can someone forget these
# include <bits/stdc++.h>
using namespace std;

// Define some commonly used datatypes
# define ll                 long long
# define ld             long double

// For loop
# define flp(i, n)          for (int i = 0; i < n; i++)
# define flpll(i, n)        for (ll i = 0; i < n; i++)

// Vector stuff
// Initialize vector
# define vi                 vector<int>
# define vll                vector<ll>
# define vpi                vector <pair<int, int> >
# define vpll               vector <pair <ll, ll> >

// Priority Queue stuff
// Initialize heap
# define pqi                priority_queue<int>
# define pqll               priority_queue<ll>

// Sets(Ordered) stuff
// Intitialize set
# define seti               set<int>
# define setll              set<ll>
# define I                  insert

// Operations
# define pb                 push_back
# define F                  first
# define S                  second


// Test input
# define TEST               int t;\
                            cin >> t;\
                            while (t--)

// Miscelleneous;
# define ITR                set<int>:iterator // For iteration in a set. int can be changed
string no = "No";
string yes = "Yes";

# define all(x)             x.begin(), x.end()

# define print(x, n, type)  for (type i = 0; i < n; i++) cout << x[i] << " ";\
                            cout << endl;

vi getPrimeNos() {
    bool isPrime[1300000];

    memset(isPrime, true, 1300000);

    for (int i = 2; i * i < 1300000; i++) {
        if (isPrime[i] == false) continue;
        else {
            for (int j = i * i; j < 13000000; j += i) isPrime[j] = false;
        }        
    }

    vi Primes;
    flp(i, 1300000) {
        if (isPrime[i]) Primes.pb(i);
    }

    return Primes;
}

int getHCF(int a, int b) {
    if (a == 0) return b;
    else if (b == 0) return a;

    if (a == b) return a;

    if (a > b) return getHCF(a - b, b);

    return getHCF(a, b - a);
}

ll ncr(int n, int r) {
    int diff = max(r, n - r);
    int foo = min(r, n - r);

    long long prod = 1;
    for (int i = 0; i < diff - 1; i++) {
        prod *= n - i;
    }

    long long fact = 1;
    for (int i = 1; i <= foo; i++) fact *= i;
    return prod / fact;
}

int main() {
    // For Fast I/O.
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    // When I need to use files.
    /*
    ifstream fin("NameOfInputFile");
    ofstream fout("NameOfOutputFile");
    */



    return 0;
}