import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Random;

public class Deck {
	private List<Card> deck = new ArrayList<Card>();
	
	public Deck()
	{
		for (int i = 0; i < 20; i++)
		{
			if(i < 4)
			{
				Card c = new Card("Farmer", 1, 1); 
				deck.add(c);
			}
			if(i > 3 && i < 8)
			{
				Card c = new Card("Soldier", 2, 2);
				deck.add(c);
			}
			if(i > 7 && i < 12)
			{
				Card c = new Card("Warrior", 3, 2);
				deck.add(c);
			}
			if(i > 11 && i < 16)
			{
				Card c = new Card("Protector", 3, 2);
				deck.add(c);
			}
			if(i > 15 && i < 19)
			{
				Card c = new Card("General", 3, 3);
				deck.add(c);
			}
			if (i == 19)
			{
				Card c = new Card("King", 4, 4);
				deck.add(c);
			}
		}
		shuffle_deck();
	}
	
	public void display_deck()
	{
		System.out.println("Twoja talia:");
		for(int i = 0; i < deck.size(); i++)
		{
			deck.get(i).display_card();
		}
	}
	public Card remove_top_deck()
	{
		Card holder = deck.remove(deck.size()-1);
		return holder;
	}
	public void add_top_deck(Card card)
	{
		deck.add(card);
	}
	public int get_size()
	{
		return deck.size();
	}
	public void add_decks(Deck deck1, Deck deck2)
	{
		for(int i = 0; i < deck2.deck.size(); i++)
			deck1.deck.add(deck2.deck.get(i));
	}
	public Deck divide_deck(int from)
	{
		Deck divided = new Deck();
		for(int i = 0; i < deck.size(); i++)
			divided.deck.set(i, deck.get(from + i));
		for(int i = from; i < deck.size(); i++)
			deck.remove(i);
		return divided;
	}
	public void Shift_deck(int to_where)
	{
		Deck temp = new Deck();
		temp.deck.clear();
		for(int i = 0; i < to_where; i++)
			temp.deck.add(deck.get(i));
		for(int i = 0; i < to_where; i++)
			deck.remove(i);
		for(int i = 0; i < to_where; i++)
			deck.add(temp.deck.get(i));
	}
	public Card remove_target(int position)
	{
		Card holder = new Card();
		holder = deck.get(position - 1);
		deck.remove(position);
		return holder;
	}
	public void shuffle_deck()
	{
		long seed = System.nanoTime();
		Collections.shuffle(deck, new Random(seed));
	}
}
