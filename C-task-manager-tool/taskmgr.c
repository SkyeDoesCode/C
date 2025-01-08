#include <stdio.h>
#define maxTasks 100

typedef struct newTask {  //typedef is used to create an alias(Task) for an existing  data type
    int id;
    char name[50];  //name array with a limit of 49 characters  
    char description[200]; //desc array with a limit of 199 characters 
    char deadline[20]; //deadline array 
    int priority;  // 1 high, 2 medium, 3 low
    int completed; // 1 completed, 0 incomplete
} Task;  //since the structure is defined now, Task can be used to declare variables of this type 

void addTask(Task tasks[], int *taskCount) {  //Array with Task's structure 
    if (*taskCount >= maxTasks) { 
        printf("Task list is full. Finish incomplete tasks or delete unimportant tasks.\n");
        return;
    }

    Task newTask;  //newTask takes on the Task struct
    newTask.id = *taskCount + 1; // Generates ID
    newTask.completed = 0;      // New tasks are incomplete by default

    // Get Task Details
    printf("Enter task name: ");
    scanf(" %[^\n]", newTask.name); //scans until a new line is detected 

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

    tasks[*taskCount] = newTask;  //Stores the new task at the next available position in the array
    (*taskCount)++;  //Updates the total number of tasks to reflect the addition

    printf("Task added successfully! Task ID: %d\n", newTask.id);
}

void viewTasks(Task tasks[], int taskCount) {  //tasks array with Task struct and an int representing the total number of tasks in the array
    if (taskCount == 0) {
        printf("No tasks to display.\n");
        return;
    }

    printf("\nList of Active Tasks:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("Task ID: %d\n", tasks[i].id);
        printf("Task Name: %s\n", tasks[i].name);
        printf("Task Description: %s\n", tasks[i].description);
        printf("Task Deadline: %s\n", tasks[i].deadline);
        printf("Task Priority: %d\n", tasks[i].priority);
        printf("Task Completed? %s\n", tasks[i].completed ? "Yes" : "No");
        printf("----------------------\n");
    }
}

void completeTask(Task tasks[], int taskCount) {
    int id;
    printf("Enter the ID of the task to mark as completed: ");
    scanf("%d", &id);

    if (id < 1 || id > taskCount) {
        printf("Invalid task ID.\n");
        return;
    }

    tasks[id - 1].completed = 1;
    printf("Task %d marked as completed.\n", id);
}

int main(void) {
    Task tasks[maxTasks];
    int taskCount = 0;
    int choice;

    while (1) {
        printf("\n1. Add Task\n2. View Tasks\n3. Complete Task\n4. Exit\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');  // Discards invalid input
            printf("Invalid choice. Please enter a valid integer (1-4).\n");
            continue; // Skip the rest of the loop and prompt for input again
        }

        switch (choice) {
            
            case 1:
                addTask(tasks, &taskCount);
                break;
            case 2:
                viewTasks(tasks, taskCount);
                break;
            case 3:
                completeTask(tasks, taskCount);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0; //stops the while loop
            default:  
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
}










