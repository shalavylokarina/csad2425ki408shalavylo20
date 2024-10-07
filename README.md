# Details about repository:
This is a repository for performing laboratory work on the subject "Computer systems automated design". The main branch is develop. 
Branches named "feature/develop/<task1>" are created to perform laboratory work.
Here will be the game rock paper scissors with communication schema SW(client) <-> UART <-> HW(server)

# General requirements:
  ### The root folder should have next directories if required:
1) ***3party - for all third party tools***;
2) ***lib - for libs***;
3) ***build - for generated code, binaries…***;
4) ***ci - for continuous integration scripts***;
5) ***media - for images and video***;
6) ***config - for configuration files***;
   
MVC is the most common architecture design. But the student can use another approach. It should have strong arguments about props and cons for the used approach.

#### Must be used:

  ∙ *Patterns*;
  
  ∙ *Data driven approach*
  
## Develop area:

 ∙ Hardware (HW) and Desktop software (SW)
 
# Game requirements:

The simple games will be used as projects for development (see table#1). Configuration and state saving should be done using config format from table#1. Server part should execute on HW. SW as a client.

# Menu:
Game should have a menu that allows to configure parameters:
### Play modes:

  ∙ Man vs AI
  
  ∙ Man vs Man
  
  ∙ AI vs AI:
  
      ○ Random move;
      
      ○ Win strategy;

### Actions:

1)**New8**;

2)**Save**;

3)**Load**;

# Tasks by student:
1) **Student number:** 20
2) **Game:** rock paper scissors
3) **Config format:** JSON
