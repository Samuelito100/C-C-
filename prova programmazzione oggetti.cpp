#include <iostream>

using namespace std;

class voti {
	float privato;
	
	public:
		float orale;
		float scritto;
		
		void media (void){
			printf("la media dei due voti e'\n");
			printf("%f",(orale+scritto)/2);
		}
		float getPrivato(void){
			return privato;
		}
		
		voti (float setOrale, float setScritto, float setPrivato){
			orale=setOrale;
			scritto=setScritto;
			privato=setPrivato;
			printf("oggetto creato\n");
		}
};

int main (void){
	voti kingkong (5,6,8);
	
	printf("voto orale %f\n",kingkong.orale);
	printf("voto scritto %f\n",kingkong.scritto);
	printf("voto privato %f\n",kingkong.getPrivato());
	kingkong.media();
}