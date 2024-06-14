# C++ Playing Cards Engine
### Lightweight system for creating and managing playing card decks

### Classes:
- **Card Class**: Represents a single playing card with methods to retrieve its rank, suit, and a string representation.
- **Deck Class**: Manages a collection of cards, offering functionalities like populating the deck with standard playing cards, adding jokers, shuffling the deck, drawing cards and adjusting the deck size.

### How to Use:
You can easily integrate these classes into your applications and games. You can easily customize the deck by adjusting the card composition or adding jokers.

*Usage Examples are set up in the '**main.cpp**'.*

---

How to compile provided examples:

Linux (requires git & GCC):
```bash
git clone https://github.com/zamhedonia/PlayingCardsEngine.git
cd PlayingCardsEngine
g++ main.cpp deck.cpp card.cpp -o PlayingCardsEngine_CLI-Test.out
```
Windows (requires git & MinGW):
```bash
git clone https://github.com/zamhedonia/PlayingCardsEngine.git
cd PlayingCardsEngine
g++ main.cpp deck.cpp card.cpp -o PlayingCardsEngine_CLI-Test.exe
```
