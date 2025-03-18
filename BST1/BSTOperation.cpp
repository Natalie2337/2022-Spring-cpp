

#include "BiTNode.h"
#include <stdlib.h>


void InitBiTree(BiTree& T)
{
	T = NULL;
}

void DestroyBiTree(BiTree& T)
{
	if (T)
	{
		DestroyBiTree(T->lchild);
		DestroyBiTree(T->rchild);
		free(T);
		T = NULL;
	}
}

//����ݹ����T����ÿ�������ú���Visitһ���ҽ�һ��
void PreOderTraverse(BiTree T, void(*Visit)(ElemType))
{
	if (T)
	{
		Visit(T->data);
		PreOderTraverse(T->lchild, Visit);
		PreOderTraverse(T->rchild, Visit);
	}
}

//����ݹ����T����ÿ�������ú���Visitһ���ҽ�һ��
void InOrderTraverse(BiTree T, void(*Visit)(ElemType))
{
	if(T)
	{
		InOrderTraverse(T->lchild, Visit);
		Visit(T->data);
		InOrderTraverse(T->rchild, Visit);
	}
	
}

/*�ڸ�ָ��T��ָ�����������еݹ�ز���ĳ�ؼ��ֵ���key������Ԫ��
* �����ҳɹ����򷵻�ָ�������Ԫ�ؽ���ָ�룬���򷵻ؿ�ָ��
*/
BiTree SearchBST(BiTree T, KeyType key)
{
	if (!T || key == T->data.key)  //���ջ�����ҵĹؼ��ֵ���T��ָ���Ĺؼ���
		return T;
	else if (LT(key, T->data.key))   //�����ҵĹؼ���С��T��ָ���Ĺؼ���
		return SearchBST(T->lchild, key);
	else
		return SearchBST(T->rchild, key);
}

/* �ڸ�ָ��T��ָ�����������еݹ�ز�����ؼ��ֵ���key������Ԫ��
* �����ҳɹ�����ָ��pָ�������Ԫ�ؽ�㣬������TRUE
* ����ָ��pָ�����·���Ϸ��ʵ����һ����㣬������FALSE
* ָ��fָ��T��˫�ף����ʼֵΪNULL
*/
Status SearchBST(BiTree& T, KeyType key, BiTree f, BiTree& p)
{
	if (!T)  //���Ҳ��ɹ�
	{
		p = f;   //pָ�����·���Ϸ��ʵ����һ�����
		return FALSE;
	}
	else if (EQ(key, T->data.key)) //���ҳɹ�
	{
		p = T;  //ָ�������Ԫ�ؽ��
		return TRUE;
	}
	else if (LT(key, T->data.key))  //key С��T��ָ���Ĺؼ���
		return SearchBST(T->lchild, key, T, p);
	else   //key С��T��ָ���Ĺؼ���
		return SearchBST(T->rchild, key, T, p);
}

/* ������������T��û�йؼ���e.key��Ԫ�أ�����e������TRUE
* ���򷵻�FALSE
*/
Status InsertBST(BiTree& T, ElemType e)
{
	BiTree p, s=NULL;
	if (!SearchBST(T, e.key, NULL, p))  //���Ҳ��ɹ���pָ�����·���Ϸ��ʵ����һ��Ҷ�ӽ��
	{
		s = (BiTree)malloc(sizeof(BiTree));   //�����½��
		if (s == NULL)
		{
			printf("Can not create node.");
			exit(0);
		}
		s->data = e;   //���½������ݸ�ֵ
		s->lchild = s->rchild = NULL;   //���½������Һ����򸳳�ֵ��


		if (!T)    //�����Ϊ��
			T = s;
		else if (LT(e.key, p->data.key))  //����Ϊ�գ�*s�Ĺؼ���С��*p�Ĺؼ���
			p->lchild = s;   //������*sΪp��ָ��������
		else
			p->rchild = s;  ////������*sΪp��ָ�����Һ���

		return TRUE;
	}
	return FALSE;
}

void Visit(ElemType c)
{
	printf("(%d, %d)", c.key, c.others);
}

void InputFromFile(FILE* f, ElemType& c)
{
	fscanf(f, "%d%d", &c.key, &c.others);
}

