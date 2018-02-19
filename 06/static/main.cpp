#include "header.h"

/*
 * Main file for static program
 */

using namespace std;

int		main(void)
{
	int		ct_size(4), st_size(3);
	double 	cos_tab[ct_size];
	string	str_tab[st_size];

	cos_tab[0] = 3;
	cos_tab[1] = 2;
	cos_tab[2] = 1;
	cos_tab[3] = 0;

	str_tab[0] = "42";
	str_tab[1] = " is the answer to ";
	str_tab[2] = "unviverse !";

	all_cos(cos_tab, ct_size);
	all_names(str_tab, st_size);

	return (0);
}
