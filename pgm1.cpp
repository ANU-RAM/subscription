#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> generateSub(int budget)
{
   vector<vector<int>> result;
   int TOI, Hindu, ET, BM, HT;
   
   for (TOI = 0; TOI <= budget; TOI++)
   {
      for (Hindu = 0; Hindu <= budget; Hindu++)
      {
         for (ET = 0; ET <= budget; ET++)
         {
            for (BM = 0; BM <= budget; BM++)
            {
               for (HT = 0; HT <= budget; HT++)
               {
                  if (TOI + Hindu + ET + BM + HT == budget)
                  {
                     vector<int> c = {TOI, Hindu, ET, BM, HT};
                     result.push_back(c);
                  }
               }
            }
         }
      }
   }
   return result;
}

int main() {
   int budget;
   cout << "Enter the budget: ";
   cin >> budget;

   vector<vector<int>> result = generateSub(budget);

   cout << "All possible combinations are: " << endl;
   for (int i = 0; i < result.size(); i++) {
      cout << "TOI: " << result[i][0] << " Hindu: " << result[i][1] << " ET: " << result[i][2] << " BM: " << result[i][3] << " HT: " << result[i][4] << endl;
   }

   return 0;
}
