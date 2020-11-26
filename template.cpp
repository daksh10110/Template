//How can someone forget these
# include <bits/stdc++.h>
using namespace std;

// Define some commonly used datatypes
# define ll long long
# define ld long double

// For loop
# define flp(i, n) for (int i = 0; i < n; i++)
# define flpll(i, n) for (ll i = 0; i < n; i++)

// Vector stuff
// Initialize vector
# define vi vector<int>
# define vll vector<ll>
# define vpi vector <pair<int, int> >
# define vpll vector <pair <ll, ll> >

// Operations
# define pb push_back
# define first f
# define second s

// Test input
# define TEST int t;\
         cin >> t;\
         while (t--)

// Miscelleneous;

// Some commonly used functions
void printArr(ll arr[], int n) {
    flpll(i, n) cout << arr[i] << " ";
}

void printVector(vi vect) {
    flp(i, vect.size()) cout << vect[i] << " ";
}

vi getPrimeNos() {
    bool isPrime[1300000];

    flp(i, 1300000) isPrime[i] = true;

    for (int i = 2; i * i < 1300000; i++) {
        if (isPrime[i] == false) continue;
        else {
            for (int j = i * i; j <= 13000000; j += i) isPrime[j] = false;
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

long long ncr(int n, int r) {
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