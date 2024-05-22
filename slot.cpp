#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PLAYERS 10
#define MAX_GAMES 3
#define MAX_BET 1000

typedef struct {
    char name[50];
    int budget;
    int games_played;
    int games_won;
} Player;

typedef struct {
    char name[50];
    int min_bet;
    int max_bet;
    void (*play)(Player*);
} Game;

void play_roulette(Player* player) {
    int bet, number, win;

    printf("%s, place your bet: ", player->name);
    scanf("%d", &bet);

    if (bet > player->budget || bet < 1) {
        printf("Invalid bet.\n");
        return;
    }

    srand(time(NULL));
    number = rand() % 37;

    if (number == 0) {
        win = 36 * bet;
    } else {
        win = bet;
    }

    if (number % 2 == 0) {
        printf("Red %d\n", number);
    } else {
        printf("Black %d\n", number);
    }

    if (number == 0 || number == player->budget) {
        printf("You win %d!\n", win);
        player->budget += win;
        player->games_won++;
    } else {
        printf("You lose %d.\n", bet);
        player->budget -= bet;
    }

    player->games_played++;
}

void play_blackjack(Player* player) {
    int bet, card, win;

    printf("%s, place your bet: ", player->name);
    scanf("%d", &bet);

    if (bet > player->budget || bet < 1) {
        printf("Invalid bet.\n");
        return;
    }

    srand(time(NULL));
    card = rand() % 11 + 1;

    if (card == 7 || card == 11) {
        win = 2 * bet;
    } else {
        win = bet;
    }

    printf("Card: %d\n", card);

    if (card == 7 || card == 11) {
        printf("You win %d!\n", win);
        player->budget += win;
        player->games_won++;
    } else {
        printf("You lose %d.\n", bet);
        player->budget -= bet;
    }

    player->games_played++;
}

void play_slot_machine(Player* player) {
    int bet, win;

    printf("%s, place your bet: ", player->name);
    scanf("%d", &bet);

    if (bet > player->budget || bet < 1) {
        printf("Invalid bet.\n");
        return;
    }

    srand(time(NULL));
    win = bet * (rand() % 10 + 1);

    if (win == 10 * bet) {
        printf("You win %d!\n", win);
        player->budget += win;
        player->games_won++;
    } else {
        printf("You lose %d.\n", bet);
        player->budget -= bet;
    }

    player->games_played++;
}

int main() {
    int choice, num_players, i;
    Player players[MAX_PLAYERS];
    Game games[MAX_GAMES] = {
        {"Roulette", 1, MAX_BET, play_roulette},
        {"Blackjack", 1, MAX_BET, play_blackjack},
        {"Slot Machines", 1, MAX_BET, play_slot_machine},
    };

    printf("Enter the number of players: ");
    scanf("%d", &num_players);

    for (i = 0; i < num_players; i++) {
        printf("Enter player %d name: ", i + 1);
        scanf("%s", players[i].name);
        players[i].budget = MAX_BET;
        players[i].games_played = 0;
        players[i].games_won = 0;
    }

    printf("Welcome to the Casino!\n");

    do {
        printf("Choose a game: \n");
        for (i = 0; i < MAX_GAMES; i++) {
            printf("%d. %s\n", i + 1, games[i].name);
        }
        printf("%d. Exit\n", MAX_GAMES + 1);

        scanf("%d", &choice);

        if (choice >= 1 && choice <= MAX_GAMES) {
            Player* current_player = players;
            int j;
            for (j = 0; j < num_players; j++) {
                printf("%s, your budget is %d.\n", current_player->name, current_player->budget);
                games[choice - 1].play(current_player);
                if (current_player->budget <= 0) {
                    printf("%s, you're out of budget. Try again later.\n", current_player->name);
                    break;
                }
                current_player++;
            }
        }
    } while (choice != MAX_GAMES + 1);

    printf("Thanks for playing!\n");

    return 0;
}

   

    