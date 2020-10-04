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
	LandSatImage(int dummy)//���dummy��û���κ�����ģ�ֻ��Ϊ�˺Ͳ��������Ĺ��캯��������
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

LandSatImage LandSatImage::landSatImage;//static ��Ա������ֻ��������һ��Ҫ��������ж��壬��ʼ����
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

//���ԭ��ģʽ���е�������⣬��ʵ��ʹ�õ�ԭ��ģʽ��һ������������ԭ��ģʽ�������ڿ��ܳ���δ֪��Ĵ���