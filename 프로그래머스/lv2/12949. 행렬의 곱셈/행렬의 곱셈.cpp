#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer;
	int arr2_Row_Size = arr2[0].size();
	for (int i = 0; i < arr1.size(); i++)
    {
		vector <int> x;
		for (int k = 0; k < arr2_Row_Size; k++) 
        {
			int sum = 0;
			for (int j = 0; j < arr1[i].size(); j++) 
            {
				sum += arr1[i][j] * arr2[j][k];
			}
			x.push_back(sum);
		}
		answer.push_back(x);
	}
	return answer;
}