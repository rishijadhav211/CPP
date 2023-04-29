#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    long long max_sum; // maximum path sum
    Node *left;
    Node *right;
};

// Function to create a new node with given data
Node *newNode(int data)
{
    Node *node = new Node;
    node->data = data;
    node->max_sum = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to insert a node into the binary search tree and update maximum path sum
Node *insertNode(Node *root, int data, long long &max_sum)
{
    if (root == NULL)
    {
        return newNode(data);
    }
    if (data < root->data)
    {
        root->left = insertNode(root->left, data, max_sum);
    }
    else
    {
        root->right = insertNode(root->right, data, max_sum);
    }
    root->max_sum = max<long long>(root->data + max(root->left ? root->left->max_sum : 0, root->right ? root->right->max_sum : 0), root->data);
    max_sum = max<long long>(max_sum, root->max_sum);
    // max_sum = max<long long>(max_sum, max<long long>(root->data + (root->left ? root->left->max_sum : 0) + (root->right ? root->right->max_sum : 0), root->max_sum));
    return root;
}

// Function to create a binary search tree from an array and keep track of maximum path sum
vector<long long> createBST(int arr[], int size)
{
    vector<long long> maxpathsum;
    Node *root = NULL;
    long long max_sum = arr[0];
    root = insertNode(root, arr[0], max_sum);
    maxpathsum.push_back(max_sum);
    cout << "After inserting " << arr[0] << ", maximum path sum is " << max_sum << endl;
    for (int i = 1; i < size; i++)
    {
        root = insertNode(root, arr[i], max_sum);
        maxpathsum.push_back(max_sum);
        cout << "After inserting " << arr[i] << ", maximum path sum is " << max_sum << endl;
    }

    return maxpathsum;
}

int main()
{
    // int arr[] = {5, 1, 2, 6, -5};
    int arr[] = {6, 13, -15, 1, -12};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<long long> ans = createBST(arr, size);
    return 0;
}
