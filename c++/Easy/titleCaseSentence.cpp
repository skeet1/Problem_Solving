#include <iostream>
#include <string>

using namespace std;

// Write a function that takes a string as input and 
// returns the string in title case.

string removeExtraSpaces(string str) {
  string newStr = "";
  int i = 0;
  bool prevSpace = true;
  // escape extra spaces in the beginning
  for (i = 0; i < str.length(); i++) {
    if (!isspace(str[i]))
      break;
  }
  for (; i < str.length(); i++) {
    if (isspace(str[i]))
      break;
    newStr += str[i];
  }
  for (; i < str.length(); i++) {
    if (!isspace(str[i])) {
      if (prevSpace) {
        newStr += ' ';
        prevSpace = false;
      }
    }
    if (isspace(str[i])) {
      prevSpace = true;
      continue;
    }
    newStr += str[i];
  }
  return newStr;
}

// unit tests for remove extra spaces
// int main() {
//   // removeExtraSpaces("       Hello   World  \n\t ! ");
//   cout << "Test Case 1: " << (removeExtraSpaces("       Hello   World  \n\t ! ") == "Hello World !" ? "Passed\n" : "Failed\n");
//   cout << "Test Case 1: " << (removeExtraSpaces(" h   e  ll o   ") == "h e ll o" ? "Passed\n" : "Failed\n");
//   cout << "Test Case 1: " << (removeExtraSpaces("  hell@   h@o   @re   you   ") == "hell@ h@o @re you" ? "Passed\n" : "Failed\n");
// }


string titleCase(string str) {
  for (int i = 0; i < str.length(); i++) {
    str[i] = tolower(str[i]);
  }
  str = removeExtraSpaces(str);
  str[0] = toupper(str[0]);
  for (int i = 1; i < str.length(); i++) {
    if (isalpha(str[i]) && isspace(str[i - 1])) {
      str[i] = toupper(str[i]);
    }
  }
  // cout << str << endl;
  return str;
}

int main() {
  cout << "Test Case 1: " << (titleCase("the quick brown fox jumps over the lazy dog") == "The Quick Brown Fox Jumps Over The Lazy Dog" ? "Passed" : "Failed") << endl;
  cout << "Test Case 2: " << (titleCase("Hello world!") == "Hello World!" ? "Passed" : "Failed") << endl;
  cout << "Test Case 3: " << (titleCase("i love coding") == "I Love Coding" ? "Passed" : "Failed") << endl;
  cout << "Test Case 4: " << (titleCase("this is a test") == "This Is A Test" ? "Passed" : "Failed") << endl;
  cout << "Test Case 5: " << (titleCase("supercalifragilisticexpialidocious") == "Supercalifragilisticexpialidocious" ? "Passed" : "Failed") << endl;
  cout << "Test Case 6: " << (titleCase("a b c d e f g h i j k l m n o p q r s t u v w x y z") == "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" ? "Passed" : "Failed") << endl;

  return 0;
}
