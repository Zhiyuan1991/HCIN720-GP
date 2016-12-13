#This is the HCIN720 Group Project (Tuly & Zhiyuan)

##Description
We made a social media timer. Users start with inputting the maximum time they want to spend on social media today. Then we will get data using Javascript from the API of "TimeDoctor", a application for productivity, and present an ambient display from our fabric shape changing machine.

The ambient display machine is built by 3D printing, laser cutting and some handy work like stitching. The machine includes a fabric frame, 3D printing components, glass planes, servos and a photon. The photon is used to get data from the Javascript online and to control the servos. The machine has three servos. One for linear motion, one for big circle rotation and one for small circle rotation. According to the time that users spent on social media, the center of the fabric will be pulled inside and two circles will be appeared around the center. Users can get a idea of the time amount they spent on social media by glancing at how deep the fabric center is and how much the circle rotated on the ambient display machine. 

The design and building process is as fellow.
First we designed and 3D printed this linear actuator base to connect to connect the three servos together. 

![][1694]

Next we designed and 3D printed this connector to connect the photon, the big servo and the machine holder together, so it can hang on the pegboard. 

![][1696]
![][1698]

Then we laser cut the glass planes that will be stitched to fabric. We also create space on the glass plane to let the gear bar go through. 

![][1700]

Then we laser cut a glass frame for the fabric and 3D printed its holders and stitched them together. We also stitched the main servos part to that in this step.

![][1708]

Finally we can hang it on a peg board and to see how it work.

![][1710]
![][1711]

##Information
We have discussed information like traffic flow, popular fashion, and productivity. Among them we think productivity is the most interesting and useful information. So we plan to display the amount of poor used time, like time spent on social media. Then we found the a productivity application "TimeDoctor" and successfully get the data from its API.

##Display Methods
At first we wanted to applied uniMorph. But after doing some research we found that the experiment of uniMorph is time and money consumed so we give up this plan and switch to using servo to change the fabric shape.

##Justification
We made a fully-functional fabric shape changing ambient display system. We did experiments on the extension level of different types of fabric and the estimation of servo's torque. We fully achieved our plan that we can rotate a part of the fabric in x-y plane to generate a twist circle and also pull the center of the fabric in z axis to create a hole on the fabric frame. Combined this two operation on fabric shape, we create interesting ambient display according to the data and it's easy for users to get a general idea of that data just by glancing at our display machine.

##Results
See how it works on Youtube.  https://youtu.be/NDni8YMzGxU

For the presentation of an example, in the video, the machine was driven by a dummy data that increases the time spent on social media for 5 mins every 5 seconds and maximum time is 30 mins. The machine went back to the original shape after the time hit the maximum. By doing this, we just want to show that the shape changing is invertible.

[1694]:https://github.com/Zhiyuan1991/HCIN720-GP/raw/master/images/IMG_1694.JPG
[1696]:https://github.com/Zhiyuan1991/HCIN720-GP/raw/master/images/IMG_1696.JPG
[1698]:https://github.com/Zhiyuan1991/HCIN720-GP/raw/master/images/IMG_1698.JPG
[1700]:https://github.com/Zhiyuan1991/HCIN720-GP/raw/master/images/IMG_1700.JPG
[1708]:https://github.com/Zhiyuan1991/HCIN720-GP/raw/master/images/IMG_1708.JPG
[1710]:https://github.com/Zhiyuan1991/HCIN720-GP/raw/master/images/IMG_1710.JPG
[1711]:https://github.com/Zhiyuan1991/HCIN720-GP/raw/master/images/IMG_1711.JPG