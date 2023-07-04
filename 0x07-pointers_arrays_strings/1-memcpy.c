/**
 * _memcpy - copies n bytes from src to dest.
 * @src: the source.
 * @dest: the destination.
 * @n: bytes of memory to copy.
 *
 * Return: it returns a pointer to the copied memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int j;
	
        j = 0;
        while (j < n)
        {
                *((char *) dest + j) = *((char *) src + j);
                j++;
        }
	
        return (dest);
}
