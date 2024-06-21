#ifndef MINIRT_H
# define MINIRT_H

#include "../minilibx-linux/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <fcntl.h>
#include "gnl/gnl.h"

#ifdef __APPLE__
	#define ESC_KEY 53
	#define W_KEY 13
	#define A_KEY 0
	#define S_KEY 1
	#define D_KEY 2
	#define UP 126
	#define DOWN 125
	#define LEFT 123
	#define RIGHT 124

#elif defined(__linux__)
	#define ESC_KEY 65307
	#define W_KEY 119
	#define A_KEY 97
	#define S_KEY 115
	#define D_KEY 100
	#define UP 65362
	#define DOWN 65364
	#define LEFT 65361
	#define RIGHT 65363

#else
	#error "Unsupported operating system"
#endif

# define DOTRT_ERR "Error\nThe scene file must have a .rt extension.\n"
# define FDNM_ERR "Error\nOne of the normal map file cannot be access.\n"

# define SPACE_POINT 	"must have a point in space"
# define INTENSITY		"intensity must range from 0 to 1"
# define SMOOTHNESS		"smoothness must range from 0 to 1"
# define COLOR			"rgb color components must range from 0 to 255"
# define DIAMETER_ERR	"diameter must be positive"
# define SIZE_ERR		"size must be positive"
# define REFLECTION		"reflection arguments must range from 0 to 1"
# define TEXTURE		"texture must be either checkers or a bump map"
# define DIR_VECTOR		"direction vector components must range from -1 to 1"
# define FOV_ERR		"FOV must range from 0 to 180"
# define ST_ERR			"stars option can't be implemented"

typedef struct s_vec3
{
	double		x;
	double		y;
	double		z;
}				t_vec3;

typedef struct s_amb
{
	double		intensity;
	int			color;
}				t_amb;

// Structures Parsing


// Library functions libft.c
int     _strlen(const char *str);
char	*_strnstr(const char *big, const char *little, size_t len);
float	_atof(char *str);

// Library functions split.c
char	**_split(char const *s, char c);


#endif

