#include "raylib.h"

int main(void)
{
    InitWindow(1200, 800, "Raylib Project");
    SetTargetFPS(60);
    SetTraceLogLevel(LOG_WARNING);

    Font font = LoadFontEx("resources/font/NTBrickSans.ttf", 100, nullptr, 0);
    GenTextureMipmaps(&font.texture);
    SetTextureFilter(font.texture, TEXTURE_FILTER_BILINEAR);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTextEx(font, "Hello, Raylib!", { 190, 200 }, 100, 1, BLACK);
        EndDrawing();
    }

    UnloadFont(font);
    CloseWindow();
    return 0;
}
