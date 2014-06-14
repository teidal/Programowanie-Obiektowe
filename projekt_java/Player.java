import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class Player {
	private List<Card> hand = new ArrayList<Card>();
	private int points;
	private Deck deck = new Deck();
	
	public Player()
	{
		for(int i = 0; i < 5; i++)
			add_to_hand();
	}
	
	void add_to_hand()
	{
		hand.add(deck.remove_top_deck());
	}
	public Card remove_from_hand(int number)
	{
		Card holder = new Card();
		holder = hand.get((number - 1));
		hand.remove(number - 1);
		return holder;
	}
	
	public void set_points(int points)
	{
		this.points = points;
	}
	public int get_points()
	{
		return points;
	}
	public void increase_points()
	{
		points++;
	}
	
	public void display_hand()
	{
		System.out.println("Your hand:");
		for(int i = 0; i < hand.size(); i++)
		{
			hand.get(i).display_card();
		}
	}
	
	public int get_hand_size()
	{
		return hand.size();
	}
	
	
	public Card choose_card()
	{
		int decision;
		Card choosen = new Card();
		Scanner scanner = new Scanner(System.in);
		System.out.println("choose your card:");
		display_hand();
		decision = scanner.nextInt();
		
			switch(decision)
			{
			case 1:
				System.out.println("\n\n\n\n\n\n\n\n");
				choosen = remove_from_hand(1);
				break;
			case 2:
				System.out.println("\n\n\n\n\n\n\n\n");
				choosen = remove_from_hand(2);
				break;
			case 3:
				System.out.println("\n\n\n\n\n\n\n\n");
				choosen = remove_from_hand(3);
				break;
			case 4:
				System.out.println("\n\n\n\n\n\n\n\n");
				choosen = remove_from_hand(4);
				break;
			case 5:
				System.out.println("\n\n\n\n\n\n\n\n");
				choosen = remove_from_hand(5);
				break;
			default:
				System.out.println("Okay, I will choose for you");
				choosen = remove_from_hand(3);
				try { System.in.read(); } catch (IOException ex) { }
				break;
				
			}		
		
	
	return choosen;
	}

}
