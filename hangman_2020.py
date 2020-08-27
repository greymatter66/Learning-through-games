import random

# Create a list of Ascii art images
HANGMAN_STATE = ['''
    +---+
          |
          |
          I
        ===''', '''
     +---+
     0    |
           |
           I
        ===''', '''
     +---+
      0   |
      |    |
           I
        ===''', '''
     +---+
     0    |
    / |    |
           I
        ===''', '''
      +---+
      0    |
     /|\    |
            I
        ===''', '''
      +---+
     0    |
    /|\    |
     /     I
        ===''', '''
      +---+
     0     |
    /|\     |
     /\     I
        ===''']

# Set up wordlist.
words = 'amp armed anatomy body brother bone car carotid clavical dump drain determine elegant elephant endless frog fake fishing great goodness gravity hold horrid hippo igloo ignite interest jump just jaded kilogram killer ketchup lima laughter loud mother mate matrix '.split()

# Create functions for the game.
def randomPick(wordlist):
    '''Randomly selects a word from the list'''
    index = random.randint(0,len(wordlist) -1)
    return wordlist[index]

def showGame(missedLetters, correctLetters, secretWord):
    '''Displays the state of the game as it changes'''
    print(HANGMAN_STATE[len(missedLetters)])
    print()

    print('Missed Letters: ', end=' ')
    for letter in missedLetters:
        print(letter, end=' ')
    print()

    blanks = '_' * len(secretWord)

    for i in range(len(secretWord)):
        if secretWord[i] in correctLetters:
            blanks = blanks[:i] + secretWord[i] + blanks[i+1:]

    for letter in blanks:
        print(letter, end=' ')
    print()

def userGuess(alreadyGuessed):
    '''Allows the player to guess letters'''
    while True:
        print('Guess a letter.')
        guess = input().lower()
       
        if len(guess) != 1:
            print('Please enter a single letter')
        elif guess in alreadyGuessed:
            print('You have already guessed that letter: Choose Again.')
        elif guess not in 'abcdefghijklmnopqrstuvwxyz':
            print('Please choose a letter')
        else:
            return guess

def playAgain():
    '''Controls the restart of the game'''
    print('Do you want to play again? (yes or no)' )
    return input().lower().startswith('y')

# Game Code:

print('HANGMAN')
missedLetters = ''
correctLetters = ''
secretWord = randomPick(words)
gameIsDone = False

while True:
    showGame(missedLetters, correctLetters, secretWord)

    guess = userGuess(missedLetters + correctLetters)

    if guess in secretWord:
        correctLetters = correctLetters + guess

        foundAllLetters = True
        for i in range(len(secretWord)):
            if secretWord[i] not in correctLetters:
                foundAllLetters = False
                break
        if foundAllLetters:
            print('Yes! The secret word was ' + secretWord + ' YOU HAVE WON')
            gameIsDone = True

    else:
        missedLetters = missedLetters + guess

        if len(missedLetters) == len(HANGMAN_STATE) -1:
            showGame(missedLetters, correctLetters, secretWord)
            print('You have run out of guesses!\nAfter ' + str(len(missedLetters)) + ' missed guesses and ' + str(len(correctLetters)) + ' correct guesses, the word was ' + secretWord)
            gameIsDone = True

    if gameIsDone:
        if playAgain():
            missedLetters = ''
            correctLetters = ''
            gameIsDone = False
            secretWord = randomPick(words)
        else:
            break
    
    
        
