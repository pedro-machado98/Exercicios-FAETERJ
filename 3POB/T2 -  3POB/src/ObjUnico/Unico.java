package ObjUnico;

public class Unico {

	//aqui testei com public e private e não vi diferença, em minhas pesquisas vi que sistemas
	//mais complexos normalmente utiliza public para se precisar ser feito casting depois
	//talvez isso diminua o encapsulamento do codigo, nao tenho certeza.
    public static Unico instancia = new Unico();

    public static Unico pegaInstancia() {
        return instancia;
    }


}
