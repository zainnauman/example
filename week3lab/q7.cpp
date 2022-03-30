#include <iostream>

#define ROWS   4
#define COLS   5

void readMaze(char maze[ROWS][COLS]);

int main (void) {
   char maze[ROWS][COLS] = {};
   //search for s and e
   for (int i = 0; i<COLS;i++){
       for (int j =0; j<ROWS; j++){
           if (maze[j][i] == 's'){
               std::cout <<"s is here: "<< j << i << std::endl;
           }
            if (maze[j][i] == 'e'){
            std::cout <<"e is here: "<< j << i << std::endl;
           }
       }
   }

   readMaze(maze);
   std::cout << maze[0][0] << std::endl;


   return EXIT_SUCCESS;
}

void readMaze(char maze[ROWS][COLS]) {
   // TODO
   for (int i = 0; i<COLS; i++){
       for (int j = 0; j<ROWS; j++){
           std::cin >> maze[j][i];
           std::cout << maze[j][i] << std::endl;
       }
   }
}

