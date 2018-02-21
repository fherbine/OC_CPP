#ifndef HEADER_H_INCLUDED
# define HEADER_H_INCLUDED

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>

std::string	askForTheOriginalWord(void);
std::string	askForAnAnswer(std::string shuffleWord);

std::string	shuffleWord(std::string word);

void		mystery(void);

#endif
