/*Flatten a Multilevel Doubly Linked List*/
class Solution
{
	public:
		Node* flatten(Node* head)
		{
			if (head == nullptr)
				return nullptr;
			for (Node* p = head;p != nullptr;p = p->next)
			{
				Node* next = p->next;
				if (p->child != nullptr)
				{
					p->next = p->child;
					p->child->prev = p;
					p->child = nullptr;
					Node* child = p->next;
					while (child->next != nullptr)
						child = child->next;
					child->next = next;
					if (next != nullptr)
						next->prev = child;
				}
			}
			return head;
		}
};