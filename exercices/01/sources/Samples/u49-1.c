#include <stdio.h>
#include <stdlib.h>
#include "ilp.h"

/* Global variables */
ILP_Object	print;


ILP_Object 
ilp_program()
{
	{
		ILP_Object	ilptmp127;
		ILP_Object	ilptmp128;
		ILP_Object	ilptmp129;
		ilptmp127 = ILP_Integer2ILP(5);
		ilptmp128 = ILP_Integer2ILP(6);
		ilptmp129 = ILP_Integer2ILP(7);

		{
			ILP_Object	a1 = ilptmp127;
			ILP_Object	b2 = ilptmp128;
			ILP_Object	c3 = ilptmp129;
			{
				ILP_Object	ilptmp130;
				{
					ILP_Object	ilptmp131;
					ILP_Object	ilptmp132;
					ilptmp131 = b2;
					{
						ILP_Object	ilptmp133;
						ILP_Object	ilptmp134;
						ilptmp133 = ILP_Integer2ILP(4);
						{
							ILP_Object	ilptmp135;
							ILP_Object	ilptmp136;
							ilptmp135 = a1;
							ilptmp136 = c3;
							ilptmp134 = ILP_Times(ilptmp135, ilptmp136);
						}
						ilptmp132 = ILP_Times(ilptmp133, ilptmp134);
					}
					ilptmp130 = ILP_Minus(ilptmp131, ilptmp132);
				}

				{
					ILP_Object	result4 = ilptmp130;
					{
						ILP_Object	ilptmp137;
						{
							ILP_Object	ilptmp138;
							ILP_Object	ilptmp139;
							ilptmp138 = result4;
							ilptmp139 = ILP_Integer2ILP(0);
							ilptmp137 = ILP_LessThan(ilptmp138, ilptmp139);
						}
						if (ILP_isEquivalentToTrue(ilptmp137)) {
							{
								ILP_Object	ilptmp140;
								ilptmp140 = ILP_String2ILP("discriminant negatif: aucune racine");
								return ILP_print(ilptmp140);
							}

						} else {
							{
								ILP_Object	ilptmp141;
								{
									ILP_Object	ilptmp142;
									ILP_Object	ilptmp143;
									ilptmp142 = result4;
									ilptmp143 = ILP_Integer2ILP(0);
									ilptmp141 = ILP_GreaterThan(ilptmp142, ilptmp143);
								}
								if (ILP_isEquivalentToTrue(ilptmp141)) {
									{
										ILP_Object	ilptmp144;
										ilptmp144 = ILP_String2ILP("discriminant positif: deux racines");
										return ILP_print(ilptmp144);
									}

								} else {
									{
										ILP_Object	ilptmp145;
										ilptmp145 = ILP_String2ILP("discriminat nul: user seule racine");
										return ILP_print(ilptmp145);
									}

								}
							}

						}
					}

				}
			}

		}
	}

}

static ILP_Object 
ilp_caught_program()
{
	struct ILP_catcher *current_catcher = ILP_current_catcher;
	struct ILP_catcher new_catcher;

	if (0 == setjmp(new_catcher._jmp_buf)) {
		ILP_establish_catcher(&new_catcher);
		return ilp_program();
	};
	return ILP_current_exception;
}

int 
main(int argc, char *argv[])
{
	ILP_START_GC;
	ILP_print(ilp_caught_program());
	ILP_newline();
	return EXIT_SUCCESS;
}
