class Single
{
public:
	static Single& getInstance()
	{
		static Single single;
		return single;
	}
private:
	Single();
	Single(const Single&);

	int data;

};