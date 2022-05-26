//c++ solution

 

int pre_Index=0;
   Node* tree(int in[],int pre[],int is, int ie)
   {
       if(is>ie)
           return NULL;
       Node* root=new Node(pre[pre_Index++]);
       int in_Index;
       for(int i=is;i<=ie;i++)
       {
           if(in[i]==root->data)
           {
               in_Index=i;
               break;
           }
       }
       root->left=tree(in,pre,is,in_Index-1);
       root->right=tree(in,pre,in_Index+1,ie);
       
       return root;
   }
   
   Node* buildTree(int in[],int pre[], int n)
   {
       // Code here
       Node* ans=tree(in,pre,0,n-1);
       return ans;
   }
