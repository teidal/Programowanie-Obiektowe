import java.io.IOException;

public class Gra_karciana {
	

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Player player1 = new Player();
		Player player2 = new Player();
		
		Card active1 = new Card();
		Card active2 = new Card();
		
		player1.set_points(0);
		player2.set_points(0);
		
		while(player1.get_points() != 5 && player2.get_points() != 5)
		{
			System.out.print("Player 1 ");
			active1 = player1.choose_card();
			player1.add_to_hand();
			System.out.print("Player 2 ");
			active2 = player2.choose_card();
			player2.add_to_hand();
			
			System.out.print("Player 1 card: ");
			active1.display_card();
			System.out.print("Player 2 card: ");
			active2.display_card();
			System.out.println("\n\n\n\n");
			
			if(active1.get_power() >= active2.get_health())
			{
				player1.increase_points();
				System.out.println("Player 1 kills Player 2! \n");
			}
			if(active2.get_power() >= active1.get_health())
			{
				player2.increase_points();
				System.out.println("Player 2 kills Player 1! \n");
			}
			
			System.out.println("Player 1 points: " +player1.get_points());
			System.out.println("Player 2 points: " +player2.get_points());
			try { System.in.read(); } catch (IOException ex) { }
			System.out.println("\n\n\n\n\n\n\n\n\n\n\n");
		}
		
		if(player1.get_points() == 5) System.out.println("Player 1 wins!");
		else System.out.println("Player 2 wins!");
		
		try { System.in.read(); } catch (IOException ex) { } 

	}
	
}
