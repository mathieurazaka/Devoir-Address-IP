#include <stdio.h>
#include <stdlib.h>
#include "Prototype_IP.h"

int main ()
{
	char *T=NULL;
	int taille ,nombre1,nombre2,nombre3,nombre4,longueur,valide;
	taille = 500;
	nombre1 = 0;
	nombre2 = 0;
	nombre3 = 0;
	nombre4 = 0;
	longueur = 0;
	valide = 0;
	T = allocationTab(taille);
	if(T == NULL)
	{
		printf("Probleme d'allocation de la memoire\n");
		exit(1);
	}
	recuperation_IP(T,&nombre1,&nombre2,&nombre3,&nombre4,&longueur);
	if (14 <= longueur)
	{
		Verification_IP(nombre1,nombre2,nombre3,nombre4,&valide);
		if(valide == 4)
			Verification_Class_IP(nombre1);
		else
		{
			printf("<HTML>\n");
			printf("	<HEAD>\n");
			printf("		<link rel=\"stylesheet\" href=\"style.css\"/>\n");
			printf("	</HEAD>\n");
			printf("	<BODY>\n");
			printf("		<CENTER>\n");
			printf("		<P>C'ect pas un Address IP</P>\n");
			printf("		</CENTER>\n");
			printf("	</BODY>\n");
			printf("</HTML>\n");
			exit(1);
		}
	}
	else
	{
		printf("<HTML>\n");
		printf("	<HEAD>\n");
		printf("		<link rel=\"stylesheet\" href=\"style.css\"/>\n");
		printf("	</HEAD>\n");
		printf("	<BODY>\n");
		printf("		<CENTER>\n");
		printf("		<P>C'ect pas un Address IP</P>\n");
		printf("		</CENTER>\n");
		printf("	</BODY>\n");
		printf("</HTML>\n");
		exit(1);
	}
	free(T);
	return (0);
}
