using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:
extern motor LeftFront;
extern motor LeftBack;
extern motor LeftTop;
extern motor Rightront;
extern motor RightBack;
extern motor RightTop;
extern motor intake1;
extern motor intake2;
extern motor intakemid;
extern controller Controller;
extern pneumatics did;
extern pneumatics tongue;
void  vexcodeInit( void );