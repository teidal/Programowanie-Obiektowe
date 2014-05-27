
public class Tree extends Plant
{
	private Leaves leaves_type;
	private boolean give_fruits;
	private static int count = 0;
	
	public Leaves get_leaves_type()
	{
		return leaves_type;
	}
	public void set_leaves_type(Leaves leaves_type)
	{
		this.leaves_type = leaves_type;
	}
	
	public boolean get_give_fruits()
	{
		return give_fruits;
	}
	public void set_give_fruits(boolean give_fruits)
	{
		this.give_fruits = give_fruits;
	}
	
	public static int get_count()
	{
		return count;
	}
	
	public Tree()
	{
		latin_name = "Quercus petraea";
		lifespan = 800;
		leaves_type = Leaves.DECIDUOUS;
		give_fruits = false;
		count++;
	}
	protected void finalize()
	{
		count--;
	}
}
