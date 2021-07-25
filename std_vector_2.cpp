#include <iostream>
#include <vector>
using namespace std;

int main()
{
	std::vector<vector<int>> Tree;				//declaration of container inside container
	int edge, n1, n2;

	cout << "Enter no. of edges : ";
	cin >> edge;
	Tree.resize(edge);

	cout << "Enter nodes value which connected eachother" << endl;
	for(int i = 0; i < edge; i++)
	{
	    cin >> n1 >> n2;
	    Tree[n1].push_back(n2);
	}


	for(const auto &e1 : Tree) {
	    for(const auto &e2 : e1) {
	        cout << e2;
	    }
	}

	return 0;
}
