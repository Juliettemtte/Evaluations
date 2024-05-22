#include <stdio.h>
#include <fcntl.h>

int  main(void)
{
  int  fd = open("test.txt", O_RDONLY);
  char  *line;

  line = get_next_line(fd);
  printf("line:%s", line);
  while (line)
  {
    free(line);
    line = get_next_line(fd);
    printf("line:%s", line);
  }
  if (line)
    free (line);
}
