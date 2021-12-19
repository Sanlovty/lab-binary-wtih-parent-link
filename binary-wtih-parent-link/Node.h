#ifndef NODE_H
#define NODE_H

class Node
{
	int data_;
	Node* parent_;
	Node* left_;
	Node* right_;

public:
	Node();
	Node(const int& data);
	Node(const int& data, Node* parent, Node* left, Node* right);
	Node(const int& data, Node* parent, Node& left, Node& right);


	bool isLeftEmpty() const;
	bool isRightEmpty() const;
	bool isBothEmpty() const;
	bool isBothNotEmpty() const;

	int getData() const;
	Node* getLeft() const;
	Node* getRight() const;
	Node* getParent() const;

	void setData(const int& data);
	void setLeft(Node* left);
	void setParent(Node* parent);
	void setParent(Node& parent);
	void setLeft(Node& left);
	void setRight(Node* right);
	void setRight(Node& right);
};

#endif
