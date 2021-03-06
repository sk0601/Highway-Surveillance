# Highway Surveillance

## Introduction
Vehicle Number Plate Recognition System is an extremely useful technique, which is
used to identify any vehicle without much human intervention. It has several applications
ranging from traffic problems, security, highway accidents and speeding tickets and toll
collections, etc. Our system can recognize not just some places number plates but
different types of varying lengths. The system consists of the following important steps or
subsystems: Detecting the speed of the vehicle taking the input image, calculating
threshold value of the binary image, number plate area, Segmentation, Recognition.


## Methodology
1. Speed Detection:   We used two IR sensors which can put at a known distance from each other.
When the car passes through first IR module it will become in high state and
trigger the other one to calculate the time when it reaches the second IR
module. This time taken by the car to pass through two IR modules can be used
to calculate the speed using Arduino code.

2. Serial Event Handler:  If the vehicle is over speeding Arduino will send a “Danger” signal to MATLAB
through a COM Port which makes the serial event handler to open the camera
and to capture the image of the number plate. And number plate can be
recognized using DIGITAL IMAGE PROCESSING TOOLBOX.


## Implementation
The selected image is pre-processed by passing it over gray scale filter and edge
detection is applied to isolate the region of interest, which is the number plate itself. A
gray scale digital image is an image in which each pixel is quantized exclusively the
shades of neutral gray, varying from black at the weakest intensity to white at the
strongest intensity.

The obtained gray image is then binarized, that is, it is converted to
logical matrix by giving the pixel values of 1 for white shade and 0 for black shade.
Possible number plate areas in images are identified by observing sudden changes in
contrast. Remaining areas are filtered out. The best possible number plate location is
found out by comparing width by height factor of actual Indian number plates to the same
factor of plate like areas found by this method. 

The system shows maximum efficiency when the width by height factor is set between 3 and 7. The gray level plate images are
enhanced by applying contrast extension and median filtering techniques. So, the
contrast differences between images and the noises such as dirty regions in white
background of the plate can be eliminated. The main concept behind this is the accuracy
of correlation function.


## Conclusion
An easy technique for vehicle speed detection and number plate recognition is presented.
The images that have been tested were of various backgrounds, illuminations, colors as
well as of different lengths. The experiments proved that the number plates were
recognized more accurately when the images were cropped. Overall, the entire system
that we developed worked convincingly.


## References
• J.S. Chittode and R. Kate, “Number plate recognition using segmentation,”
 International Journal of Engineering Research & Technology, Vol. 1 Issue 9, November- 2012.
 
• H. Peng, F. Long and Z. Chi, “Document image recognition based on template matching of
component block projections,” IEEE transaction on Pattern Analysis and machine Intelligence,
Vol. 25, no. 9, pp 1188-1192, sep 2003.

• Hao Chen, Jisheng Ren, Huachun Tan, Jianqun Wang, “ A novel method for license plate localization”,
4th Proc. of ICIG 2007, pp. 604-609.

• Serkan Ozbay, Ergun Ercelebi, “Automatic vehicle identification by plate recognition”, Proc. of
PWASET, vol. 9, no. 4, 2005, pp. 222-225
