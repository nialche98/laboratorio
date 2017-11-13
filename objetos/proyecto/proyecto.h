#ifndef PROYECTO_H
#define PROYECTO_H
#include <stdlib.h>
#include <iostream>
using namespace std;

class cliente{
	protected:
		string nombre;
		string apellido;
		string fechaN;
		string sexo;
		string Ecivil;
		int cedula;
		string direccion;
		int telefono;
		int celular;
		string correo;

	public:
		cliente();
		~cliente();
		string getnombre();
		string getapellido();
		string getfechan();
		string getsexo();
		string getcivil();
		int getcedula();
		string getdireccion();
		int gettelefono();
		int getcelular();
		string getcorreo();
		void setnombre(string nombre_);
		void set(string apellido_);
		void set(string fecha_);
		void set(string sexo_);
		void set(string civil_);
		void set(int cedula_);
		void set(string direccion_);
		void set(int telefono_);
		void set(int celular_);
		void set(string correo_);
};

class Ususario:public cliente{
	protected:
		string n_usuario;
		string contraseña;
		string p_secreta;
	public:
		Ususario();
		~Ususario();
		string getUnombre();
		string getcontraseña();
		string getpsecreta();
		void setUnombre();
};

class Empleado{
	protected:
		int codigo;
		string nombreE;
	public:
		Empleado();
		~Empleado();
		int getcodigo();
		string getnombre();

		void setcodigo(int codigo_);
		void setnombreE(string nombreE_);

		void contactarcliente();

		void revisarProyectos();

		void cotizar();
};

class Producto{
	protected:
		long int codigop;
		string descripcion
		int alto;
		int largo;
		int ancho;
		string color;
		int costo;
		int precio;
		int cantidad;

		int getcosto();
	public:
		Producto();
		~Producto();
		long int getcodigop();
		string getdescricion();
		int getalto();
		int getlargo();
		int getancho();
		string getcolor();
		int getprecio();
		int getcantidad();

		void setcodigop(int codigop_);
		void setdescripcion(string descripcion_ );
		void setalto(int alto_ );
		void setlargo(int largo_ );
		void setancho(int ancho_  );
		void setcolot(string color_ );
		void setprecio(int precio_ );
		void setcosto(int costo_  );
		void setcantidad(int  cantidad_);
};

class Informes{
	public:
		Informes();
		~Informes();
		void infome_de_ventas();
		void infome_de_ganancias();
		void infome_de_inventario();
};

class Carrito{
	public:
		Carrito();
		~Carrito();
		void borrarproducto();
		void ingresardatostarjeta();
		void agregarproducto();
		void pagar();
};

class Factura{
	protected:
		string nombreEmpresa;
		int nit;
		int numeroFac;
		int telefono;

	public:
		Factura();
		~Factura();
		string getEmpresa();
		int getnit();
		int getnumeroFac();
		int getTelefono();
		void setEmpresa(string empresa_);
		void setnit(int nit_);
		void setnumeroFac(int numeroFac_);
		void settelefono(int telefono_);
		void imprimirfac();

};

class Innovacion{
	protected:
		string ideaInnovadora;
		int codigoI;
	public:
		Innovacion();
		~Innovacion();
		string getIdea();
		int getcodigoI();
		void setIdea(string idea_);
		void setcodigoI(int codigoI_);
};

#endif