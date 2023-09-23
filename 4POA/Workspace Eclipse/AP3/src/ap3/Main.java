package ap3;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
				
		try {
			Estudante e1 = new Estudante("Pedro", 25, 1234);
			FileOutputStream arqSer = new FileOutputStream("C:\\Users\\pedro.machado\\Desktop\\Repositorio GitHub\\Workspace Eclipse\\AP3\\files\\a.ser");
			ObjectOutputStream oSer = new ObjectOutputStream(arqSer);
			
			oSer.writeObject(e1);
			oSer.close();
			arqSer.close();
			
			e1.setNome("João");
			
			System.out.println(e1);
			System.out.println("----------------");
			
			FileInputStream arqDes = new FileInputStream("C:\\Users\\pedro.machado\\Desktop\\Repositorio GitHub\\Workspace Eclipse\\AP3\\files\\a.ser");
			ObjectInputStream oDes = new ObjectInputStream(arqDes);
			
			e1 = (Estudante) oDes.readObject();
			
			System.out.println(e1);
			
			oDes.close();
			arqDes.close();
		
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} 

	}

}
