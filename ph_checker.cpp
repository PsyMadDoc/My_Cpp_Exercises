#include <iostream>

int main() {
  
  double ph;
  std::string response;
  
  // Asking for pH
  std::cout << "What is the ph of your solution?\n";
  std::cin >> ph;
  
/*
pH levels:
**********
Ultra acidic	< 3.5
Extremely acidic	3.5–4.4
Very strongly acidic	4.5–5.0
Strongly acidic	5.1–5.5
Moderately acidic	5.6–6.0
Slightly acidic	6.1–6.5
Neutral	6.6–7.3
Slightly alkaline	7.4–7.8
Moderately alkaline	7.9–8.4
Strongly alkaline	8.5–9.0
Very strongly alkaline	> 9.0
*/

  // Figuring out solution type
  if (ph < 3.5) {
    response = "ultra acidic";
  } else if (3.5 <= ph && ph <= 6.5) {
    response = "acidic";
  } else if (7.4 <= ph && ph <= 9) {
    response = "basic (alkaline)";
  } else if (ph > 9) {
    response = "very strongly basic (alkaline)";
  } else {
    response = "neutral";
  }
  
  // Answering with solution type
  std::cout << "Your solution is " << response << ".\n";
  
  return 0;
}
