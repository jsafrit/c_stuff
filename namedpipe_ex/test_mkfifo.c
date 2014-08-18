#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
	int status;
	status = mkfifo("/home/jsafrit/mod_done", S_IWUSR | S_IRUSR | S_IRGRP | S_IROTH);
	return status;
}

