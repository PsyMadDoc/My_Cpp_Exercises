/*
Whale Talk
**********
Takes a phrase like "turpentine and turtles" and translate it into its “whale talk” equivalent, "uueeieeauuee".

There are a few simple rules for translating text to whale language:

- There are no consonants. Only vowels excluding the letter y.
- The u‘s and e‘s are extra long, so we must double them.

Once we have converted text to the whale language, the result is sung slowly, as is custom in the ocean.
*/

#include <iostream>
#include <vector>

int main() {
  
  std::string phrase = "Victor is awesome at coding";
  std::string whaleTalk;
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  
  // iterating phrase
  for (int i = 0; i < phrase.size(); i++) {
    
    // iterating vowels
    for (int x = 0; x < vowels.size(); x++) {
      
      // comparing each letter in phrase to each elem in vowels
      if (phrase[i] == vowels[x]) {
        
        // adding the letters that passed to whaleTalk
        whaleTalk.push_back(phrase[i]);
        
      }
      
    } // end for(x)
    
    // doubling the letters e and u
    if (phrase[i] == 'e' || phrase[i] == 'u') {
      
      whaleTalk.push_back(phrase[i]);
      
    } 
    
  } // end for(i)
  
  // outputting whaleTalk
  for (int j = 0; j < whaleTalk.size(); j++) {
    
    std::cout << whaleTalk[j];
    
  }
  std::cout << "\n";
  
return 0;
} // end main();
