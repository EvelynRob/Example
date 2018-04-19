//PROYECTO FINAL
//EVELYN COBEÑA - ALEXANDRA TANA
//19-02-2018

//BIBLIOTECAS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <windows.h>
//Declaro variables de tipo globales
void gotoxy(int x, int y) // funcion independiente 
{ 
    HANDLE hCon;    //puntero inteligente
    COORD dwPos;    //coordenadas
 
    dwPos.X = x; //permite enviar consola intrucciones de posicion dependiendo donde se ubiquen el x - y 
    dwPos.Y = y; 
    hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleCursorPosition(hCon,dwPos); 
}

int a=0,b=0,bi=0,ai,co=0,aa=1,xt,yt;

//Menu del programa 

void fmenu()
{
system("cls");
gotoxy(20,1);
printf("BIENVENIDOS AL SISTEMA DE VENTAS EVALE!");
gotoxy(20,3);
printf("1- Facturar");
gotoxy(20,5);
printf("2- Visualizacion de la factura mediante el Numero ");
gotoxy(20,7);
printf("3- Visualizacion de todas las facturas ingresadas");
gotoxy(20,9);
printf("4- Borrar datos de una factura");
gotoxy(20,11);
printf("5- Agregar articulos a una factura vacia o Sobreescribirla");
gotoxy(20,13);
printf("6- Salir");
gotoxy(25,16);printf("Opci%cn[ ]",162);
}
//programacion estructurada //prog..orient objeto
class factura
{
//atributos	
    private:  //var. caracterizar al programa.
    int i;
    char nombreCliente[20];
    int cantidad [20] ;
    char nombreArticulo[20][20];
    float precio[20];
    float total [20];
    float iva;
    float acumulador;
    float totalaPagar;

// acciones que van a tener la clase de factura
     public: // sobrecarga de funciones-  puede añadir otras clases 
     void facturar();
     void mostrar();
     void mostrartodo();
     void borrar();
     void modificar();
   };
//FUNCIONES
void factura :: mostrartodo()
{
int j,f,x,y;
f=0;
j=0;
x=14;
y=12;
    gotoxy(34,3);
    printf("Supermarket HOLI-WOLI");
    gotoxy(17,6);
    printf("Factura N#: %i",aa);
    gotoxy(17,7);
    fflush(stdin);
    printf("Nombre cliente: %s",nombreCliente);
    gotoxy(12,10);
    printf("Cantidad");
    gotoxy(27,10);
    printf("Articulo ");
    gotoxy(42,10);
    printf("Precio ");
    gotoxy(57,10);
    printf("Total");
    do
    {
        gotoxy(x,y);
        printf("%i",cantidad[j]);
        gotoxy(x+15,y);
        printf("%s",nombreArticulo[j]);
        gotoxy(x+30,y);
        printf("%.2f",precio[j]);
        gotoxy(x+45,y);
        total[j]=cantidad[j]*precio[j];
        printf("%.2f",total[j]);
        y+=2;
        j+=1;
    }while(j<i);
    gotoxy(45,y+4);
    printf("Subtotal: %.2f \n",acumulador);
    gotoxy(45,y+5);
    printf("Iva del 12Porciento: %.2f \n",iva);
    gotoxy(45,y+6);
    printf("Total a pagar: %.2f \n",totalaPagar);
    getch();
}

void factura :: borrar ()
{
strcpy(nombreCliente,"");
for(int d=0;d<=i;d++)
{
strcpy(nombreArticulo[d],"");
cantidad[d]=0;
precio[d]=0;
total[d]=0;
}
iva=0;
acumulador=0;
totalaPagar=0;
}

void factura :: modificar()
{
int cont=1,grfactura,opcfactura,cantnom,op,z,x=14,y=12,f=0,cantcompra=0;
x=14,i=0,y=12,f=0,cantcompra=0,acumulador=0,iva=0,totalaPagar=0;
int j=0;

    fflush(stdin);
    printf("Nombre cliente: ");
    scanf("%[^\n]s",nombreCliente);
    gotoxy(12,10);
    printf("Cantidad ");
    gotoxy(27,10);
    printf("Articulo ");
    gotoxy(42,10);
    printf("Precio ");
    gotoxy(57,10);
    printf("Total ");
    do{
        gotoxy(68,7);
        printf("            ");
        fflush(stdin);
        gotoxy(x,y);
        scanf("%i",&cantidad[i]);
         fflush(stdin);
          gotoxy(x+15,y);
        scanf("%[^\n]s",&nombreArticulo[i]);
         fflush(stdin);
          gotoxy(x+30,y);
        scanf("%f",&precio[i]);
         fflush(stdin);
          gotoxy(x+45,y);
          total[i]=cantidad[i]*precio[i];
          printf("%.2f",total[i]);
        acumulador+=total[i];
          gotoxy(50,7);
        fflush(stdin);
       printf("Agregar mas?(1/0): ");
        scanf("%d",&cont);
        f++;
    cantcompra++;
        y+=2;
        i+=1;
    }while(cont>=1);
    iva=acumulador*0.12;
    totalaPagar=acumulador+iva;
    gotoxy(45,y+4);
    printf("Subtotal: %.2f \n",acumulador);
    gotoxy(45,y+5);
    printf("Iva del 12Porciento: %.2f \n",iva);
    gotoxy(45,y+6);
    printf("Total a pagar: %.2f \n",totalaPagar);
    gotoxy(35,y+9);
    printf("Factura Guardada...");
    gotoxy(35,y+10);
    printf("Gracias por su compra!..");
    getch();

}

void factura::facturar()
{
int cont=1,grfactura,opcfactura,cantnom,op,z,x=14,y=12,f=0,cantcompra=0;
i=0, x=14,i=0,y=12,f=0,cantcompra=0,acumulador=0,iva=0,totalaPagar=0;
int j=0;


    system("cls");
    gotoxy(34,3);
    printf("Supermarket HOLI-WOLI");
    gotoxy(17,6);
    printf("Factura N#: %i",a);
    gotoxy(17,7);
    fflush(stdin);
    printf("Nombre cliente: ");
    scanf("%[^\n]s",nombreCliente);
    gotoxy(12,10);
    printf("Cantidad ");
    gotoxy(27,10);
    printf("Articulo ");
    gotoxy(42,10);
    printf("Precio ");
    gotoxy(57,10);
    printf("Total ");
    do{
        gotoxy(68,7);
        printf("            ");
        fflush(stdin);
        gotoxy(x,y);
        scanf("%i",&cantidad[i]);
        fflush(stdin);
          gotoxy(x+15,y);
        scanf("%[^\n]s",&nombreArticulo[i]);
         fflush(stdin);
          gotoxy(x+30,y);
        scanf("%f",&precio[i]);
         fflush(stdin);
          gotoxy(x+45,y);
          total[i]=cantidad[i]*precio[i];
          printf("%.2f",total[i]);
        acumulador+=total[i];
          gotoxy(50,7);
        fflush(stdin);
       printf("Agregar mas?(1/0): ");
        scanf("%d",&cont);
        f++;
    cantcompra++;
        y+=2;
        i+=1;
    }while(cont>=1);
    iva=acumulador*0.12;
    totalaPagar=acumulador+iva;
    gotoxy(45,y+4);
    printf("Subtotal: %.2f \n",acumulador);
    gotoxy(45,y+5);
    printf("Iva del 12Porciento: %.2f \n",iva);
    gotoxy(45,y+6);
    printf("Total a pagar: %.2f \n",totalaPagar);
    gotoxy(35,y+9);
    printf("Factura Guardada...");
    gotoxy(35,y+10);
    printf("Gracias por su compra!..");
    getch();


}

void factura :: mostrar(){
int j,f,x,y;
f=0;
j=0;
x=14;
y=12;
    gotoxy(34,3);
    printf("Supermarket HOLI-WOLI");
    gotoxy(17,6);
    printf("Factura N#: %i",ai);
    gotoxy(17,7);
    fflush(stdin);
    printf("Nombre cliente: %s",nombreCliente);
    gotoxy(12,10);
    printf("Cantidad");
    gotoxy(27,10);
    printf("Articulo ");
    gotoxy(42,10);
    printf("Precio ");
    gotoxy(57,10);
    printf("Total");
    do
    {
        gotoxy(x,y);
        printf("%i",cantidad[j]);
        gotoxy(x+15,y);
        printf("%s",nombreArticulo[j]);
        gotoxy(x+30,y);
        printf("%.2f",precio[j]);
        gotoxy(x+45,y);
        total[j]=cantidad[j]*precio[j];
        printf("%.2f",total[j]);
        y+=2;
        j+=1;
    }while(j<i);
    gotoxy(45,y+4);
    printf("Subtotal: %.2f \n",acumulador);
    gotoxy(45,y+5);
    printf("Iva del 12Porciento: %.2f \n",iva);
    gotoxy(45,y+6);
    printf("Total a pagar: %.2f \n",totalaPagar);
    getch();

			}
main(){
system("color b0");  //elige el color 
int op,r,bo=0,bi,bu=1;

   float acumulador=0,iva;
   char nombreCliente[20];        
   float cantidad;
   char nombreArticulo[20];
   float precio;
   float total;
   float totalaPagar;
factura fac[20];
 do
 {
 system("cls");
 fmenu();   //funcion menu se llama
 gotoxy(32,16);op=getche();system("color b0"); //permite elegir la opcion que quiera...
 getch();
 switch(op)
     {
// casos
     case '1':system("cls");
     a=a+1;
     fac[a].facturar();
     b=b+1;
     break;

    case '2':system("cls");
    gotoxy(1,1);
    if(a>=1)
    {
    printf("Ingrese el Numero Factura a Visualizar:");scanf("%i",&ai);
 
    bo=1;
    bi=0;
    if(ai>0)
    {
    do
    {
    if(bo==ai)
    {
    fac[ai].mostrar(); // tipo de variable cap..funcion
    bi++;
    break;
    }
    bo=bo+1;
    }while(bo<=a);
    }
    if(bi==0)
    {
    gotoxy(1,2);
    printf("Error Numero de factura no Ingresado al sistema");getch();
    }
    }
    else
    {
    gotoxy(1,2);
    printf("Error No hay facturas Ingresadas");getch();
    }
    break;

    case '3':
    bu=1,aa=1;
    system("cls");
    if(a>=1)
    {
    do
    {
    system("cls");
    fac[bu].mostrartodo();
    bu++;
    aa++;
    }while(bu<=a);
    co=0;
    }
    if(a==0)
    {
    gotoxy(1,2);
    printf("Error No hay facturas Ingresadas");getch();
    }
    break;

    case '4':system("cls");
    gotoxy(1,1);
    if(a>=1)
    {
    printf("Ingrese el Numero Factura a borrar:");scanf("%i",&ai);

    bo=1;
    bi=0;
    if(ai>0)
    {
    do
    {
    if(bo==ai)
    {
    fac[ai].mostrar();

    bi++;
    printf("Seguro que desea eliminar esta factura?(1/0):");scanf("%i",&r);
    if(r>=1)
    {
    fac[ai].borrar();
    printf("Su factura ha sido Eliminada!");getch();
    break;
     }
     else
     {
     printf("Su factura no ha sido Eliminada!");getch();
     break;
     }
    break;
    }
    bo=bo+1;
    }while(bo<=a);
    }
    if(bi==0)
    {
    gotoxy(1,2);
    printf("Error Numero de factura no Ingresado al sistema");getch();
    }
    }
    else
    {
    gotoxy(1,2);
    printf("Error No hay facturas Ingresadas");getch();
    }

     break;

     case '5':
    if(a>=1)
    {
     system("Cls");
     gotoxy(1,2);
    printf("Ingrese el Numero Factura a modificar:");scanf("%i",&ai);
    if((ai>=1)&&(ai<=a))
    {
    fac[ai].modificar();
    }
    else
    {
     gotoxy(1,2);
    printf("Error Numero de factura no Ingresado al sistema");getch();
    }
    }
    else
    {
    system("Cls");
    gotoxy(1,2);
    printf("Error No hay facturas Ingresadas");getch();
    }

    break;

    case '6':
    break;
     default:
     gotoxy(25,17);printf("OPCION INCORRECTA.......");
     getch();
     }
     }while(op!='6');
     }



