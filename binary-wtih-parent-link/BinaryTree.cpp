#include "BinaryTree.h"

void BinaryTree::addMethod_(Node* node, const int& data)
{
	if (node->getData() > data)
	{
		if (node->getLeft() != nullptr)
		{
			addMethod_(node->getLeft(), data);
		}
		else
		{
			auto newNode = new Node(data, node, nullptr, nullptr);
			node->setLeft(newNode);
		}
	}
	else if (node->getData() < data)
	{
		if (node->getRight() != nullptr)
		{
			addMethod_(node->getRight(), data);
		}
		else
		{
			auto newNode = new Node(data, node, nullptr, nullptr);
			node->setRight(newNode);
		}
	}
}

BinaryTree::BinaryTree() : head_(nullptr)
{
}

bool BinaryTree::isEmpty() const
{
	return head_ == nullptr;
}

void BinaryTree::add(const int& data)
{
	if (isEmpty())
	{
		head_ = new Node(data);
		return;
	}
	addMethod_(head_, data);
}


void BinaryTree::print(const int& spaceBefore, const int& spaceBetween)
{
	printMethod_(head_, spaceBefore, spaceBetween);
}

void BinaryTree::printMethod_(Node* root, int spaceBefore, const int& spaceBetween)
{
	if (root == nullptr)
		return;

	spaceBefore += spaceBetween;

	printMethod_(root->getRight(), spaceBefore, spaceBetween);

	cout << endl;
	for (int i = spaceBetween; i < spaceBefore; i++)
		cout << " ";
	cout << root->getData() << "\n";

	printMethod_(root->getLeft(), spaceBefore, spaceBetween);
}
