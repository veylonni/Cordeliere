#include "tree.h"

using namespace std;
using region = std::vector< std::pair<int, int> >;

Tree::Tree()
{
    Node root();         
}

void Tree::fillNode(Node node)
{

}

void Tree::fill(vector<int> dims, vector<float> data)
{
    // creation of the vector 
    region currentRegion;
    for (unsigned int i = 0; i < dims.size(); i++)
    {
        currentRegion.push_back(make_pair(0, dims[i]-1));
    }

    // creation of the list of the leaves
    vector< pair<region, Node*> > leaves;

    // recursive creation of the tree branching
    this->root.createBranch(leaves, currentRegion);

    // fill the leaves

    // fill the rest of the tree

    // cout << leaves.size() << endl;

    // for (unsigned int i = 0; i < leaves.size(); i++)
    // {
    //     cout << leaves[i].first[0].first << leaves[i].first[0].second << endl;
    //     cout << leaves[i].first[1].first << leaves[i].first[1].second << endl << endl;
    // }
}