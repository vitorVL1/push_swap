#include "push_swap.h"

int	*create_chunk(int *arr, int start_index, int end_index)
{
	int	*chunk;
	int	i;

	i = 0;
	chunk = malloc((end_index - start_index) * sizeof(int));
	while (start_index + i < end_index)
	{
		chunk[i] = arr[start_index + i];
		i++;
	}
	return (chunk);
}

int	**create_chunk_array(int *arr, int arr_size, int chunk_size,
int *num_chunks)
{
	int	num;
	int	**chunks;
	int	i;
	int	j;
	int	end_index;

	num = (arr_size + chunk_size - 1) / chunk_size;
	chunks = malloc(num * sizeof(int *));
	i = 0;
	j = 0;
	while (i < arr_size && j < num)
	{
		end_index = i + chunk_size;
		if (end_index > arr_size)
		{
			end_index = arr_size;
		}
		chunks[j] = create_chunk(arr, i, end_index);
		siz()->siz = end_index;
		i += chunk_size;
		j++;
	}
	*num_chunks = num;
	return (chunks);
}
/* 
 int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int chunk_size = 3;
	int num_chunks;
	int **chunks = create_chunk_array(arr, arr_size, chunk_size, &num_chunks);
	for (int i = 0; i < num_chunks; i++)
	{
		printf("Chunk %d: [", i);
		for (int j = 0; j < chunk_size && i * chunk_size + j < arr_size; j++)
		{
			printf("%d", chunks[i][j]);
			if (j < chunk_size - 1 && i * chunk_size + j < arr_size - 1)
			{
				printf(", ");
			}
		}
		printf("]\n");
	}
	for (int i = 0; i < num_chunks; i++)
	{
		free(chunks[i]);
	}
	free(chunks);
	return (0);
} */