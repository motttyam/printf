/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktsukamo <ktsukamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:52:01 by ktsukamo          #+#    #+#             */
/*   Updated: 2024/04/27 19:38:16 by ktsukamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	main(void)
{
	// ///////////////////////// normal
		//////////////////////////////////////////
	// printf("\n----------------normal test --------------\n");
	// // normal test 1: rv = 13
	// printf("res戻り値: %d\n",ft_printf("Hello, World!"));
	// printf("ans戻り値: %d\n",printf("Hello, World!"));
	// // normal test 2: isprint + new line '\n'
	// printf("res戻り値: %d\n",ft_printf("Hello 42, Hello C!\n"));
	// printf("ans戻り値: %d\n",printf("Hello 42, Hello C!\n"));
	// // normal test 3 put in nothing rv = 0
	// printf("res戻り値: %d\n",ft_printf(""));
	// printf("ans戻り値: %d\n",printf(""));
	// // normal test 4 put in nothing
	// printf("res戻り値: %d\n",ft_printf(""));
	// printf("ans戻り値: %d\n",printf(""));
	// // normal test 4: long string
	// printf("res戻り値: %d\n",
		// ft_printf("この文字列は非常に長いもので、printfのバッファリングや性能を試すのに適しています。"));
	// printf("ans戻り値: %d\n",
		// ft_printf("この文字列は非常に長いもので、printfのバッファリングや性能を試すのに適しています。"));
	// // normal test 6: 特殊文字とエスケープシーケンス
	// printf("戻り値: %d\n", ft_printf("改行\nタブ\tバックスラッシュ\\ダブルクォート\"シングルクォート\'"));
	// printf("戻り値: %d\n", printf("改行\nタブ\tバックスラッシュ\\ダブルクォート\"シングルクォート\'"));
	///////////////////////// %c //////////////////////////////////////////
	// // %c test1: A
	// printf("\n----------------%%c test --------------\n");
	// printf("res戻り値: %d\n", ft_printf("%c\n", 'A'));
	// printf("ans戻り値: %d\n", printf("%c\n", 'A'));
	// // %c test3: A -> B -> C
	// printf("res戻り値: %d\n", ft_printf("%c\n%c\n%c\n", 'A', 'B', 'C'));
	// printf("ans戻り値: %d\n", printf("%c\n%c\n%c\n", 'A', 'B', 'C'));
	///////////////////////// %s //////////////////////////////////////////
	// printf("\n----------------%%s test --------------\n");
	// // %s test 1
	// printf("ans戻り値: %d\n", printf("%s", "Hello, World!"));
	// printf("res戻り値: %d\n", ft_printf("%s", "Hello, World!"));
	// // %s test 2 NULL
	// printf("ans戻り値: %d\n", printf("%s", NULL));
	// printf("res戻り値: %d\n", ft_printf("%s", NULL));
	///////////////////////// %s //////////////////////////////////////////
	// printf("\n----------------%%p test --------------\n");
  
  // const char *test_1[] = {"I", "W", "E"};
  // const char test_2[] = "IWE";
  
	// // %p test 1
  // printf("%%p test 1\n");
	// printf("ans戻り値: %d\n", printf("%p\n", NULL));
	// printf("res戻り値: %d\n", ft_printf("%p\n", NULL));

	// // %p test 2
  // printf("%%p test 2\n");
	// printf("ans戻り値: %d\n", printf("%p\n", test_1));
	// printf("res戻り値: %d\n", ft_printf("%p\n", test_1));
	
  // // %p test 3
  // printf("%%p test 3\n");
	// printf("ans戻り値: %d\n", printf("%p\n", test_1[0]));
	// printf("res戻り値: %d\n", ft_printf("%p\n", test_1[0]));
  
	// // %p test 4
  // printf("%%p test 4\n");
	// printf("ans戻り値: %d\n", printf("%p\n", test_1[1]));
	// printf("res戻り値: %d\n", ft_printf("%p\n", test_1[1]));
  
	// // %p test 5
  // printf("%%p test 5\n");
	// printf("ans戻り値: %d\n", printf("%p\n", test_1[2]));
	// printf("res戻り値: %d\n", ft_printf("%p\n", test_1[2]));

	// // %p test 6
  // printf("%%p test 6\n");
	// printf("ans戻り値: %d\n", printf("%p\n", test_2));
	// printf("res戻り値: %d\n", ft_printf("%p\n", test_2));
  
	// // %p test 7
  // printf("%%p test 7\n");
	// printf("ans戻り値: %d\n", printf("%p\n", &test_2[0]));
	// printf("res戻り値: %d\n", ft_printf("%p\n", &test_2[0]));
  
	// // %p test 8
  // printf("%%p test 8\n");
	// printf("ans戻り値: %d\n", printf("%p\n", &test_2[1]));
	// printf("res戻り値: %d\n", ft_printf("%p\n", &test_2[1]));
	// // %p test 9
  // printf("%%p test 9\n");
	// printf("ans戻り値: %d\n", printf("%p\n", &test_2[2]));
	// printf("res戻り値: %d\n", ft_printf("%p\n", &test_2[2]));

  // int num = 5;
  // float fnum = 5.0;
  
	// // %p test 10
  // printf("%%p test 10\n");
  // printf("ans戻り値: %d\n", printf("%p\n", (void *)&num));
  // printf("res戻り値: %d\n", ft_printf("%p\n", (void *)&num));
	
  // // %p test 11
  // printf("%%p test 11\n");
  // printf("ans戻り値: %d\n", printf("%p\n", (void *)&fnum));
  // printf("res戻り値: %d\n", ft_printf("%p\n", (void *)&fnum));

	// // %p test 12
  // printf("%%p test 12\n");
  // printf("ans戻り値: %d\n", printf("%p\n", (void *)printf));
  // printf("res戻り値: %d\n", ft_printf("%p\n", (void *)printf));
	
  // // %p test 13
  // printf("%%p test 12\n");
  // printf("ans戻り値: %d\n", printf("%p %p\n",  (void *)LONG_MIN, (void *)LONG_MAX));
  // printf("res戻り値: %d\n", ft_printf("%p %p\n", (void *)LONG_MIN, (void *)LONG_MAX));

  // %p test  compile error
  // printf("%%p test \n");
	// printf("ans戻り値: %d\n", printf("%p\n", test_1[3]));
	// printf("res戻り値: %d\n", ft_printf("%p\n", test_1[3]));

	///////////////////////// %d & i /////////////////////////////////////////
  
	// %d test
	// printf("戻り値: %d",printf("%c\n%c\n%c\n%c\n",'1','2','3','4'));
	// printf("戻り値: %d",ft_printf("%c\n%c\n%c\n%c\n",'1','2','3','4'));
  
	///////////////////////// %u /////////////////////////////////////////
  // 	printf("\n----------------%%u test --------------\n");
	// // %u test 1 なぜかprintfが外れる
  // printf("%%u test 1\n");
	// // printf("ans戻り値: %d\n",printf("%u\n", 4294967295));
	// printf("res戻り値: %d\n",ft_printf("%u\n",4294967295));
  
  // printf("%%u test 2\n");
	// printf("ans戻り値: %d\n",printf("%u\n", 0));
	// printf("res戻り値: %d\n",ft_printf("%u\n",0));
  
	///////////////////////// %x /////////////////////////////////////////
  	printf("\n----------------%%x test --------------\n");
	// %u test 1 なぜかprintfが外れる
  printf("%%x test 1\n");
	printf("ans戻り値: %d\n",printf("%x\n", 100));
	printf("res戻り値: %d\n",ft_printf("%x\n",100));
  
  printf("%%x test 2\n");
	printf("ans戻り値: %d\n",printf("%x\n", -100));
	printf("res戻り値: %d\n",ft_printf("%x\n", -100));
  
	///////////////////////// MIX /////////////////////////////////////////
	// printf("\n----------------MIX test --------------\n");
	// mix test 1: %d + %c +  %s
	// printf("ans戻り値: %d\n", printf("整数: %d, 文字: %c, 文字列: %s", 42, 'A',
			// "test"));
	// printf("res戻り値: %d\n", ft_printf("整数: %d, 文字: %c, 文字列: %s", 42, 'A',
			// "test"));
	// テスト 7: フォーマット指定子の誤用（不一致） → originalはCL段階で弾いてくれる
	// printf("ans戻り値: %d\n", printf("整数として表示: %d", 3.14159));
	// printf("res戻り値: %d\n", ft_printf("整数として表示: %d", 3.14159));
	// crush test 1 put in NULL → original is segv
	// printf("res戻り値: %d\n",ft_printf(NULL));
	// printf("ans戻り値: %d\n",printf(NULL));

	return (0);
}
