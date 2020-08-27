#include<stdio.h>
/*Game developed for CLI, It has various levels which are only released
when max score is obtained in previous levels. The purpose of the game
is to allow the player utilize problem solving skills to solve the problems. 
greymatter66 2018*/

int main(void)
{
	//Declare the variables we need.
	int score = 0;
	int lives = 3;
	int options;
	int ans1, ans2, ans3, ans4, ans5;
	int challenge = 0;
	//Level 2 variables.
	int newScore;
	int ansA;
	int ansB, ansC;
	int	round2 = 0;
	//Level 3 variables.
	int mission, missionCount;
	int weapons;
	int team;
	int p1, p2, p3;
	
	//Create some space.
	printf(" \n");
	printf(" \n");
	//Banner Code here.
	printf("***---***---***---***---***\n");
	printf("WELCOME TO THE MENTAL QUEST\n");
	printf("***---***---***---***---***\n");
	printf(" \n");
	printf("We start off with your health status\n");
	printf(" \n");
	printf("You have %d lives and your score is currently %d\n",lives,score);
	printf(" \n");
	printf("Let's play\n");
	//Start game here.
	printf(" \n");
	//Level 1
	while(lives !=0 && challenge !=5)
	{
		printf(" ");
		printf("Pick a number between 1 and 5 to draw your challenge, once you start don't pick the same number again\n");
		scanf("%d",&options);
		switch(options)
		{
			//First option & Question.
			case 1: printf("If you have a 100V supply and 5Amp current, what is the Resistance?\n");
			scanf("%d",&ans1);
			if(ans1 == 20)
			{
				printf("Correct, Well Done\n");
				score = score += 10;
				printf("******************************************\n");
				printf("You have %d lives and your score is now %d\n",lives , score);
				printf("******************************************\n");
				challenge = challenge+ 1;
			}
			else
			{
				printf("Oh no poor calcuation..Tough luck\n");
				printf("Hear that sound....That's your life gone\n");
				lives = lives - 1;
				printf("You have lost a life\n\a");
				printf("You have %d lives and your score is now %d\n",lives , score);
				challenge = challenge+ 1;
			}
			
			break;
			
			
			//Second option & Question.
			case 2: printf("What is 2.2X10^3?\n");
			scanf("%d", &ans2);
			if(ans2 == 2200)
			{
				printf("Correct, Well Done\n");
				score = score += 10;
				printf("******************************************\n");
				printf("You have %d lives and your score is now %d\n",lives , score);
				printf("******************************************\n");
				challenge = challenge+ 1;
			}
			else
			{
				printf("Ha Ha that's another poor calculation..Tough luck\n");
				printf("Hear that sound....That's your life gone\n");
				lives = lives - 1;
				printf("You have lost a life\n\a");
				printf("You have %d lives and your score is now %d\n",lives , score);
				challenge = challenge+ 1;
			}
			
			break;
			
			
			//Third option & Question.
			case 3: printf("what is the total resistance of 3 resistors in series of values 5ohms, 10ohms and 10ohms?\n");
			scanf("%d",&ans3);
			if(ans3 == 25)
			{
				printf("Correct, Well Done\n");
				score = score += 10;
				printf("******************************************\n");
				printf("You have %d lives and your score is now %d\n",lives , score);
				printf("******************************************\n");
				challenge = challenge+ 1;
			}
			else
			{
				printf("You are having a bad time at this ha ha..Tough luck\n");
				printf("Hear that sound....That's your life gone\n");
				lives = lives - 1;
				printf("You have lost a life\n\a");
				printf("You have %d lives and your score is now %d\n",lives , score);
				challenge = challenge+ 1;
			}
			
			break;
			
			
			//Fourth option & Question.
			case 4: printf("You locate an enemy bunker 6mX3m, you need 1 kg of C4 per square meter to blow it. How many kg?\n");
				scanf("%d",&ans4);
				if(ans4 == 18)
			{
				printf("Correct, Well Done\n");
				score = score += 10;
				printf("******************************************\n");
				printf("You have %d lives and your score is now %d\n",lives , score);
				printf("******************************************\n");
				challenge = challenge+ 1;
			}
			else
			{
				printf("Ah here, that's shocking..Tough luck\n");
				printf("Hear that sound....That's your life gone\n");
				lives = lives - 1;
				printf("You have lost a life\n\a");
				printf("You have %d lives and your score is now %d\n",lives , score);
				challenge = challenge+ 1;
			}
			
			break;
			
			//Fifth option & Question.
			case 5: printf("You find 6000 grenades, you can take 40 percent of them. How many do you take?\n");
			scanf("%d",&ans5);
			if(ans5 == 2400)
			{
				printf("Correct, Well Done\n");
				score = score += 10;
				printf("******************************************\n");
				printf("You have %d lives and your score is now %d\n",lives , score);
				printf("******************************************\n");
				challenge = challenge+ 1;
			}
			else
			{
				printf("You are wrong..Tough luck\n");
				printf("Hear that sound....That's your life gone\n");
				lives = lives - 1;
				printf("You have lost a life\n\a");
				printf("You have %d lives and your score is now %d\n",lives , score);
				challenge = challenge+ 1;
			}
			
			break;
			
			default: printf("Enter 1-5 only");
		}
	}
	
	//Out of level 1.
	
	//Level 2:
	if(score == 50)
	{
		printf("***********************************\n");
		printf("WELL DONE! YOU HAVE REACHED LEVEL 2\n");
		printf("***********************************\n");
		printf(" ");
		printf("Tougher questions this time around\n");
		printf("LETS PLAY\n");
		printf(" ");
		printf("You have %d lives and your score is %d\n", lives, score);
		newScore = score;
		
		//Start of Level 2 While Loop:
		while(lives !=0 && round2 !=3)
	{
		printf(" ");
		printf("Pick a number between 1 and 3 to draw your challenge, once you start don't pick the same number again\n");
		scanf("%d",&options);
		switch(options)
		{
			//First option & Question.
			case 1: printf("You are under sniper fire, you need medical supplies. Radio for help on the secret frequencey\n");
			printf("The frequencey is 5672 divided by 600-596. Use your sniper calculator to find the frequencey?\n");
			scanf("%d",&ansA);
			if(ansA == 1418)
			{
				printf("Correct, Well Done\n");
				newScore = newScore += 20;
				printf("******************************************\n");
				printf("You have %d lives and your score is now %d\n",lives , newScore);
				printf("******************************************\n");
				round2 = round2 +1;
			}
			else
			{
				printf("You are wrong..Tough luck\n");
				printf("Hear that sound....That's your life gone\n");
				lives = lives - 1;
				newScore = newScore - 10;
				printf("You have lost a life and lost 10 points\n\a");
				printf("You have %d lives and your score is now %d\n",lives , newScore);
				round2 = round2 +1;
			}
			
			break;
			
			
			//Second option & Question.
			case 2: printf("You need to hack a combination lock. The code is three numbers added together\n");
			printf("To get the numbers find the place number in the alphabet for these letters then add them together\n");
			printf("The letters are A,F,Z What is the secret code?\n");
			scanf("%d", &ansB);
			if(ansB == 33)
			{
				printf("Correct, Well Done\n");
				newScore = newScore += 20;
				printf("******************************************\n");
				printf("You have %d lives and your score is now %d\n",lives , newScore);
				printf("******************************************\n");
				round2 = round2 +1;
			}
			else
			{
				printf("You are wrong..Tough luck\n");
				printf("Hear that sound....That's your life gone\n");
				lives = lives - 1;
				newScore = newScore -10;
				printf("You have lost a life and 10 points\n\a");
				printf("You have %d lives and your score is now %d\n",lives , newScore);
				round2 = round2 +1;
			}
			
			break;
			
			
			//Third option & Question.
			case 3: printf("You have 8 heatseaking missles, each can wipe out 150 enemy combatants.\n");
			printf("How many will 6 kill if you are on target with 4 of them?\n");
			scanf("%d",&ansC);
			if(ansC == 600)
			{
				printf("Correct, Well Done\n");
				newScore = newScore += 20;
				printf("******************************************\n");
				printf("You have %d lives and your score is now %d\n",lives , newScore);
				printf("******************************************\n");
				round2 = round2 +1;
			}
			else
			{
				printf("You are wrong..Tough luck\n");
				printf("Hear that sound....That's your life gone\n");
				lives = lives - 1;
				newScore = newScore - 10;
				printf("You have lost a life and 10 points.\n\a");
				printf("You have %d lives and your score is now %d\n",lives , newScore);
				round2 = round2 +1;
			}
			
			break;
			
			default: printf("Enter 1-3 only\n");
		}
	
		
	}
	//Level 3 begins here.
	if (newScore == 110)
	{
		printf("**************************************\n");
		printf("YOU HAVE UNLOCKED ELITE SURVIVAL MODE\n");
		printf("**************************************\n");
		printf(" \n");
		printf("Please enter the number of team members you have for this mission ");
		scanf("%d", &team);
		
		while (team != 0 || missionCount != 3)
		{
			printf("You have 3 missions to complete in survival mode. You get no points, you just have to stay alive.\n");
			printf("Let's Play\n");
			printf("*************************\n");
			printf("Pick a mission between 1-3\n");
			scanf("%d",&mission);
			switch (mission)
			{
				//Tank attack.
				case 1:
				printf("You are under attack from an enemy tank\n");
				printf("**************************************\n");
				printf("**************************************\n");
				printf("\t      o\n");
				printf("\t     ( )\n");
				printf("\t   ______\n");
				printf("\t  |      |=====]     ~~~>==]>\n");
				printf("\t__|   _   |___\n");
				printf("\t[            ]\n");
				printf("\tO--O--O--O--O\n");
				printf(" \n");
				printf("To earn anti-tank rounds you must play bombers bucket\n");
				printf("Each team member gets two shots into the bucket. 5 points per hit\n");
				printf("GO PLAY NOW!\n");
				printf(" \n");
				printf("Enter the total score your team got and let's see how you got on against the tank attack\n");
				scanf("%d",&p1);
				if (p1 > 14)
				{
					printf("Awesome shooting you have destroyed the enemy tank and all your team survive\n");
					printf("Team members = %d and a mission complete.\n" ,team);
					missionCount = missionCount + 1;
					printf("**************************\n");
					printf(" \n");
				}
				else if (p1 <14 && p1>12)
				{
					printf("\a Ouch...You didn't do so well...You loose a team member in battle\n");
					team = team - 1;
					printf("Team members = %d\n",team);printf("**************************\n");
					printf(" \n");
				}
				else
				{
					printf("\a\a Oh Nooo you've lost a couple of good soldiers there\n");
					printf("You loose 2 team members.....too bad, take a seat\n");
					team = team - 2;
					missionCount = missionCount +1;
					printf("Team members = %d\n",team);
					printf("**************************\n");
					printf(" \n");
				}
				break;
				//chopper attack.
				case 2:
				printf("You are under attack from an enemy chopper\n");
				printf("**************************************\n");
				printf("**************************************\n");
				printf("\t        ----------\n");
				printf("\t\t  __|__\n");
				printf("\tL\t[      ]\n");
				printf("\tO======= ||  ---)-\n");
				printf("\tL\t[_______|\n");
				printf(" \n");
				printf(" \n");
				printf("\t\t>====|>\n");
				printf(" \n");
				printf("\t\t\t>====|>    >====|>\n");
				printf(" \n");
				printf("You need to get your hands on some sam's that's surface to air missiles dude\n");
				printf(" \n");
				printf("Get pushing out those push up's soldiers... 1 missile per 4 push up's\n");
				printf("30 seconds to get your total...Team Ready...GO!\n");
				printf("*********************************************************************\n");
				printf("Enter the total score your team got and let's see how you got on against the attack chopper\n");
				scanf("%d",&p2);
				if (p2 > 5)
				{
					printf("Amazing work team....Well done you have destroyed the attack chopper and lost nobody\n");
					printf("Team members = %d\n",team);
					missionCount = missionCount +1;
					printf("**************************\n");
					printf(" \n");
				}
				else if (p2 < 5 && p2> 3)
				{
					printf("\aYou've taken a direct hit from the choppers hellfire missile and lost a buddy\n");
					team = team -1;
					printf("Team members = %d\n", team);
					missionCount = missionCount +1;
					printf("**************************\n");
					printf(" \n");
				}
				else
				{
					printf("\a\a Oh no disaster strikes your team, you loose 2 team members\n");
					team = team - 2;
					missionCount = missionCount +1;
					printf("Team members = %d\n", team);
					printf("**************************\n");
					printf(" \n");
				}
				break;
				
				//Jet Attack
				case 3:
				printf("You have set off an infrared sesnor and enemy jets have scrambled to your position\n");
				printf("\n ");
				printf("**************************\n");
				printf(" \n");
				printf(" \n");
				printf("\t|\\\n");
				printf("\t| \\_________[-0-]_\n");
				printf("\t|__________________]=>\n");
				printf("\t      |      |\n");
				printf("\t     >========|>           >=======|>\n");
				printf(" \n");
				printf("\t                >=======|>\n");
				printf("**************************\n");
				printf("**************************\n");
				printf("I hope it aint to dark out there and the weather isn't being mean\n");
				printf("There's a supply of anti aircraft shells available to your team\n");
				printf("To get them your team gets 2 hoop cannon balls to trade with the AA alliance\n");
				printf("Navigate your way to the patio battlefield, arm your team with two cannon balls\n");
				printf("You need to lob the cannon balls into the AA receiving nets, you need 5 direct hits\n");
				printf("**************************\n");
				printf("**************************\n");
				printf("Enter the number of direct hits your team scored\n");
				scanf("%d",&p3);
				
				if (p3 > 5)
				{
					printf("Tremendous Shooting Skills Team\n");
					printf("You have destroyed the enemy F16 fighter jet\n");
					printf("Team members = %d\n", team);
					missionCount = missionCount +1;
				}
				else if (p3 <5 && p3 > 3)
				{
					printf("Not great shooting guys, maybe ye need glasses\n");
					printf("\a You loose a team member in the battle\n");
					team = team -1;
					printf("Team members = %d\n", team);
					missionCount = missionCount +1;
				}
				else if (p3 <3)
				{
					printf("Rubbish effort, your team has been wiped out\n");
					team =0;
					printf("Team members = %d\n", team);
					missionCount = missionCount +1;
				}
				break;
					
			}
				
		}
		//Out of Loop Level 3
		printf("*******************************************\n");
		printf("YOU HAVE EXITED LEVEL 3 - HAVE YOU SURVIVED?\n");
		printf("Your results are as follows\n");
		printf("Team Members:\t%d\n",team);
		printf("Score to Date:\t%d\n",newScore);
		printf("*******************************\n");
		printf("COMING SOON LEVEL 4 - BLACK OPS\n");
		printf("*******************************\n");
		
	}
	else
		//Out of Level 2:
	{
	printf("********************************\n");
		printf("********************************\n");
		printf("You have exited from level 2\n");
		printf(" ");
		printf("********************************\n");
		printf("********************************\n");
		printf("Your total score is %d and you have %d lives left\n", newScore, lives);
		printf("***************************\n");
		printf("HOPE YOU ENJOYED THE QUEST\n");
		printf("***************************\n");
		printf("COMING SOON LEVEL 3 FOR THE ELITE\n");
		printf("##################################\n");
	}
}	
	//Back out of the game without level 2.
	else
	{
	printf(" ");
	printf("You have exited the game");
	printf(" ");
	printf("You did %d challenges and have scored %d out of 50 points and you have %d lives left\n" ,challenge,score,lives);
	printf(" ");
	printf("Score = \t %d/50\n",score);
	printf("Lives = \t %d\n", lives);
	printf("Challenges = \t %d\n",challenge);
	printf("***************************\n");
	printf("HOPE YOU ENJOYED THE QUEST\n");
	printf("***************************\n");
	}

	return(0);
}
