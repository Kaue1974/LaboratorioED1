#include "raylib.h"
#include "entidade.h"
#include <stdlib.h>

int main(void) {
    const int LARGURA = 800;
    const int ALTURA = 600;

    InitWindow(LARGURA, ALTURA, "Atividade 8b");
    SetTargetFPS(60);

    Entidade *jogador = entidadeCriar(ENTIDADE_JOGADOR, (Vector2){ 200, 300 });
    Entidade *inimigo = entidadeCriar(ENTIDADE_INIMIGO, (Vector2){ 400, 300 });
    Entidade *item    = entidadeCriar(ENTIDADE_ITEM,    (Vector2){ 600, 300 });

    while (!WindowShouldClose()) {
        
        BeginDrawing();
            ClearBackground(RAYWHITE);

            entidadeDesenhar(jogador);
            entidadeDesenhar(inimigo);
            entidadeDesenhar(item);

        EndDrawing();
    }

    free(jogador);
    free(inimigo);
    free(item);

    CloseWindow();
    return 0;
}