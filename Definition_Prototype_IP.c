#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *allocationTab(int taille)
{
	char *Tab = NULL;
	Tab = (char*) malloc (taille * sizeof(char));
	return Tab;
}

void recuperation_IP(char *T,int *nombre1,int *nombre2,int *nombre3,int *nombre4,int *longueur)
{
	int point = 0 ,i= 0;
	printf("Content-Type: text/html\n\n");
	T = getenv("QUERY_STRING");
	if (T == NULL)
	{
		printf("<HTML>\n");
		printf("	<HEAD>\n");
		printf("		<link rel=\"stylesheet\" href=\"style.css\"/>\n");
		printf("	</HEAD>\n");
		printf("	<BODY>\n");
		printf("		<CENTER>\n");
		printf("		<P>Erreur</P>\n");
		printf("		</CENTER>\n");
		printf("	</BODY>\n");
		printf("</HTML>\n");
		exit(1);
	}
	do
	{
		if (T[i] == '.')
			point++;
		i++;
	}
	while(T[i] != '\0');
	if (point < 3)
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
	*longueur = (int)strlen (T);
	sscanf(T,"nombre=%d.%d.%d.%d",nombre1,nombre2,nombre3,nombre4);
}
void Verification_IP( int nombre1,int nombre2,int nombre3,int nombre4,int *valide)
{
	if(nombre1 < 0 || nombre1 > 255)
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
	else 
		*valide=*valide + 1;
		
	if(nombre2 < 0 || nombre2 > 255)
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
	else 
		*valide=*valide + 1;
	if(nombre3 < 0 || nombre3 > 255)
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
	else 
		*valide=*valide + 1;
	if(nombre4 < 0 || nombre4 > 255)
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
	else 
		*valide=*valide + 1;	
}		
void Verification_Class_IP( int nombre1)
{
	if(0 <= nombre1 && nombre1 < 128)
	{
		printf("<HTML>\n");
		printf("	<HEAD>\n");
		printf("		<link rel=\"stylesheet\" href=\"style.css\"/>\n");
		printf("	</HEAD>\n");
		printf("	<BODY>\n");
		printf("		<CENTER>\n");
		printf("		<P>C'ect un Address IP de classe A</P>\n");
		printf("		</CENTER>\n");
		printf("	</BODY>\n");
		printf("</HTML>\n");
		exit(1);
	}
	if(128 <= nombre1  && nombre1 < 192)
	{
		printf("<HTML>\n");
		printf("	<HEAD>\n");
		printf("		<link rel=\"stylesheet\" href=\"style.css\"/>\n");
		printf("	</HEAD>\n");
		printf("	<BODY>\n");
		printf("		<CENTER>\n");
		printf("		<P>C'ect un Address IP de classe B</P>\n");
		printf("		</CENTER>\n");
		printf("	</BODY>\n");
		printf("</HTML>\n");
		exit(1);
	}
	if(192 <= nombre1 && nombre1 < 224)
	{
		printf("<HTML>\n");
		printf("	<HEAD>\n");
		printf("		<link rel=\"stylesheet\" href=\"style.css\"/>\n");
		printf("	</HEAD>\n");
		printf("	<BODY>\n");
		printf("		<CENTER>\n");
		printf("		<P>C'ect un Address IP de classe C</P>\n");
		printf("		</CENTER>\n");
		printf("	</BODY>\n");
		printf("</HTML>\n");
		exit(1);
	}
	if(224 <= nombre1 && nombre1 < 240)
	{
		printf("<HTML>\n");
		printf("	<HEAD>\n");
		printf("		<link rel=\"stylesheet\" href=\"style.css\"/>\n");
		printf("	</HEAD>\n");
		printf("	<BODY>\n");
		printf("		<CENTER>\n");
		printf("		<P>C'ect un Address IP de classe D</P>\n");
		printf("		</CENTER>\n");
		printf("	</BODY>\n");
		printf("</HTML>\n");
		exit(1);
	}
	
	if(240 <= nombre1   && nombre1 < 256)
	{
		printf("<HTML>\n");
		printf("	<HEAD>\n");
		printf("		<link rel=\"stylesheet\" href=\"style.css\"/>\n");
		printf("	</HEAD>\n");
		printf("	<BODY>\n");
		printf("		<CENTER>\n");
		printf("		<P>C'ect un Address IP de classe E</P>\n");
		printf("		</CENTER>\n");
		printf("	</BODY>\n");
		printf("</HTML>\n");
		exit(1);
	}
}
