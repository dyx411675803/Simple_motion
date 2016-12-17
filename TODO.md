Because I failed to install Chinese input tool in Ubuntu, I have to type my TODO.md in English.
##Coding thought:
I have known that I need to add my own codes to implement trajectory planning function. 
Considering that new_cmd send command after 5 round (10 seconds), while task_trajectory_generator 
receives the command, it process the paraments and control the axis1's velocity and position.
it's requested to use Trapezoidal Profile to plan the path, which means the axis1's motion includes
3 stages: constant acceleration, uniform motion, and constant deceleration. So I add codes to judge
the stage according to the time that the axis1 has used to move. Once the time was more than the 
time within which the axis1 can reach the final position, cmd_Done will be set TRUE and the loop
will finish.
##What to do next:
####1.Use the communication and task synchronization mechanism that Xenomai provides rather than 
####  global variables to implement communication between tasks.
####2.Try to draw the trajectory graph.
####3.Generate smoother path via S Profile.


