# subscription
int main() {
   int budget;
   cout << "Enter the budget: ";
   cin >> budget;

   vector<vector<int>> result = generateSub(budget);

   cout << "All possible combinations are: " << endl;
   for (int i = 0; i < result.size(); i++) {
      cout << "TOI: " << result[i][0] << " Hindu: " << result[i][1] << " ET: " << result[i][2] << " BM: " << result[i][3] << " HT: " << result[i][4] << endl;
   }
