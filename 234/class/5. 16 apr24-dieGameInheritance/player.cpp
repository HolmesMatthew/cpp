

Player::Player(char* playerName){ // CTOR
    // seed rand num gen
    // srand(time(0));

    name = playerName;
    guess = "";
    points = 0;
}
Player::Player(const Player &obj){ // overloaded = operator 

} 
Player::~Player(){ // DTOR

} 
Player& Player::operator=(const Player &rhs){ // CPY CTOR
        // this -> points to its self (rhs -> right hand side)
    if(this != &rhs){
        name = new char[strlen(rhs.name) + 1];
        strcpy(name, rhs.name);
    } 
    return  *this;
} 
Player& Player::operator=(Player&& rhs){ // move assignment operator
    if (this != &rhs)
    {
        swap(name, rhs.name); // moving new data into rhs.name
    }
    return  *this;
} 

void Player::makeGuess(){ // makeGuess - asks user to make a guess. Either Cho (even) or Han (odd)
    const int MIN_VALUE = 0;
    const int MAX_VALUE = 1;

    int guessNumber;

    // get random Number either 0 or 1
    guessNumber = (rand()%(MAX_VALUE-MIN_VALUE + 1)) + MIN_VALUE;

    if (guessNumber == 0)
    {
        guess = "Cho (even)";
    }
    else{
        guess = "Han (odd)";
    }
}

//mutator
void Player::addPoints(int newPoints){
    points+= newPoints;
}

// getter
string Player::getName(){
    return name;
}
string Player::getGuess(){
    return guess;
}
int Player::getPoints(){
    return points;
}