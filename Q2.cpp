#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > transpose(
	vector<vector<int> > mat,
	int row, int col)
{
	vector<vector<int> > tr(
		col, vector<int>(row));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			tr[j][i] = mat[i][j];
		}
	}
	return tr;
}
void RowWiseSort(vector<vector<int> >& B)
{
	for (int i = 0; i < (int)B.size(); i++) {
		sort(B[i].begin(), B[i].end());
	}
}
void sortCol(vector<vector<int> > mat,
			int N, int M)
{
	vector<vector<int> > B
		= transpose(mat, N, M);
	RowWiseSort(B);
	mat = transpose(B, M, N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			cout << mat[i][j] << " ";
		}
		cout << '\n';
	}
}
int main()
{
	vector<vector<int> > mat = { { 1, 6, 10 },
								{ 8, 5, 9 },
								{ 9, 4, 15 },
								{ 7, 3, 60 } };

	int N = mat.size();
	int M = mat[0].size();

	sortCol(mat, N, M);
	return 0;
}
