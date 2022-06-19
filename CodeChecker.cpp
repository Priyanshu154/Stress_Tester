#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
#define pb push_back
#define in insert
#define se second
#define fi first
typedef vector<long long int> vl;
typedef vector<vector<long long int>> vvl;
typedef vector<pair<long long int,long long int>> vpl;
typedef vector<pair<int,int>> vpi;
typedef pair<long long int,long long int> pll;
typedef vector<int> vi;
typedef unordered_map<long long int , long long int> umap;
typedef map<long long int,long long int> smap;
typedef unordered_map<string , long long int> slumap;
typedef unordered_map<string , string> sumap;
typedef multimap<string , string> smul;

// initialize all the required data structures here for taking input;
struct testcase{
    ll n;
    string s;
    vl v;
    vvl ve;
};

// In generates random number between range a and b inclusive
ll random_number(ll a,ll b){
    return a+(rand()%b);
}

// Put all characters required in str and a is minimum length of input string and b is maximum length of input string
string random_string(string str,ll a,ll b)
{
     //string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"); Example
     random_shuffle(str.begin(), str.end());
     return str.substr(0, random_number(a,b));
}

/*
 for int input use
   (
    t.n = random_number(smallest input,largest input);
   )

 for string input use
 (
   string st = "abcdefghijklmnopqrstuvwxyz";
   t.s=random_string(st,smallest input,largest input);
  )

  for vector<int> input use
    (
        for(int i=0;i<n;i++){
            t.v.push_back(random_number(smallest input,largest input));
        }
    )

    similarly you can make vector<vector<int>> , vector<string> , graph, tree etc;

*/


// generate your testcases here
testcase generate_testcase(){
    testcase t;
    return t;
}


// Copy paste your bruteforce solution here and return any datatype ans how to use testcase struct is shown below
template <typename T> T bruteforce(testcase t)
{
   int n = t.n;
   return n;
}

// Copy paste your optimal solution here and return any datatype ans how to use testcase struct is shown below
template <typename T> T optimal(testcase t)
{
   int n = t.n;
   return n;
}

int main()
{
    int number_of_testcases=10; //specify number of testcases
    while(number_of_testcases--){
        testcase t = generate_testcase();
        int ans1 = bruteforce<int>(t); //specify datatype of the template
        int ans2 = optimal<int>(t); //specify datatype of the template
        if(ans1!=ans2){
            //print your inputs from t;
            break;
        }
    }
}
