#include <stdio.h>
#define maxTasks 100

typedef struct newTask
    {
        int id; 
        char name[50];
        char description[200];
        char deadline[20]; 
        int priority;  //1 high 2 medium 3 low
        int completed;  //1 completed, 0 incomplete
    }Task;

void addTask(Task tasks[], int *taskCount) {

    if (*taskCount >= maxTasks) {
        printf("Task list is full, finish incompleted task or delete unimportant tasks\n");
        return;
    }
    
    Task newTask;
    newTask.id = *taskCount + 1; //generates ID
    newTask.completed = 0; //new tasks are incomplete by default

    //Get Task Details and assign them to task variables
    printf("Enter task name: ");
    scanf(" %[^\n]", newTask.name);

    printf("Enter task description: ");
    scanf(" %[^\n]", newTask.description);

    printf("Enter task deadline (YYYY-MM-DD): ");
    scanf(" %19s", newTask.deadline); // Limit input to 19 characters

    printf("Enter task priority (1 = High, 2 = Medium, 3 = Low): ");
    scanf("%d", &newTask.priority);

    if (newTask.priority < 1 || newTask.priority > 3) {
        printf("Invalid priority. Setting to 3 (Low) by default.\n");
        newTask.priority = 3;
    }
    tasks[*taskCount] = newTask;
    (*taskCount)++;

    printf("Task added successfully! Task ID: %d\n", newTask.id)


}

int main(void) {
    Task tasks[maxTasks];
    int taskCount = 0;
    int choice;

    printf("1. Add Task\n2. View Tasks\n3. Complete Task\n4. Exit\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            addTask(tasks, &taskCount);
            break;
        case 2:
            printf("You Chose to view Tasks");
            //ViewTasks function
            break;
        case 3: 
            printf("You chose complete a task");
            //CompleteTask function
            break;
        case 4:
            printf("Exiting the program");
            break;
        default:
        printf("Invalid Choice, closing program");
    }
    return 0;


}