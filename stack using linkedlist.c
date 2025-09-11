#include<stdio.h>
#include<stdlib.h>
void insert();
void del();
void search();
void display();
void exit();
struct node
{
	int data;
	struct node*next;	
};
struct node*n,*head=NULL,*temp=NULL,*p;
void main()
{
	int ch;
	while(1)
{

       print("1.insert,2.del,search,4.display,5.exit");
       print("enter your choice");
       scanf("%d",&ch);
       switch(ch){
	      case 1:insert();
        	break;
      	case 2:del();
        	break;
     	case 3:search();
        	break;
    	case 4:display();
        	break;
       	case 5:exit(1);
       }
    }
}
void insert()
{
	int ch,t,val,c;
	n=(struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d",&n->data);
	if(head==NULL)
	{
		head=n;
		n->next=NULL;
     }
     else
     {
     	printf("1.begin,2.ending,3.after somenode,4,before secondnode");
     	printf("enter your choice");
     	scanf("%d",&c);
     	switch(c)
     	{
     		case 1:n->next=head;
     		head=n;
     		break;
     		case 2:n->next=NULL;
     		temp=head;
     		while(temp->next!=NULL)
     		{
     			temp=temp->next;
     		}
     		temp->next=n;
     		break;
     		case 3:printf("enter after which data to insert");
     		scanf("%d",&t);
     		temp=head;
     		while(temp->data!=val)
     		{
     			temp=temp->next;
     		}
     		n->next=temp->next;
     		temp->next=n;
     		break;
     		case 4:("before which node");
     		scanf("%d",&val);
     		temp=head;
     		p=NULL;
     		while(temp->data!=val)
     		p=temp;
     		{
     			temp=temp->next;
     		}
     		n->next=temp;
     		p->next=n;
     		break;
			 }
}
}
void del()
{
	int c,val;
	if(head==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
		printf("1.begin,2.ending,3.particular no del");
		printf("enter your choice");
		scanf("%d",&c);
		switch(c)
		{
			case 1:temp=head;
			head=head->next;
			free(temp);
			break;
			case 2:p=NULL;
			temp=head;
			while(temp->next!=NULL)
			{
				p=temp;
				temp=temp->next;
			}
			p->next=NULL;
			free(temp);
			break;
			case 3: printf("enter node to deL");
			scanf("%d",&val);
			p=NULL;
			temp=head;
			while(temp->data!=val)
			{
				p=temp;
				temp=temp->next;
			}
			p->next=temp->next;
			free(temp);
			break;
			}
		}
	}
void search()
{
	int val,t,c=0;
	if(head==NULL)
	{
		printf("no linked list to perform search");
	}
	else{
		printf("enter data to search");
		scanf("%d",&t);
		temp=head;
		while(temp!=NULL)
		{
			if(temp->data==t)
		
		c=1;
		break;
	
	else{
	
	temp=temp->next;
}
if(c==1){

printf("data is found");
}else{
	printf("data is not found")

}
}
}
void display()
{
	if(head==NULL)
	{
		printf("no element to display");
	}else{
		temp=head;
		while(temp!==NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
	
 } 

