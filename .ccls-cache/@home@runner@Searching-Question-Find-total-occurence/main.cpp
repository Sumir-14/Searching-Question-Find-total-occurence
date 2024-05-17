#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
  vector <int> v={1,2,3,4,4,4,4,8,9,10};
  int target = 4;
  int totaloccurence;

  auto last =upper_bound(v.begin(),v.end(),target);
  auto first =lower_bound(v.begin(),v.end(),target);

  totaloccurence= last - first ;

  cout<<totaloccurence;
}