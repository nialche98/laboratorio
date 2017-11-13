#include <iostream>
#include "proyecto.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

/* Class cliente:: metodos*/

cliente::cliente(){}
//___________________________________________
cliente::~cliente(){}
//___________________________________________
string cliente::getnombre(){
	return nombre;
}
//___________________________________________
string cliente::getapellido(){
	return apellido;
}
//___________________________________________
string cliente::getfechan(){
	return fechaN ;
}
//___________________________________________
string cliente::getsexo(){
	return sexo ;
}
//___________________________________________
string cliente::getcivil(){
	return Ecivil;
}
//___________________________________________
int cliente::getcedula(){
	return cedula ;
}
//___________________________________________
string cliente::getdireccion(){
	return direccion;
}
//___________________________________________
int cliente::gettelefono(){
	return telefono ;
}
//___________________________________________
int cliente::getcelular(){
	return celular;
}
//___________________________________________
string cliente::getcorreo(){
	return correo ;
}
//___________________________________________
void cliente::setnombre(string nombre_){
	 nombre=nombre_;
}
//___________________________________________
void cliente::setapellido(string apellido_){
	 apellido= apellido_;
}
//___________________________________________
void cliente::setfecha(string fecha_){
	fechaN=fecha_ ;
}
//___________________________________________
void cliente::setsexo(string sexo_){
	sexo=sexo_;
}
//___________________________________________
void cliente::setcivil(string civil_){
	Ecivil=civil_;
}
//___________________________________________
void cliente::setcedula(int cedula_){
	cedula=cedula_;
}
//___________________________________________
void cliente::setdireccion(string direccion_){
	direccion= direccion_;
}
//___________________________________________
void cliente::settelefono(int telefono_){
	telefono= telefono_;
}
//___________________________________________
void cliente::setcelular(int celular_){
	 celular= celular_;
}
//___________________________________________
void cliente::setcorreo(string correo_){
	 correo= correo_;
}


/*Class Usuario::metodos*/

Usuario::Usuario(){}
//___________________________________________
Usuario::~Usuario(){}
//___________________________________________

string Usuario::getUnombre(){
	return  n_usuario;
}
//___________________________________________
string Usuario::getcontrasena(){
    return  contrasena;
}
//___________________________________________
string Usuario::getpsecreta(){
	return  p_secreta;
}
//___________________________________________
void Usuario::setUnombre(string n_usuario_){
	n_usuario=n_usuario_;
}
void Usuario::setcontrasena(string contrasena_){
    contrasena=contrasena_;
}

void Usuario::setpsecreta(string p_secreta_){
    p_secreta=p_secreta_;
}


/* Class Empleado::metodos*/


Empleado::Empleado(){}
//___________________________________________
Empleado::~Empleado(){}
//___________________________________________
int Empleado::getcodigo(){
	return codigo;
}
//___________________________________________
string Empleado::getnombre(){
	return nombreE;
}
//___________________________________________
void Empleado::setcodigo(int codigo_){
	codigo=codigo_;
}
//___________________________________________
void Empleado::setnombreE(string nombreE_){
	nombreE= nombreE_;
}
//___________________________________________
void Empleado::contactarcliente(){
    cout<<"el empleado llama al cliente a verificar los datos mal dados"<<endl;
}
//___________________________________________
void Empleado::revisarProyectos(){
}
//___________________________________________
void Empleado::cotizar(){
}

/* Class Producto::metodos*/



int Producto::getcosto(){
	return costo;
}
//___________________________________________
Producto::Producto(){}
//___________________________________________
Producto::~Producto(){}
//___________________________________________
long int Producto::getcodigop(){
	return codigop;
}
//___________________________________________
string Producto::getdescricion(){
	return descripcion;
}
//___________________________________________
int Producto::getalto(){
	return alto ;
}
//___________________________________________
int Producto::getlargo(){
	return largo;
}
//___________________________________________
int Producto::getancho(){
	return ancho ;
}
//___________________________________________
string Producto::getcolor(){
	return color;
}
//___________________________________________
int Producto::getprecio(){
	return precio ;
}
//___________________________________________
int Producto::getcantidad(){
	return cantidad;
}
//___________________________________________
void Producto::setcodigop(int codigop_){
	codigop= codigop_;
}
//___________________________________________
void Producto::setdescripcion(string descripcion_ ){
	descripcion=descripcion_;
}
//___________________________________________
void Producto::setalto(int alto_ ){
	alto= alto_;
}
//___________________________________________
void Producto::setlargo(int largo_ ){
	largo= largo_;
}
//___________________________________________
void Producto::setancho(int ancho_  ){
	ancho=ancho_;
}
//___________________________________________
void Producto::setcolot(string color_ ){
	color=color_;
}
//___________________________________________
void Producto::setprecio(int precio_ ){
	precio= precio_;
}
//___________________________________________
void Producto::setcosto(int costo_  ){
	costo= costo_;
}
//___________________________________________
void Producto::setcantidad(int  cantidad_){
	cantidad=cantidad_;
}

/*Class Informes::metodos*/


Informes::Informes(){}
//___________________________________________
Informes::~Informes(){}
//___________________________________________
void Informes::infome_de_ventas(){

}
//___________________________________________
void Informes::infome_de_ganancias(){
	
}
//___________________________________________
void Informes::infome_de_inventario(){
	
}

/*Class Carrito::metodos*/

Carrito::Carrito(){}
//___________________________________________
Carrito::~Carrito(){}
//___________________________________________
void Carrito::borrarproducto(){

}
//___________________________________________
void Carrito::ingresardatostarjeta(){

}
//___________________________________________
void Carrito::agregarproducto(){

}
//___________________________________________
void Carrito::pagar(){

}

/*Class Factura::metodos*/

Factura::Factura(){}
//___________________________________________
Factura::~Factura(){}
//___________________________________________
string Factura::getEmpresa(){
	return nombreEmpresa;
}
//___________________________________________
int Factura::getnit(){
	return nit;
}
//___________________________________________
int Factura::getnumeroFac(){
	return numeroFac;
}
//___________________________________________
int Factura::getTelefono(){
	return telefono;
}
//___________________________________________
void Factura::setEmpresa(string empresa_){
	nombreEmpresa=empresa_;
}
//___________________________________________
void Factura::setnit(int nit_){
	nit=nit_;
}
//___________________________________________
void Factura::setnumeroFac(int numeroFac_){
	numeroFac=numeroFac_;
}
//___________________________________________
void Factura::settelefono(int telefono_){
	telefono=telefono_;
}
//___________________________________________
void Factura::imprimirfac(){

}

/*Class Innovacion::metodos*/


Innovacion::Innovacion(){}
//___________________________________________
Innovacion::~Innovacion(){}
//___________________________________________
string Innovacion::getIdea(){
	return ideaInnovadora;
}
//___________________________________________
int Innovacion::getcodigoI(){
	return codigoI;
}
//___________________________________________
void Innovacion::setIdea(string idea_){
	ideaInnovadora=idea_;
}
//___________________________________________
void Innovacion::setcodigoI(int codigoI_){
	codigoI=codigoI_;
}

