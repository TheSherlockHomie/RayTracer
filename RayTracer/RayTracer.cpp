#include <iostream>

int main()
{
    // Image Dimensions
    const int image_width = 3;
    const int image_height = 2;

    //Rendering the image
    std::cout << "P3\n"                                 //specify image is PPM
        << image_width << " " << image_height << "\n"   //specify image dimensions
        << "255\n";                                     //specify max colour

    for (int i = 0; i < image_height; ++i) 
    {
        for (int j = 0; j < image_width; ++j) 
        {
            int r, g, b;
            if (j == 0)
            {
                r = g = b = 0;
            }
            else if (j == 1)
            {
                r = 255;
                g = b = 0;
            }
            else
            {
                r = g = 255;
                b = 0;
            }

            if (i != 0)
            {
                std::swap(r, b);
            }

            std::cout << r << " " << g << " " << b << "\n";
        }
    }
}
