
public class Plant {

	protected String latin_name;
	protected int lifespan;
	private static int count = 0;
	
	public String get_latin_name()
	{
		return latin_name;
	}
	public void set_latin_name(String latin_name)
	{
		this.latin_name = latin_name;
	}
	
	public int get_lifespan()
	{
		return lifespan;
	}
	public void set_lifespan(int lifespan)
	{
		this.lifespan = lifespan;
	}
	
	public static int get_count()
	{
		return count;
	}
	
	public Plant()
	{
		latin_name = "Rosa majalis";
		lifespan = 5;
		count++;
	}
	public Plant(Plant plant)
	{
		latin_name = plant.latin_name;
		lifespan = plant.lifespan;
		count++;
	}
	protected void finalize()
	{
		count--;
	}
}
