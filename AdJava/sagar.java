import java.sql.*; //Step 1
//import java.util.Scanner;
class sagar{
	public static void main(String args[]) {
		try{
			//Driver 4 used
			Class.forName("com.mysql.cj.jdbc.Driver"); //Step 2
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/school","root","RAUSHANsagar@1694"); //Step 3   - connection string, userId, pswd
			Statement stmt = con.createStatement(); // create setup to execute queries
			
			int cnt = stmt.executeUpdate("insert into student(roll, name, per) values(145, 'Divanshu',32)"); //Step 5  -to execute query
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