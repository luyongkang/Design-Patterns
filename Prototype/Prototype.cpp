enum imageType{LSAT,SPOT};
class Image
{
public:
	static Image* findAndClone(imageType type)
	{
		for (int i = 0; i < _next; ++i) {
			if (type == _prototype[i]->returnType())
				return _prototype[i]->clone();
		}

		return nullptr;
	}
protected:
	static void addPrototype(Image* elem)
	{
		_prototype[_next++] = elem;
	}
	virtual Image* clone() = 0;
	virtual imageType returnType() const = 0;
private:
	static int _next;
	static Image* _prototype[10];
};

int Image::_next = 0;
Image* Image::_prototype[];

class LandSatImage:public Image
{
public:
	

protected:
	LandSatImage(int dummy)//这个dummy是没有任何意义的，只是为了和不含参数的构造函数区别开来
	{
		_id = _count++;
	}
	Image* clone()
	{
		return new LandSatImage(1);
	}
	imageType returnType() const
	{
		return LSAT;
	}
private:
	static LandSatImage landSatImage;
	static int _count;
	int _id;
	LandSatImage()
	{
		addPrototype(this);
	}
};

LandSatImage LandSatImage::landSatImage;//static 成员在类内只有声明，一定要在类外进行定义，初始化。
int LandSatImage::_count = 1;

class SpotImage :public Image
{
public:
	
protected:
	SpotImage(int dummy)
	{
		_id = _count++;
	}
	Image* clone() {
		return new SpotImage(1);
	}
	imageType returnType() const 
	{
		return SPOT;
	}
private:
	static SpotImage spotImage;
	static int _count;
	int _id;

	SpotImage()
	{
		addPrototype(this);
	}
};

SpotImage SpotImage::spotImage;
int SpotImage::_count = 1;

//这个原型模式，有点难以理解，和实际使用的原型模式有一定的区别，这种原型模式可以用于可能出现未知类的创建