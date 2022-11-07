#include "main.h"

/**
 * read_cmd - a function that reads the user commands.
 * @void: takes no args.
 *
 * Description: a function that reads the user arguments from stdin
 * input in chunks of 1024 bytes and stored in a buffer. 
 * Return: return the pointer to the read command/string.
 */

char *read_cmd(void)
{
	char buff[1024];
	char *ptr;
	char ptrlen;

	ptrlen = 0;
	ptr = NULL;

	while(fgets(buff, 1024, stdin))
	{
		int bufflen;

		bufflen = strlen(buff);

		if(!ptr)
		{
			ptr = malloc(bufflen + 1);
		}

		else
		{
			char ptr2;

			ptr2 = realloc(ptr, prtlen + bufflen + 1);

			if (ptr2)
			{
				ptr = ptr2;
			}

			else
			{
				free(ptr);
				ptr = NULL;
			}
		}

		if (!ptr)
		{
			fprintf(stderr, "Error: Failed to allocate buffer: %s\n", stderr(errno));
					return (NULL);
		}

		strcpy(ptr + ptrlen, buff);

		if (buff[bufflen - 1] == '\n')
		{
			if(bufflen == 1 || buff[bufflen-2] != '\\')
			{
				return ptr;
			}

			ptr[ptrlen + bufflen-2] = '\0';
			bufflen -= 2;
			print_prompt2();
		}

		ptr += bufflen;
	}
return (ptr);
}
