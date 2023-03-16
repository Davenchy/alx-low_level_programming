#include <stdlib.h>
#include <string.h>


/**
 * _realloc - reallocate a memory block with super handy functionality
 * @ptr: pointer to the old memory, set to NULL to allocate with @new_size
 * @old_size: the old allocated memory size
 * @new_size: the new allocated memory size, set to zero to free @ptr memory
 * Description:
 * set @ptr to NULL to allocate new memory of size @new_size.
 * set @new_size to zero to free memory allocated at @ptr.
 * set @ptr to allocated memory of size @old_size to reallocate memory
 * to @new_size and copy all old bytes to the new allocated memory
 * alos free the old allocated memory @ptr.
 * the new allocated memory or the reallocated memory is unintialized.
 *
 * Return: memory for the allocated or reallocated memory
 *         otherwise NULL on fail or free
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* if no @ptr then allocate new memory of size @new_size */
	if (!ptr)
		ptr = malloc(new_size);

	if (ptr)
	{
		/* if @new_size set to zero then free old memory at @ptr */
		if (!new_size)
		{
			free(ptr);
			return (NULL);
		}
		/* if @old_size and @new_size are not equal then reallocate memory */
		else if (old_size != new_size)
		{
			void *p = malloc(new_size);

			if (!p)
				return (NULL);
			/* copy old bytes to the new allocated memory */
			memcpy(p, ptr, new_size > old_size ? old_size : new_size);
			/* free old memory */
			free(ptr);
			/* to return the new allocated memory address at the end */
			ptr = p;
		}
	}

	return (ptr);
}
