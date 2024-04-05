//STRONG DOSE
//QUESTION 2:- PLAYING WITH IMAGES

#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;
int main() {
    Mat image = imread("Lena.png");
    // Define the threshold
    uchar threshold[3] = {160, 160, 160};
    // Initialize counters for typeA and typeB pixels
    int typeA_count = 0;
    int typeB_count = 0;
    // Convert image to grayscale
    Mat grayscale_image;
    cvtColor(image, grayscale_image, COLOR_BGR2GRAY);
    // Iterate through each pixel
    for (int i = 0; i < image.rows; i++) {
        for (int j = 0; j < image.cols; j++) {
            Vec3b pixel = image.at<Vec3b>(i, j);
            // Check if the pixel is typeA or typeB
            if (pixel[0] > threshold[0] && pixel[1] > threshold[1] && pixel[2] > threshold[2]) {
                typeA_count++;
            } else {
                typeB_count++;
            }
        }
    }
    // Calculate percentage of typeA and typeB pixels
    int total_pixels = image.rows * image.cols;
    float percentage_typeA = (float)(typeA_count) / total_pixels * 100;
    float percentage_typeB = (float)(typeB_count) / total_pixels * 100;
    printf("Percentage of typeA pixels: %.2f%%\n", percentage_typeA);
    printf("Percentage of typeB pixels: %.2f%%\n", percentage_typeB);
    // Define brightness level
    int brightness_level = 150;
    // Create a mask for pixels above brightness level
    Mat mask;
    threshold(grayscale_image, mask, brightness_level, 255, THRESH_BINARY);
    // Invert the mask
    bitwise_not(mask, mask);
    // Display the black and white image
    imshow("Black and White Image", mask);
    waitKey(0);
    destroyAllWindows();
    return 0;
}   