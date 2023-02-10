#include <iostream>
using namespace std;
class bnode{
	public:
		int info;
		bnode* right;
		bnode* left;
		bnode(){
			left=right=0;
		}
		bnode(int f,bnode* l=0,bnode* r=0){
			info=f;
			left=l;
			right=r;
		}
};
class BST{
		public:
		bnode* root;
		int counter;
		public:
		BST(){
			root=0;
			counter=0;
		}		
		public:
		bool isempty(){
			return root==0;
		}				
		void addtotree(int data){
			if(!isempty()){
				bnode* tmp=root;
				bnode* parent=0;
				while(tmp!=0){
					parent=tmp;
					if(data>=tmp->info)
					tmp=tmp->right;
					else
					tmp=tmp->left;
				}
				if(data>=parent->info)
				tmp->right=new bnode(data);
				else
				tmp->left=new bnode(data);
			}
			else
			root=new bnode(data);
			cout<<"Add successfully."<<endl;
			++counter;
		}									
					void visit(bnode* tmp){
						cout<<tmp->info<<endl;
					}
					void preorder(bnode* tmp){
						if(tmp!=0){
							visit(tmp);
							preorder(tmp->left);
							preorder(tmp->right);
						}
					}
					void inorder(bnode* tmp){
						if(tmp!=0){
							inorder(tmp->left);
							visit(tmp);
							inorder(tmp->right);
						}
					}
					void postorder(bnode* tmp){
						if(tmp!=0){
							postorder(tmp->left);
							postorder(tmp->right);
							visit(tmp);
						}
					}	
					int numofitem(){
						return counter;
					}									
};
