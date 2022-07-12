#ifndef TODO_H
#define TODO_H

// CreateReadUpdateDelete
// extern int updateTodoTasks(int id);
extern int completeTodoTask(int task_id);

extern int createTodoTask(char *todoTask);

extern int deletedTodoTask(int id);

// void readTodoTasks(void);
void loadTodoTasks(void);

#endif // !TODO_H