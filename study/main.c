#include "unistd.h"
#include "stdio.h"

extern int ft_strlen(int c);
extern int ret();
extern int sum();
extern int jmp();
extern int jmp_cmp();
extern int loop();
extern int argument();
extern int stack();
extern int memory();
extern int memory2();

int main(void)
{
	printf("%d\n", memory2());
	return (0);
}
