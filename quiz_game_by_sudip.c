#include <stdio.h>

int main(){
int num;
int ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
printf("QUIZ GAME\n\n");
printf("Enter 0 to start : ");
scanf("%d",&num);
if(num==0){
    printf("\nLet's Start\n\n");
}
else{
    printf("invalid !!!");
}
printf("a)Which of the following is a linear data structure ?\n");
printf("\t1> Array\n");
printf("\t2> AVL Tree\n");
printf("\t3> Binary tree\n");
printf("\t4> Graphs\n\n");
printf("\tEnter your answer : ");
scanf("%d", &ans1);
if(ans1==1){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}

printf("b)which of the following is not the type of queue ?\n");
printf("\t1> Priority queue\n");
printf("\t2> Single-ended queue\n");
printf("\t3> Circular queue\n");
printf("\t4> Ordinary queue\n\n");
printf("\tEnter your answer : ");
scanf("%d",&ans2);
if(ans2==2){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}
printf("c)How are string represented in memory in C ?\n");
printf("\t1>an array of charactors\n");
printf("\t2>The object of some class\n");
printf("\t3>Same as other primitive\n");
printf("\t4>LinkedList of charactors\n\n");
printf("\tEnter your answer : ");
scanf("%d",&ans3);
if(ans3==1){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}
printf("d)Which of the following data structure can be used to implement queues ?\n");
printf("\t1>Stack\n");
printf("\t2>Arrays\n");
printf("\t3>LinkedList\n");
printf("\t4>All of the above\n\n");
printf("\tEnter your answer : ");
scanf("%d",&ans4);
if(ans4==4){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}
printf("e)Which of the following data structure finds its use in recursion ?\n");
printf("\t1>Stack\n");
printf("\t2>Arrays\n");
printf("\t3>LinkedList\n");
printf("\t4>Queues\n\n");
printf("\tEnter the answer : ");
scanf("%d",&ans5);
if(ans5==1){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}
printf("f)Which of the following data structures allow insertion and deletion from ends ?\n");
printf("\t1)Stack\n");
printf("\t2)Deque\n");
printf("\t3)Queue\n");
printf("\t4)Strings\n\n");
printf("\tEnter your answer : ");
scanf("%d", &ans6);
if(ans6==2){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}
printf("g)Which of the following sorting algorithms provide the best time complexity in the worst-case scenario ?\n");
printf("\t1>Merge sort\n");
printf("\t2>Quick sort\n");
printf("\t4>Bubble sort\n");
printf("\t3>Selection sort\n\n");
printf("\tEnter your answer : ");
scanf("%d", &ans7);
if(ans7==1){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}
printf("h)Which of the following is a devide and conquer algorithm ?\n");
printf("\t1>Bubble sort\n");
printf("\t2>Selection sort\n");
printf("\t3>Heap sort\n");
printf("\t4>Merge sort\n\n");
printf("\tEnter your answer : ");
scanf("%d", &ans8);
if(ans8==4){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}
printf("i)Which of the following are applications of Topological sort of a graph ?\n");
printf("\t1>Sentence Ordering\n");
printf("\t2>Course Scheduling\n");
printf("\t3>OS Deadlock Detection\n");
printf("\t4>All of the above\n\n");
printf("\tEnter your answer : ");
scanf("%d", &ans9);
if(ans9==4){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}
printf("j)Krushkal's Algorithm for finding the minimum Spanning Tree of a graph is a kind of a ?\n");
printf("\t1>DP Problem\n");
printf("\t2>Greedy Algorithm\n");
printf("\t3>Adhoc Problem\n");
printf("\t4>None of the above\n\n");
printf("\tEnter your answer : ");
scanf("%d", &ans10);
if(ans10==2){
    printf("\nCorrect answer,Hurray..!!!!!!!\n\n");
}
else{
    printf("\nWrong answer..!!\n\n");
}








    return 0;
}