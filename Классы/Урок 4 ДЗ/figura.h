#pragma once
namespace Programm
{
		struct cordinat
		{
			int x;
			int y;

		};

		class figura
		{
		private:
			cordinat* cor;
			int n;
			public:
			figura();

			~figura();
		};
		class kvadrat: public figura
		{
		public:
			kvadrat();
			~kvadrat();

		private:

		};

		kvadrat::kvadrat()
		{
		}

		kvadrat::~kvadrat()
		{
		}

}