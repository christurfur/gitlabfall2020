//Contributors
//G. Poppe
//C. Cook

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>


int main(void)
{
	int x,y,z,i,h,g,k,j,choice=0;
	char name[256];
	int boxNum=0;

	srand(time(NULL));
	
	int passCode = 0, numAttempts = 3; //Room 5
	double xCoord, yCoord; //Room 5d

	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				while(choice != 99)
				{
					printf("hello you have entered room 1 \n");
					printf("Room for Sheron\n");
					scanf("%d",&choice);
				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}			

			case 5: //Chris Cook's Room
			{
					while(choice != 99) 
					{
							int *ptr;
							int phoneNum[10] = {0};
							ptr = phoneNum;

							puts("You open the door and find yourself in an flying helicopter with the doors on both sides open.");
							puts("When walking foward through the helicopter, you find that the pilot is unconscious.");
							puts("As you feel the nervous sweat forming on the surfaces of your palms, you find a dusty parachute and an old cell phone with a damaged glass screen.");
							puts("The following scenarios arise in your mind:");
							puts("1. Make an effort to attach the parachute.");
							puts("2. Pick up the old cell phone.");
							puts("3. Attempt to remove the unconscious pilot and take over");
							puts("Make a number selection.");
							scanf("%d",&choice);

							if(choice == 1)
							{
								puts("Turns out that it fits like a glove.");
								puts("You realize that the helicopter is descending quickly and you make the quick decision to jump out of the open door ready to parachute to safety.");
								
								for(i=5; i >= 1; i--)
								{
									printf("%d\n", i);
								}
								
								puts("You jump and start soaring downwards.");
								puts("The parachute deploys and a cloud of dust from within gets ejected");
								puts("Slowly, you make your way down to safety.\n");

								break;
							}
							else if(choice == 2)
							{
								puts("You've picked up the phone, avoiding slicing your fingers on the glass.");
								puts("The phone reads: 'Enter Passcode' with a keypad below.");
								puts("After trying to enter all easily guessed 4 digit combinations incorrectly, the phone reads 'Clue: 392X3' ");

								while(numAttempts != 0)
								{
									scanf("%d",&passCode);

									if(passCode == (392*3))
									{
										puts("Phone Unlocked.");
										puts("Enter a 10-digit phone number to dial.(** 1 digit at a time **)");
										
										for(i = 0; i < 10; i++)
										{
									    	scanf("%d",&ptr[i]); //user entered phone number
										}
										
										printf("Now Calling - ");
										for(j = 0; j < 10; j++)
										{
											printf("%d",ptr[j]);
										}
										printf(" ...");

										puts("You call for help and the air traffic control guides you through the process of landing the helicopter in one peace.\n");
										break;
									}
									
									else
									{
										puts("Invalid Passcode"); 
										numAttempts--;
										printf("You have %d attempts left until phone permanently locked.",numAttempts);
		
									}
							    }
							 	break;

							}
							else if(choice == 3)
							{
								puts("You have thrown the pilot out of his seat and taken over the moving aircraft.");
								puts("There's just one problem..... You have no idea what you are doing.");
								puts("Beginning to press random buttons out of fear, you figure out how to set coordinates on the GPS Auto-Pilot System.");

								xCoord = (double)rand()/(double)(RAND_MAX/180);
								yCoord = (double)rand()/(double)(RAND_MAX/180);

								printf("The chopper has now been routed automatically to the coordinates: %lfN, %lfW\n", xCoord, yCoord);

								puts("Along the way to your new destination, your curiousity starts going wild watching all of the lights appear in the cockpit.");
								puts("You decide to continue pressing buttons to create a rave show effect.");
								puts("The helicopter has risen to a forbidden altitude where many other aircraft fly.");
								puts("While hypnotized by the light show, the helicopter crosses paths with another helicopter and they crash and burn all the way back down to the surface.\n");
								break;
							}
							else
							{
								puts("Invalid Choice.");
							}

					}
					break;
			}
			
			case 6:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 7:
			{
					while(choice != 99)
					{ 
					}
					break;
			}
			case 8:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 12:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{

					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{

					}
					break;
			}
			case 17:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 18:			
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 20:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 21:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You enter the and close the door behind you.");
								printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
					}
					break;

			}
			case 26:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 27:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 28:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 29:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 30:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 31:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 32:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 33:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 34:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 35:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 36:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 37:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
		}	
	}
}

