 bool Pathsums(TreeNode *A, vector <int> & path, vector<vector<int>> & paths,  int k)
{
	bool rightleaf;
	bool leftleaf;
	if (A == NULL)
		return true;
	path.push_back(A->val);
	leftleaf = Pathsums(A->left, path,paths, k);
	rightleaf =Pathsums(A->right, path,paths, k);
	int sum = 0;
	for (int j = path.size()- 1; j >= 0; j--)
	{
		sum += path[j];
		
	}
	if (sum == k && leftleaf && rightleaf)
	{
		paths.push_back(path);
	}
	path.pop_back();
	return false;
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector <vector <int>> paths;
    vector<int>  path ;
	Pathsums(A, path,paths, B);
	return paths;

}