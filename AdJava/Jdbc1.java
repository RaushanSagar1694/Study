import java.sql.*; 
class Jdbc1{
	public static void main(String args[]) {
		try{
			
			Class.forName("com.mysql.cj.jdbc.Driver"); 
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/school","root","RAUSHANsagar@1694");
			Statement stmt = con.createStatement(); 
			
			int cnt = stmt.executeUpdate("insert into student(roll, name, per) values(145, 'Divanshu',32)"); 
			if (cnt==1){
				System.out.println("Query Executed");
			}
			stmt.close();
			con.close();
		}
		catch(ClassNotFoundException e) {
			e.printStackTrace();
		}
		catch(SQLException e){
			e.printStackTrace();
		}
		System.out.println("Connection Established");
	}
}