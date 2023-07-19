#include "splashkit.h"

void draw_house_scene()
{
    clear_screen(COLOR_WHITE);
    fill_ellipse(COLOR_BRIGHT_GREEN, 0, 400, 800, 400);
    fill_rectangle(COLOR_GRAY, 300, 300, 200, 200);
    fill_triangle(COLOR_RED, 250, 300, 400, 150, 550, 300);

    refresh_screen(60);
}

void Adding_the_ocean_and_sun_to_draw_house_scene()
{
    clear_screen(COLOR_WHITE);
    fill_ellipse(COLOR_BRIGHT_GREEN, 0, 400, 800, 400);
    fill_rectangle(COLOR_GRAY, 300, 300, 200, 200);
    fill_triangle(COLOR_RED, 250, 300, 400, 150, 550, 300);
    fill_rectangle(COLOR_BLUE, 0, 400, 800, 200);
    fill_circle(COLOR_YELLOW, 700, 100, 50);

    refresh_screen(60);
}

int main()
{
    open_window("Shapes by Latisha", 800, 600);

    draw_house_scene();
    delay(1000);

    //Adding the ocean and sun to Draw_house_scene; 
    Adding_the_ocean_and_sun_to_draw_house_scene();
    delay(1000);
    
    draw_house_scene();
    delay(1000);

    //Adding the ocean and sun to Draw_house_scene; 
    Adding_the_ocean_and_sun_to_draw_house_scene();
    delay(1000);

    refresh_screen(60);
    delay(1000);

    return 0;
}