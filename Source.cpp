#include <SFML/Graphics.hpp>
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>

using namespace::std;
using namespace::sf;

class draw_grid        //the grid that stores bool data
{
  protected:
	
    static bool grid[12][12];
	bool saved_grid[12][12];
	char check_alpha;
	char stream[50];
	int index;

  public:

	  draw_grid()     //default constructor
	  {
		  index = 0;
	  }
	  
	  void disp()     //grid disp function
	  {
		  for (int i = 0; i < 12; i++)
		  {
			  for (int j = 0; j < 12; j++)
			  {
				  cout << grid[i][j];
			  }

			  cout << endl;
		  }

	  }

	  void grid_update(float x, float y)    //ifconditions to update bool data
	  {

		  if((x>=0&&x<=25)&&(y>=0&&y<=25))
			  grid[0][0]=1;

		  if ((x >25 && x<=50) && (y >= 0 && y <= 25))
			  grid[0][1] = 1;

		  if ((x >50 && x <= 75) && (y >= 0 && y <= 25))
			  grid[0][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 0 && y <= 25))
			  grid[0][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 0 && y <= 25))
			  grid[0][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 0 && y <= 25))
			  grid[0][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 0 && y <= 25))
			  grid[0][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 0 && y <= 25))
			  grid[0][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 0 && y <= 25))
			  grid[0][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 0 && y <= 25))
			  grid[0][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 0 && y <= 25))
			  grid[0][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 0 && y <= 25))  //
			  grid[0][11] = 1;


		  if ((x >= 0 && x <= 25) && (y >= 25 && y <= 50))
			  grid[1][0] = 1;

		  if ((x > 25 && x <= 50) && (y >= 25 && y <= 50))
			  grid[1][1] = 1;

		  if ((x > 50 && x <= 75) && (y >= 25 && y <= 50))
			  grid[1][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 25 && y <= 50))
			  grid[1][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 25 && y <= 50))
			  grid[1][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 25 && y <= 50))
			  grid[1][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 25 && y <= 50))
			  grid[1][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 25 && y <= 50))
			  grid[1][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 25 && y <= 50))
			  grid[1][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 25 && y <= 50))
			  grid[1][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 25 && y <= 50))
			  grid[1][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 25 && y <= 50))  //
			  grid[1][11] = 1;

		  if ((x >= 0 && x <= 25) && (y >= 50 && y <= 75))
			  grid[2][0] = 1;

		  if ((x > 25 && x <= 50) && (y >= 50 && y <= 75))
			  grid[2][1] = 1;

		  if ((x > 50 && x <= 75) && (y >= 50 && y <= 75))
			  grid[2][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 50 && y <= 75))
			  grid[2][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 50 && y <= 75))
			  grid[2][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 50 && y <= 75))
			  grid[2][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 50 && y <= 75))
			  grid[2][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 50 && y <= 75))
			  grid[2][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 50 && y <= 75))
			  grid[2][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 50 && y <= 75))
			  grid[2][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 50 && y <= 75))
			  grid[2][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 50 && y <= 75))  //
			  grid[2][11] = 1;

		  if ((x >= 0 && x <= 25) && (y >= 75 && y <= 100))
			  grid[3][0] = 1;

		  if ((x > 25 && x <= 50) && (y >= 75 && y <= 100))
			  grid[3][1] = 1;

		  if ((x > 50 && x <= 75) && (y >= 75 && y <= 100))
			  grid[3][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 75 && y <= 100))
			  grid[3][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 75 && y <= 100))
			  grid[3][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 75 && y <= 100))
			  grid[3][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 75 && y <= 100))
			  grid[3][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 75 && y <= 100))
			  grid[3][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 75 && y <= 100))
			  grid[3][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 75 && y <= 100))
			  grid[3][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 75 && y <= 100))
			  grid[3][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 75 && y <= 100))  //
			  grid[3][11] = 1;

		  if ((x >= 0 && x <= 25) && (y >= 100 && y <= 125))
			  grid[4][0] = 1;

		  if ((x > 25 && x <= 50) && (y >= 100 && y <= 125))
			  grid[4][1] = 1;

		  if ((x > 50 && x <= 75) && (y >= 100 && y <= 125))
			  grid[4][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 100 && y <= 125))
			  grid[4][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 100 && y <= 125))
			  grid[4][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 100 && y <= 125))
			  grid[4][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 100 && y <= 125))
			  grid[4][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 100 && y <= 125))
			  grid[4][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 100 && y <= 125))
			  grid[4][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 100 && y <= 125))
			  grid[4][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 100 && y <= 125))
			  grid[4][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 100 && y <= 125))  //
			  grid[4][11] = 1;

		  if ((x >= 0 && x <= 25) && (y > 125 && y <= 150))
			  grid[5][0] = 1;

		  if ((x > 25 && x <= 50) && (y > 125 && y <= 150))
			  grid[5][1] = 1;

		  if ((x > 50 && x <= 75) && (y > 125 && y <= 150))
			  grid[5][2] = 1;

		  if ((x > 75 && x <= 100) && (y > 125 && y <= 150))
			  grid[5][3] = 1;

		  if ((x > 100 && x <= 125) && (y > 125 && y <= 150))
			  grid[5][4] = 1;

		  if ((x > 125 && x <= 150) && (y > 125 && y <= 150))
			  grid[5][5] = 1;

		  if ((x > 150 && x <= 175) && (y > 125 && y <= 150))
			  grid[5][6] = 1;

		  if ((x > 175 && x <= 200) && (y > 125 && y <= 150))
			  grid[5][7] = 1;

		  if ((x > 200 && x <= 225) && (y > 125 && y <= 150))
			  grid[5][8] = 1;

		  if ((x > 225 && x <= 250) && (y > 125 && y <= 150))
			  grid[5][9] = 1;

		  if ((x > 250 && x <= 275) && (y > 125 && y <= 150))
			  grid[5][10] = 1;

		  if ((x > 275 && x <= 300) && (y > 125 && y <= 150))  //
			  grid[5][11] = 1;

		  if ((x >= 0 && x <= 25) && (y >= 150 && y <= 175))
			  grid[6][0] = 1;

		  if ((x > 25 && x <= 50) && (y >= 150 && y <= 175))
			  grid[6][1] = 1;

		  if ((x > 50 && x <= 75) && (y >= 150 && y <= 175))
			  grid[6][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 150 && y <= 175))
			  grid[6][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 150 && y <= 175))
			  grid[6][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 150 && y <= 175))
			  grid[6][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 150 && y <= 175))
			  grid[6][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 150 && y <= 175))
			  grid[6][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 150 && y <= 175))
			  grid[6][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 150 && y <= 175))
			  grid[6][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 150 && y <= 175))
			  grid[6][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 150 && y <= 175))  //
			  grid[6][11] = 1;


		  if ((x >= 0 && x <= 25) && (y >= 175 && y <= 200))
			  grid[7][0] = 1;

		  if ((x > 25 && x <= 50) && (y >= 175 && y <= 200))
			  grid[7][1] = 1;

		  if ((x > 50 && x <= 75) && (y >= 175 && y <= 200))
			  grid[7][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 175 && y <= 200))
			  grid[7][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 175 && y <= 200))
			  grid[7][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 175 && y <= 200))
			  grid[7][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 175 && y <= 200))
			  grid[7][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 175 && y <= 200))
			  grid[7][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 175 && y <= 200))
			  grid[7][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 175 && y <= 200))
			  grid[7][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 175 && y <= 200))
			  grid[7][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 175 && y <= 200))  //
			  grid[7][11] = 1;

		  if ((x >= 0 && x <= 25) && (y >= 200 && y <= 225))
			  grid[8][0] = 1;

		  if ((x > 25 && x <= 50) && (y >= 200 && y <= 225))
			  grid[8][1] = 1;

		  if ((x > 50 && x <= 75) && (y >= 200 && y <= 225))
			  grid[8][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 200 && y <= 225))
			  grid[8][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 200 && y <= 225))
			  grid[8][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 200 && y <= 225))
			  grid[8][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 200 && y <= 225))
			  grid[8][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 200 && y <= 225))
			  grid[8][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 200 && y <= 225))
			  grid[8][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 200 && y <= 225))
			  grid[8][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 200 && y <= 225))
			  grid[8][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 200 && y <= 225))  //
			  grid[8][11] = 1;

		  if ((x >= 0 && x <= 25) && (y >= 225 && y <= 250))
			  grid[9][0] = 1;

		  if ((x > 25 && x <= 50) && (y >= 225 && y <= 250))
			  grid[9][1] = 1;

		  if ((x > 50 && x <= 75) && (y >= 225 && y <= 250))
			  grid[9][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 225 && y <= 250))
			  grid[9][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 225 && y <= 250))
			  grid[9][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 225 && y <= 250))
			  grid[9][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 225 && y <= 250))
			  grid[9][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 225 && y <= 250))
			  grid[9][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 225 && y <= 250))
			  grid[9][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 225 && y <= 250))
			  grid[9][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 225 && y <= 250))
			  grid[9][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 225 && y <= 250))  //
			  grid[9][11] = 1;

		  if ((x >= 0 && x <= 25) && (y >= 250 && y <= 275))
			  grid[10][0] = 1;

		  if ((x > 25 && x <= 50) && (y >= 250 && y <= 275))
			  grid[10][1] = 1;

		  if ((x > 50 && x <= 75) && (y >= 250 && y <= 275))
			  grid[10][2] = 1;

		  if ((x > 75 && x <= 100) && (y >= 250 && y <= 275))
			  grid[10][3] = 1;

		  if ((x > 100 && x <= 125) && (y >= 250 && y <= 275))
			  grid[10][4] = 1;

		  if ((x > 125 && x <= 150) && (y >= 250 && y <= 275))
			  grid[10][5] = 1;

		  if ((x > 150 && x <= 175) && (y >= 250 && y <= 275))
			  grid[10][6] = 1;

		  if ((x > 175 && x <= 200) && (y >= 250 && y <= 275))
			  grid[10][7] = 1;

		  if ((x > 200 && x <= 225) && (y >= 250 && y <= 275))
			  grid[10][8] = 1;

		  if ((x > 225 && x <= 250) && (y >= 250 && y <= 275))
			  grid[10][9] = 1;

		  if ((x > 250 && x <= 275) && (y >= 250 && y <= 275))
			  grid[10][10] = 1;

		  if ((x > 275 && x <= 300) && (y >= 250 && y <= 275)) //
			  grid[10][11] = 1;

		  if ((x >= 0 && x <= 25) && (y > 275 && y <= 300))
			  grid[11][0] = 1;

		  if ((x > 25 && x <= 50) && (y > 275 && y <= 300))
			  grid[11][1] = 1;

		  if ((x > 50 && x <= 75) && (y > 275 && y <= 300))
			  grid[11][2] = 1;

		  if ((x > 75 && x <= 100) && (y > 275 && y <= 300))
			  grid[11][3] = 1;

		  if ((x > 100 && x <= 125) && (y > 275 && y <= 300))
			  grid[11][4] = 1;

		  if ((x > 125 && x <= 150) && (y > 275 && y <= 300))
			  grid[11][5] = 1;

		  if ((x > 150 && x <= 175) && (y > 275 && y <= 300))
			  grid[11][6] = 1;

		  if ((x > 175 && x <= 200) && (y > 275 && y <= 300))
			  grid[11][7] = 1;

		  if ((x > 200 && x <= 225) && (y > 275 && y <= 300))
			  grid[11][8] = 1;

		  if ((x > 225 && x <= 250) && (y > 275 && y <= 300))
			  grid[11][9] = 1;

		  if ((x > 250 && x <= 275) && (y > 275 && y <= 300))
			  grid[11][10] = 1;

		  if ((x > 275 && x <= 300) && (y > 275 && y <= 300))  //
			  grid[11][11] = 1;





	  }

	  void add_data(char a)   //fucntion for updating directory if user wants to
	  {
		  char filename[6] = { a,'.','t','x','t','\0' };

		  //cout << filename;
		  ofstream get;
		  get.open(filename, ios::app);
		  get << endl;

		  for (int i = 0; i < 12; i++)
		  {
			  for (int j = 0; j < 12; j++)
			  {
				  get << grid[i][j] << " ";
			  }

			  get << endl;
		  }
	  }
	  
	
	  void write_data()   //fucntion to update directory used by developer
	  {
		  ofstream get;
		  get.open("z.txt", ios::app);
		  get << endl;
		  
		  for (int i = 0; i < 12; i++)
		  {
			  for (int j = 0; j < 12; j++)
			  {
				  get << grid[i][j]<<" ";
			  }

			  get << endl;
		  }


	  }

	  bool fetch_data(string address)     //fucntion to access stored data in directory
	  {
		  static int num = 0;
		  char confirm;
		  
		  
		  ifstream fetch;
		  fetch.open(address, ios::app);
		  fetch >> check_alpha;
		  
		  while (!(fetch.eof()))
		  {
			  
			  //fetch.seekg(num, ios_base::cur);

			  
			  
			  for (int i = 0; i < 12; i++)
			  {


				  for (int j = 0; j < 12; j++)
					  fetch >> saved_grid[i][j];

				  //cout << fetch.tellg() << endl;

			  }

			  /*for (int i = 0; i < 12; i++)
			  {
				  for (int j = 0; j < 12; j++)

				  {
					  cout << saved_grid[i][j];


				  }

				  cout << endl;
			  }*/

			  //num = num + 80;

			  if (compare())
			  {
				  
				  do
				  {
					  cout << "Did you enter " << check_alpha << " ? (y/n): "<<endl;
					  confirm=_getch();

				  } while (confirm != 'n'&&confirm != 'y');

				  if (confirm == 'y')
				  {
					  stream[index] = check_alpha;
					  index++;
					  return 1;
				  }

				  if (confirm == 'n')
					  return 0;
				  
			  }
			   
			  
				 
			 
		  }
		  
		  return 0;
	  }

	  bool compare()   //fucntion to compare user input and directory data
	  {
		  int diff = 0;
		  int diff_lt;

			  if (check_alpha == 'b' || check_alpha == 'o' || check_alpha == 'h' || check_alpha == 'd' || check_alpha=='u')
				  diff_lt = 3;

			  else
				  diff_lt = 6;


		  for (int i = 0; i < 12; i++)
		  {
			  for (int j = 0; j < 12; j++)
			  {
				  if (grid[i][j] != saved_grid[i][j])
					  diff++;
			  }
		  }

		  if (diff >= diff_lt)
			  return false;

		  else
	      return true;
		  
	  }

};


bool draw_grid::grid[12][12] = { 0 };


class draw_pad : protected draw_grid    //class used for sfml window and grid on which user draws
{
	bool hold;
	float x, y;
	char update_d;

	public:

		draw_pad()  //default constructor
		{
			
			hold = true;
			x = 0; 
			y = 0;
			
		}

		void draw()          //fucntion to allow user to draw
		{
			
			CircleShape shape(6.f);
			shape.setOutlineThickness(1);
			shape.setFillColor(sf::Color(250, 250, 250));  //set the shape color to white
			hold = true;

			for (int i = 0; i < 12; i++)
			{
				for (int j = 0; j < 12; j++)
				{
					grid[i][j] = 0;
				}
			}
			
			


			Event event;  //mouse input using sfml

				RenderWindow Window(VideoMode(300, 300), "Grid");
				Window.setFramerateLimit(30);
				grid_display(Window);
				Window.display();
				
				while (hold)
				{

					while (Window.pollEvent(event))
					{

						grid_display(Window);

						if (Mouse::isButtonPressed(Mouse::Left))
						{

							if (event.type == Event::MouseMoved)
							{
								x = (float)Mouse::getPosition((Window)).x;
								y = (float)Mouse::getPosition(Window).y;

								//cout << x << " " << y << endl; //used for testing

								shape.setPosition(x, y);
								Window.draw(shape);
								Window.display();

								grid_update(x, y); //bool data updated after getting mouse coords
								//disp(); //used for testing


							}

						}

						if (Mouse::isButtonPressed(Mouse::Right)) //exit mechanism
						{
							hold = false;
						}

						


					}

				}

				//write_data(); used for developing

				while (true)
				{
				    if (fetch_data("c.txt"))
					    break;
					if (fetch_data("a.txt"))
						break;
					if (fetch_data("b.txt"))
						break;
					if (fetch_data("d.txt"))
						break;
					if (fetch_data("e.txt"))
						break;
					if (fetch_data("f.txt"))
						break;
					if (fetch_data("g.txt"))
						break;
					if (fetch_data("h.txt"))
						break;
					if (fetch_data("i.txt"))
						break;
					if (fetch_data("j.txt"))
						break;
					if (fetch_data("k.txt"))
						break; 
					if (fetch_data("l.txt"))
						break; 
					if (fetch_data("m.txt"))
						break;
					if (fetch_data("n.txt"))
						break;
					if (fetch_data("o.txt"))
						break;
					if (fetch_data("p.txt"))
						break;
					if (fetch_data("q.txt"))
						break;
					if (fetch_data("r.txt"))
						break;
					if (fetch_data("s.txt"))
						break;
					if (fetch_data("t.txt"))
						break;
					if (fetch_data("u.txt"))
						break;
					if (fetch_data("v.txt"))
						break;
					if (fetch_data("w.txt"))
						break;
					if (fetch_data("x.txt"))
						break;
					if (fetch_data("y.txt"))
						break;
					if (fetch_data("0.txt"))
						break;
					if (fetch_data("1.txt"))
						break;
					if (fetch_data("2.txt"))
						break;
					if (fetch_data("3.txt"))
						break;
					if (fetch_data("4.txt"))
						break;
					if (fetch_data("5.txt"))
						break;
					if (fetch_data("6.txt"))
						break;
					if (fetch_data("7.txt"))
						break;
					if (fetch_data("8.txt"))
						break;
					if (fetch_data("9.txt"))
						break;
					
					else
					{
						cout <<endl<< "The char you drew is not in directory. ";
						
						do
						{
							update_d = 'r';
							cout << "Do you want to update directory ? (y/n). " << endl;
							cin >> update_d;

						} while (update_d != 'y'&&update_d != 'n');

						if (update_d == 'y')
						{
							char char_a;
							cout << "Enter the char you want to update. " << endl;
							cin >> char_a;
							add_data(char_a);
							continue;

						}
						
						break;
						
					}
				
				}


			    


				
				
				
				Window.display();
				
			
			
		}


		void grid_display(RenderWindow &Win)  //fucn to display grid using sfml
		{
			RectangleShape line;
			RectangleShape inner_line;
			RectangleShape point;
			line.setSize(Vector2f(300, 3));
			line.setPosition(Vector2f(0, 0));
			point.setSize(Vector2f(22, 22));
			point.setFillColor(Color::Transparent);
			point.setOutlineColor(Color(0, 250, 250));
			point.setOutlineThickness(1);
			Win.draw(line);
			line.rotate(90);
			Win.draw(line);
			line.setPosition(Vector2f(300, 0));
			Win.draw(line);
			line.setPosition(Vector2f(0, 300));
			line.rotate(270);
			Win.draw(line);
			inner_line.setSize(Vector2f(300, 1));

			for (float i = 0,z = 0; i < 12; i++)
			{
				inner_line.setFillColor(Color(250, 250, 250)); 

				if (i == 2 || i == 5 || i == 6 || i == 9)
				{
					point.setPosition(Vector2f(z+1, 150));
					Win.draw(point);
				}

				if (i == 2 || i == 5 || i == 6 || i == 9)
				{
					point.setPosition(Vector2f(z + 1, 250));
					Win.draw(point);
				}

				inner_line.setPosition(Vector2f(0, z));
				Win.draw(inner_line);
				z = z + 25;
			}

			inner_line.rotate(90);

			for (float i = 0,z = 0; i < 12; i++)
			{
				inner_line.setFillColor(Color(250, 250, 250));
				
				
				if (i == 2 || i==5|| i == 6 || i == 9)
				{
					point.setPosition(Vector2f(z+1, 3));
					Win.draw(point);

				}

				
				inner_line.setPosition(Vector2f(z, 0));
				Win.draw(inner_line);
				z = z + 25;
			}

		}


		void disp_result()
		{
			cout << endl << endl <<"You Typed: ";
			
			for (int i = 0; i < index; i++)
			{
				cout << stream[i];
			}
		}

		void space()
		{
			
			stream[index]=' ';
			index++;
		}

};


int main()   //main function of the program
{
	
	char draw_again;
	draw_pad d1;
	draw_grid d2;

	
	cout<< "---DRAWN TEXT INPUT---";
	cout<<endl << " Draw chararcters on the given grid and try to include the blue boxes for more accurate results";
	cout<<endl;

	
	do
	{
		
		
		//d2.disp();
		d1.draw();

		

		
		do
		{
			cout << "Enter e to quit, spacebar to add space or enter to add another character: "<<endl;
			draw_again = _getch();

		} while (draw_again!='e'&& draw_again!=32 && draw_again!=13);
		
		if (draw_again ==32)
		{
			d1.space();
		}

		system("cls");

	}while(draw_again!='e');

	
	d1.disp_result();
	cout << endl<<endl;
	system("PAUSE");

	return 0;
}


