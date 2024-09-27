#include "IOCompletionPort.h"

const UINT16 SERVER_PORT = 10800;
const UINT16 MAX_CLIENT = 5;		//�� �����Ҽ� �ִ� Ŭ���̾�Ʈ ��

int main()
{
	IOCompletionPort ioCompletionPort;

	//������ �ʱ�ȭ
	ioCompletionPort.InitSocket();

	//���ϰ� ���� �ּҸ� �����ϰ� ��� ��Ų��.
	ioCompletionPort.BindandListen(SERVER_PORT);

	ioCompletionPort.StartServer(MAX_CLIENT);

	printf("�ƹ� Ű�� ���� ������ ����մϴ�\n");
	getchar();

	ioCompletionPort.DestroyThread();
	return 0;
}

