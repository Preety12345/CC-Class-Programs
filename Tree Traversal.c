#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *search(int data)
{
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return (new_node);
    
}
void printPreorder(struct Node *root)
{
    if(root == NULL)
    return;
    {
    
        printf("%5d", root->data);               
        printPreorder(root->left);
        printPreorder(root->right);
    }
    
}
void printInorder(struct Node *root)
{
    if(root == NULL)
    return;
    {
                
        printInorder(root->left);
        printf("%5d", root->data);
        printInorder(root->right);
    }
    
}
void printPostorder(struct Node *root)
{
    if(root == NULL)
    return;
    {
                
        printPostorder(root->left);
        printPostorder(root->right);
        printf("%5d", root->data);
    }
    
}
int main()
{

struct Node *root=search(11);
root->left=search(12);
root->right=search(13);
root->left->left=search(14);
root->left->right=search(16);
root->right->left=search(17);
root->right->right=search(18);

printf("\n Inorder Traversal:");
printInorder(root);
printf("\n-------------------------------------------------");
printf("\n Preorder Traversal:");
printPreorder(root);
printf("\n-------------------------------------------------");
printf("\n Postorder Traversal:");
printPostorder(root);
printf("\n-------------------------------------------------");
getchar();
return 0;
}
