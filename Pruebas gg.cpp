//Hola



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

class Restaurante{
	protected:
			string nombre;
			string direccion;
			string ncomensal;
			string producto;
	public:
		Restaurante();
		void setRestaurante(string, string);
		void getRestaurante();
	void setcomensal(string );
		friend void MostrarComensal( Restaurante &comensal);
    
};

class Menu:public Restaurante{
    private:
   
  static int cont1;
      int acu{};
    
    public: float precio;
    Menu() : acu{cont1++}
    {}
    int getID() {return acu;}
    void setMenu(string,float);
          void getMenu();
       
};

class Menufit:public Menu{
     public:
    float precio;
  static int cont2;
      int acu1{};
  Menufit() : acu1{cont2++}
    {}
    int getID() {return acu1;}
    void setMenu(string,float);
          void getMenu();   
    
    
};
class Menufat:public Menu{
     public:
    float precio;
  static int cont3;
      int acu2{};
  Menufat() : acu2{cont3++}
    {}
    int getID() {return acu2;}
    void setMenu(string,float);
          void getMenu();   
    
    
};
class Cuenta:public Menufit,public Menufat{
     public:
    float total;
 // static int cont;
   //   int acu{};
  Cuenta();
 
   // int getID() {return acu;}
    void setMenu(string,float);
          void getMenu();   
          void setCuenta(float);
    	friend void MostrarCuenta(Cuenta &_total);
    
};
int Menu :: cont1{-1};
int Menufit::cont2{0};
int Menufat::cont3{0};
Cuenta::Cuenta(){}


void Menu::setMenu(string _producto,float _precio){
			
				producto=_producto; 
				precio=_precio;
				}
				void Menufit::setMenu(string _producto,float _precio){
			
				producto=_producto; 
				precio=_precio;
				}
				void Menufat::setMenu(string _producto,float _precio){
			
				producto=_producto; 
				precio=_precio;
				}


void Menu::getMenu(){
    cout<<producto<<" ";
    cout<<"$"<<precio<<endl;
}
void Menufit::getMenu(){
    cout<<producto<<" ";
    cout<<"$"<<precio<<endl;
}
void Menufat::getMenu(){
    cout<<producto<<" ";
    cout<<"$"<<precio<<endl;
}

Restaurante::Restaurante(){
}


void Restaurante::setRestaurante(string _nombre,string _direccion){
				nombre=_nombre; 
				direccion=_direccion;
			}
			
			void Restaurante::setcomensal(string _ncomensal){
				ncomensal=_ncomensal; 
			}
				void Cuenta::setCuenta(float _total){
				total=_total; 
			}
			
			
void Restaurante::getRestaurante(){
			cout<<"Bienvenido a " + nombre<<endl;  
			cout<<"Sucursal " + direccion<<endl;
			}			
			
void MostrarComensal( Restaurante &comensal){
   cout<<comensal.ncomensal<<endl;
}
void MostrarCuenta(Cuenta &_total){
   cout<<"El total es:"<<endl<<"$"<<_total.total<<endl;
}
int main(){
    
    char vs;
	Restaurante restaurante; 

		restaurante.setRestaurante("Restaurante equipo 4","ESIME CULHUACAN");
		restaurante.getRestaurante();
		
		Restaurante comensal;
		string _ncomensal;
		cout << "Gracias por visitarnos! cuál es su nombre?"<<endl;
			getline(cin,_ncomensal);
	
			comensal.setcomensal(_ncomensal);
		
	
		cout << "Bienvenido ";
		
			MostrarComensal(comensal);
			cout << "Ingresar el numero de la opcion deseada: "<<endl;
		   cout<<"1.-Menu completo"<<endl;
		   cout<<"2.-Menu saludable"<<endl;
		   cout<<"3.-Menu de comida rapida"<<endl;
		   cin>>vs;
		   
		   switch(vs){
		       case '1':{
		           Cuenta cuenta;
		           float _total=0;
		       Menu producto[8]={Menu()};
		 
			  producto[0].setMenu("pizza hawaiana grande",250);
			 producto[1].setMenu("Orden de 5 tacos al pastor",100);
			  producto[2].setMenu("Tamal oaxaqueño",40);
			  producto[3].setMenu("Hamburgesa con papas fritas",150);
			 producto[4].setMenu("Coca cola 600 ml",50);
			 producto[5].setMenu("Caguama",80);
			 producto[6].setMenu("Ensalada gei",500);
			  producto[7].setMenu("Te verde",200);
		       cout<<"1.-Menu completo"<<endl;
              cout<<producto[0].getID()<< " "; 
             producto[0].getMenu();
        cout<<producto[1].getID()<< " ";
          producto[1].getMenu();
          cout<<producto[2].getID()<< " ";
           producto[2].getMenu();
           cout<<producto[3].getID()<< " ";
            producto[3].getMenu();
            cout<<producto[4].getID()<< " ";
             producto[4].getMenu();
             cout<<producto[5].getID()<< " ";
              producto[5].getMenu();
     cout<<producto[6].getID()<< " ";
         producto[6].getMenu();
                cout<<producto[7].getID()<< " ";
        producto[7].getMenu();
      int contador;
      int id;
      int a;


cout<<"Cuantos productos desea ordenar"<<endl;
cin>>a;
for(contador=0;contador<a;contador++){
    cout<<"ingresa el id de producto"<<endl;
cin>>id;
		producto[contador]=producto[id-1];

}
cout<<"Tu orden es:"<<endl;

	for (int i=0;i<a;i++){
	    cout<<producto[i].getID()<<" ";
	
		  producto[i].getMenu();
		  _total=_total+producto[i].precio;

	} 
	
	 cuenta.setCuenta(_total);
	 MostrarCuenta(cuenta);

}
     break;
   
     
     case '2':{
      Cuenta cuenta;
		           float _total=0;
		       Menufit producto1[5]={Menufit()};
			 producto1[0].setMenu("Ensalada gei",500);
			  producto1[1].setMenu("Te verde",200);
			  producto1[2].setMenu("Cerveza light",200);
			   producto1[3].setMenu("pechuga de pollo",200);
			   producto1[4].setMenu("Agua de chia con limon",200);


		   cout<<"Menu saludable"<<endl;

cout<<producto1[0].getID()<< " "; 
producto1[0].getMenu();
        cout<<producto1[1].getID()<< " ";
          producto1[1].getMenu();
          cout<<producto1[2].getID()<< " ";
           producto1[2].getMenu();
           cout<<producto1[3].getID()<< " ";
            producto1[3].getMenu();
            cout<<producto1[4].getID()<< " ";
             producto1[4].getMenu();
             
               int contador2;
      int id2;
      int b;


cout<<"Cuantos productos desea ordenar"<<endl;
cin>>b;
for(contador2=0;contador2<b;contador2++){
    cout<<"ingresa el id de producto"<<endl;
cin>>id2;
		producto1[contador2]=producto1[id2-1];
}

cout<<"Tu orden es:"<<endl;

	for (int i=0;i<b;i++){
	    cout<<producto1[i].getID()<<" ";
	
		  producto1[i].getMenu();
		   _total=_total+producto1[i].precio;
	}
		 cuenta.setCuenta(_total);
	 MostrarCuenta(cuenta);
		       
     

         
     }
break;
case '3':{
                   Cuenta cuenta;
		           float _total=0;
    Menufat producto2[6]={Menufat()};
				  
			 producto2[0].setMenu("Orden de 5 tacos al pastor",100);
			 producto2[1].setMenu("pizza hawaiana grande",250);
			  producto2[2].setMenu("Tamal oaxaqueño",40);
			  producto2[3].setMenu("Hamburgesa con papas fritas",150);
			 producto2[4].setMenu("Coca cola 600 ml",50);
			 producto2[5].setMenu("Caguama",80);

		   cout<<"Menu de comida rapida"<<endl;

cout<<producto2[0].getID()<< " "; 
producto2[0].getMenu();
        cout<<producto2[1].getID()<< " ";
          producto2[1].getMenu();
          cout<<producto2[2].getID()<< " ";
           producto2[2].getMenu();
           cout<<producto2[3].getID()<< " ";
            producto2[3].getMenu();
            cout<<producto2[4].getID()<< " ";
             producto2[4].getMenu();
             
               int contador2;
      int id2;
      int b;


cout<<"Cuantos productos desea ordenar"<<endl;
cin>>b;
for(contador2=0;contador2<b;contador2++){
  
    cout<<"ingresa el id de producto"<<endl;
cin>>id2;
		producto2[contador2]=producto2[id2-1];
 
}
cout<<"Tu orden es:"<<endl;

	for (int i=0;i<b;i++){
	      
	    cout<<producto2[i].getID()<<" ";
	
 _total=_total+producto2[i].precio;
	}
		 cuenta.setCuenta(_total);
	 MostrarCuenta(cuenta); 

    
}
		   }
}

// soy io