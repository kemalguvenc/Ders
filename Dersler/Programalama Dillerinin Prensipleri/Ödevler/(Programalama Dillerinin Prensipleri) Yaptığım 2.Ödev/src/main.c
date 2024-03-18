#include "..\include\Oyun.h"

int main() {
    Game game = newGame(".\\Kisiler.txt", ".\\Sayilar.txt");
    game->start(game);
    game->delete(game);
    return 0;
}