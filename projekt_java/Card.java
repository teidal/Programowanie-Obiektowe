
public class Card extends Name
{
	protected int power, health;
	
	public void set_power(int power)
	{
		this.power = power;
	}
	public int get_power()
	{
		return power;
	}
	
	public void set_health(int health)
	{
		this.health = health;
	}
	public int get_health()
	{
		return health;
	}
	
	Card()
	{
		
	}
	Card(String name, int power, int health)
	{
		super(name);
		this.power = power;
		this.health = health;
	}
	
	void display_card()
	{
		System.out.println(get_name() +"  " +get_power() +"/" +get_health() +"\n");
	}
}
