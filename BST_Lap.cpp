#include <iostream>
#include "BST_Lap_Class.h"
using namespace std;
int main(){
	int choose,data;
	BST get;
	while(true){
	cout<<"Please choose from bellow:\n1) Add to tree.\n2) Number of items.\n3) Display pre order."<<endl;
	cout<<"4) Display in order.\n5) Display post order."<<endl;
	cin>>choose;
	if(choose==1){
		cout<<"Please enter the item :"<<endl;
		cin>>data;
		get.addtotree(data);
	}
	else if(choose==2){
		cout<<"The number of items is : "<<get.numofitem()<<endl;
	}
	else if(choose==3){
		if(!get.isempty()){
		cout<<"The items in tree are :"<<endl;
		get.preorder(get.root);
	}
	else
	cout<<"The tree is empty."<<endl;
	}
	else if(choose==4){
		if(!get.isempty()){
		cout<<"The items in tree are :"<<endl;
		get.inorder(get.root);
	}
	else
	cout<<"The tree is empty."<<endl;
	}
	else if(choose==5){
		if(!get.isempty()){
		cout<<"The items in tree are :"<<endl;
		get.postorder(get.root);
	}
	else
	cout<<"The tree is empty."<<endl;
	}
}
	
	system("pause");
	return 0;
}

