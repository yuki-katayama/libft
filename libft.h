#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h> //malloc
# include <limits.h> //INT_
# include <unistd.h> //write
# include <stdbool.h> //bool
# include <sys/stat.h> //stat

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void			ft_putstr(char *str);
void			ft_putchar(char c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlen(const char *s);
char			*ft_strdup(const char *src);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strcat(char *s1, const char *s2);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isspace(int c);
int				ft_atoi(const char *str);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *haystack, \
								const char *needle, size_t len);
size_t			ft_strlcpy(char *dst, \
								const char	*src, size_t dstsize);
size_t			ft_strlcat(char *dst, \
								const char	*src, size_t dstsize);
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
void			*ft_calloc(size_t count, size_t size);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s1, char const *set);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr(int nb);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_putlstnbr(t_list *lst);
t_list			*ft_lstmap(t_list *lst, \
								void *(*f)(void *), void (*del)(void *));
void			*ft_free_char(char **word, int index);
int				ft_malloc_p(void **p, size_t len);
int				ft_malloc_pp(void ***p, size_t len);
void			ft_swap(int *a, int *b);
char			*ft_spaceskip(const char *str);
t_list			*ft_lstcpy(t_list *lst);
void			ft_free_int(int **ptr);
void			ft_quick_sort(int *nums, int left, int right);
int				ft_arraylen(char **array);
int				ft_nbrlen(long int nb);
char			*ft_charskip(const char *str, char skip);
char			*ft_skip(const char *str, int len);
bool			ft_isdigitstr(const char *str);
char			*ft_untilskip(char *str, char c);
struct stat		ft_getstat(char *file_name);
char			*ft_chardel(char *str, char *c);

#endif
