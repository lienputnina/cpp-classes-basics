#include <string>

class Song {
  /* Everything in a class is private by default, so no need to write "private"
  at all */
  // class attribute. Private by default
  std::string title;
  std::string artist;

public:
  // Constructor declaration
  /*
  A constructor is a special kind of method that lets you decide how the objects
  of a class get created. It has the same name as the class and no return type.
  */
  Song(std::string new_title, std::string new_artist);

  // Destructor
  /*
  A destructor is a special method that handles object destruction. Like a
  constructor, it has the same name as the class and no return type, but is
  preceded by a ~ operator and takes no parameters
  You generally won’t need to call a destructor; the destructor will be called
automatically in any of the following scenarios:
    1.The object moves out of scope.
    2.The object is explicitly deleted.
    3.When the program ends.
  */
  ~Song();

  // Method declaration
  //   void add_title(std::string new_title);
  std::string get_title();

  //   void add_artist(std::string new_artist);
  std::string get_artist();
};

/*
Hooray! You’ve learned the basics of classes and objects in C++:

Classes are user-defined types.
Objects are instances of classes.
Class members are the data attributes and functions inside of a class.
Creating a new object from a class is called instantiation.
Class members can be designated as either private or public — they are private
by default. You can create a constructor to instantiate objects in a particular
way. A destructor allows you to execute any cleanup necessary before an object
gets destroyed.
*/