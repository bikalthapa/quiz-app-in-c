#include<stdio.h>
#include<conio.h>
// Declaring Variables //
	int input;
	int score = 0;
	int mistake = 0;
	
	// pattern function //
	void pattern(){
	int i;
	printf("\n\t");
	for(i=0; i<50; i++){
		printf("__");
	};
	printf("\n");
	}
// function for first Question //
void question1(){	
	printf("\t\tA. How many bones does Human Body have ?\n");
	printf("\t\t1. 206 \t\t 2.207 \n\t\t3. 205 \t\t 4.260\n");
	printf("\tEnter Your Answer Here : ");
	scanf("%d",&input);
	switch(input){
	case 1:
	printf("\t\t\aCorrect !\n\n");
	score++;
	break;
	
	case 2:
	printf("\t\tWrong !\n\n");
	mistake++;
	break;
	
	case 3:
	printf("\t\tWrong !\n\n");
	mistake++;
	break;
	
	case 4:
	printf("\t\tWrong !\n\n");
	mistake++;
	break;
	
	default:
	printf("\t\tYour score is %d\n\n",score);
	};
	pattern();
}


// A function for second question //
void question2(){
	printf("\n\tB. Who is Known as the father of physics ?\n");
	printf("\t\t1. Sir Issac Newton \t\t 2. Gallileo Galle \n\t\t3. Elbert Einstine \t\t 4. Carlous Von Lanneous\n");
	printf("\tEnter Your Answer Here : ");
	scanf("%d",&input);
	
	switch(input){
		case 1:
		printf("\t\tWrong !\n");
		mistake++;
		break;
		
		case 2:
		printf("\t\tWrong !\n");
		mistake++;
		break;
		
		case 3:
		printf("\t\t\aCorrect !\n");
		score++;
		break;
		
		case 4:
		printf("\t\tWrong !\n");
		mistake++;
		break;
		
		default:
		printf("\t\tYour Score is %d\n\n",score);	
	};
	pattern();
}
// A function for third Question //
void question3(){
	printf("\tC. Who is the founder of Microsoft ?\n");
	printf("\t\t1. Larry Page\t\t2. Stel jobs\n\t\t3. Bill Gates \t\t4. Elon Musk\n");
	printf("\tEnter Your Answer Here : ");
	scanf("%d",&input);
	
	switch(input){
	case 1:
	printf("\t\tWrong !\n");
	mistake++;
	break;
	
	case 2:
	printf("\t\tWrong !\n");
	mistake++;
	break;
	
	case 3:
	printf("\t\t\aCorrect !\n");
	score++;
	break;
	
	case 4:
	printf("\t\tWrong !\n");
	mistake++;
	
	default:
	printf("\t\tYour Score is %d\n\n",score);	
	};
	pattern();
}

// A function for Question 4//
void question4(){
	printf("\tD. Which is the Second Highest Mountain In the world ?\n");
	printf("\t\t1. Mt. Everest \t\t2. Kanchanjunga \n\t\t3. Makalu \t\t4. Mt. K2\n");
	printf("\tEnter Your Answer Here : ");
	scanf("%d",&input);
	
	switch(input){
	case 1:
	printf("\t\tWrong !\n");
	mistake++;
	break;
	
	case 2:
	printf("\t\tWrong !\n");
	mistake++;
	break;
	
	case 3:
	printf("\t\tWrong !\n");
	mistake++;
	break;
	
	case 4:
	printf("\t\t\aCorrect !\n");
	score++;
	break;
	
	default:
	core();	
	};
	pattern();
}

// A function for Question 5 //
void question5(){
printf("\tE. Which Acid is found in Lemon ?\n");
printf("\t\t1. Sulphuric \t\t2. Nitric \n\t\t3. Citric \t\t 4. HydroChloric\n");	
printf("\tEnter Your Answer Here : ");
scanf("%d",&input);

switch(input){
	case 1:
	printf("\t\tWrong !\n");
	mistake++;
	break;
	
	case 2:
	printf("\t\tWrong !\n");
	mistake++;
	break;
	
	case 3:
	printf("\t\t\aCorrect !\n");
	score++;
	break;
	
	case 4:
	printf("\t\tWrong !\n");
	mistake++;
	break;
	
	default:
		core();
};
}



// A function for Score //
void core(){
	int total = score + mistake;
	printf("\n\t\t You Score %d out of %d",score,total);
}

int main(){
	// Declaring Variables //
	int i;
	
	// printing patterns using for loop and do/while loops//
	printf("\n\t");
	for(i=0; i<50; i++){
		printf("__");
	};
	printf("\t\t\t\t\t\tQuiz App\n\t");
	int ai = 0;
	do{
		printf("__");
		ai++;
	}while(ai<50);

	question1();
	question2();
	question3();
	question4();
	question5();
	core();
	return(0);
}
