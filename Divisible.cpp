#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

string solve(vector<int> A)
{

   int size = A.size();
   // vector <int> left;

   int result_digits = 0;
   std::vector<int> left(A.begin(), A.begin() + A.size() / 2);
   std::vector<int> right(A.begin() + A.size() / 2, A.end());
   for (auto it = left.begin(); it != left.end(); it++)
   {
      int number = *it;
      int div = 1;
      while ((number / div) >= 10)
         div = div * 10;
      result_digits = result_digits * 10 + (number / div);
   }

   for (auto it = right.begin(); it != right.end(); it++)
   {
      int number = *it;
      result_digits = result_digits * 10 + (number % 10);
   }
   if ((result_digits % 11) == 0)
      return "OUI";
   else
      return "NON";

   // Write your code here
}

int main()
{

   ios::sync_with_stdio(0);
   cin.tie(0);
   int N;
   cin >> N;
   vector<int> A(N);
   for (int i_A = 0; i_A < N; i_A++)
   {
      cin >> A[i_A];
   }

   string out_;
   out_ = solve(A);
   cout << out_;
}