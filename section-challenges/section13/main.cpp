#include <iostream>
#include "Movies.h"

//Function prototypes 
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched); 

//Movie object increment function
void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " watch incremented" << std::endl; 
    }
    else {
        std::cout << name << " not found" << std::endl; 
    }
}


//Movie object add function 
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        std::cout << name << " added" << std::endl; 
    }
    else {
        std::cout << name << " already exists" << std::endl; 
    }
}

int main() {
    
    
    Movies my_movies; 
    
    my_movies.display(); 
    
    add_movie(my_movies, "Big", "PG-13", 2);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Cinderella", "PG", 7);
    
    return 0;
}