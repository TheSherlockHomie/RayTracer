#include <iostream>

int main()
{
    // Image Dimensions
    const int image_width = 256;
    const int image_height = 256;

    //Rendering the image
    std::cout << "P3\n"                                 //specify image is PPM
        << image_width << " " << image_height << "\n"   //specify image dimensions
        << "255\n";                                     //specify max colour

    for (int j = image_height-1; j >= 0; --j) 
    {
        for (int i = 0; i < image_width; ++i) 
        {
            double r, g, b;
            
            r = double(i) / (image_width - 1);
            g = double(j) / (image_height - 1);
            b = 0.25;

            int ir, ig, ib;
            
            ir = static_cast<int>(255.999 * r);
            ig = static_cast<int>(255.999 * g);
            ib = static_cast<int>(255.999 * b);

            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
}
