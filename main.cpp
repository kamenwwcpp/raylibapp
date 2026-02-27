#include "raylib.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    SetTraceLogLevel(LOG_NONE); // убирает логи raylib.
    InitWindow(screenWidth, screenHeight, "Raylib Project - Hello!");

    SetTargetFPS(240);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib!", 190, 200, 20, ORANGE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
