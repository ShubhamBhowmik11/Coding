void LinkedList::swapNodes(int x, int y)
{
      // Write your code here
      Node *temp = head;
      int flag = 0;
      Node *xt = nullptr;
      Node *yt = nullptr;
      while (temp)
      {
            if (temp->data == x)
            {
                  flag++;
                  xt = temp;
            }
            else if (temp->data == y)
            {
                  flag++;
                  yt = temp;
            }
            temp = temp->next;
      }
      if (flag == 2)
      {
            xt->data = y;
            yt->data = x;
      }
}