#define _CRT_SECURE_NO_WARNINGS 1

class A
{
public:
	void  Func1(void);
	void  Func2(void);
};

class B : public A
{
public:
	void  Func3(void);
	void  Func4(void);
};

main()
{
	B b;
	b.Func1();	// B��A�̳��˺���Func1 
	b.Func2();	// B��A�̳��˺���Func2 
	b.Func3();
	b.Func4();
}


			class Human
			{
				��
			};

			class Man : public Human
			{
				��
			};

			class Boy : public Man
			{
				��
			};



			class Bird
			{
			public:

				virtual void Fly(void);
				��
			};

			class Ostrich : public Bird
			{
				��
			};

			// ��ȷ����ƣ���Ȼ�����߳���  
			class Head
			{
			public:
				void Look(void) { m_eye.Look(); }
				void Smell(void) { m_nose.Smell(); }
				void Eat(void){ m_mouth.Eat(); }
				void Listen(void) { m_ear.Listen(); }
			private:
				Eye m_eye;
				Nose m_nose;
				Mouth m_mouth;
				Ear	m_ear;
			};
			class Eye
			{
			public:
				void  Look(void);
			};
			class Nose
			{
			public:
				void  Smell(void);
			};
			class Mouth
			{
			public:
				void  Eat(void);
			};
			class Ear
			{
			public:
				void  Listen(void);
			};
			// ������ȷ���Ҵ����࣬������Ʒ������ԡ� 
			class Head : public Eye, public Nose, public Mouth, public Ear
			{
			};
			}
			}