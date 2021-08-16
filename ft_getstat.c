#include "libft.h"

struct stat	ft_getstat(char *file_name)
{
	struct stat	stat_buf;

	stat_buf = (struct stat){};
	if (stat(file_name, &stat_buf) == 0)
		return (stat_buf);
	return (stat_buf);
}

/*
#include <time.h>
int main(int argc, char **argv)
{
	struct stat stat_buf;

	if (argc != 2)
	{
		fprintf(stderr, "main : 実行時引数の数が不当です\n");
		exit(EXIT_FAILURE);
	}
	stat_buf = get_stat(argv[1]);
	if (stat_buf.st_dev == 0)
		return (1);
	// ファイル情報を表示
	printf("デバイスID : %d\n", stat_buf.st_dev);
	printf("inode番号 : %lld\n", stat_buf.st_ino);
	printf("アクセス保護 : %o\n", stat_buf.st_mode);
	printf("ハードリンクの数 : %d\n", stat_buf.st_nlink);
	printf("所有者のユーザID : %d\n", stat_buf.st_uid);
	printf("所有者のグループID : %d\n", stat_buf.st_gid);
	printf("デバイスID（特殊ファイルの場合） : %d\n", stat_buf.st_rdev);
	printf("容量（バイト単位） : %lld\n", stat_buf.st_size);
	printf("ファイルシステムのブロックサイズ : %d\n", stat_buf.st_blksize);
	printf("割り当てられたブロック数 : %lld\n", stat_buf.st_blocks);
	printf("最終アクセス時刻 : %s", ctime(&stat_buf.st_atime));
	printf("最終修正時刻 : %s", ctime(&stat_buf.st_mtime));
	printf("最終状態変更時刻 : %s", ctime(&stat_buf.st_ctime));
	printf("ディレクトリかどうか(true: 0) : %d\n", S_ISREG(stat_buf.st_mode));
	return EXIT_SUCCESS;
}
*/