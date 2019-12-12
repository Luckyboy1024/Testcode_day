#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>                                                                         
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.:h>
#include <sys/stat.h>
int main()
{
	umask(0);   // �����ļ��Ĵ���Ȩ������
	int fd = open("./test.txt", O_RDWR | O_CREAT, 777);
	if (fd < 0)	
	{
		perror("open error");
		return -1;
	}
	char *ptr = "��������~~~~\n";
	int ret = write(fd, ptr, strlen(ptr));
	if (ret < 0){
		perror("write error");
		return -1;
	}
	printf("write len: %d\n", ret);

	//�ڶ�ȡ����֮ǰ���ļ��Ķ�дλ����ת���ļ�����ʼλ��
	lseek(fd, 0, SEEK_SET);
	char buf[1024] = { 0 };
	ret = read(fd, buf, sizeof(buf)-1);
    if (ret < 0){    //��ȡ���ݳ���
        perror("read error");
        return -1;
	}
	else if (0 == ret)  //��ȡ���ݵ����ļ�ĩβ
    {
		printf("at end of file\n");
		return -1;
	}
    else{
		printf("read buf : [%s] - [%d]\n", buf, ret);
	}
    close(fd);  // �ر��ļ����ͷ���Դ
    return 0;
}
