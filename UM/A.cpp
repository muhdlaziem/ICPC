#include <bits/stdc++.h>
#define rep(i,a,n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

int n, pid, ppid, mem;
string s;

struct PS {
  int pid;
  int ppid;
  int mem;
} tmp;
vector<PS> ps;

bool cmp(PS &lhs, PS &rhs) {
  if (lhs.ppid == rhs.ppid)
    return lhs.mem > rhs.mem;
  return lhs.ppid < rhs.ppid;
}

int main() {
  getline(cin, s);
  // try fixedkan cond loop nie
//   printf("pid ppid rss\n");

  while (scanf("%d%d%d", &pid, &ppid, &mem)!=EOF) {
    cin.ignore();
    tmp.pid = pid;
    tmp.ppid = ppid;
    tmp.mem = mem;
    ps.push_back(tmp);
    // if (cin.get() == '\n') break;
  }
  sort(ps.begin(), ps.end(), cmp);
  printf("pid ppid rss\n");
  for (int i = 0; i < ps.size(); ++i)
    printf("%d %d %d\n", ps[i].pid, ps[i].ppid, ps[i].mem);

  return 0;
}