#include "colors.inc"
//-------------------------------------------------------------------------\
//---------------------------Light Source----------------------------------\
//-------------------------------------------------------------------------\

//box {
//<-10, -10, 80>,
//<10.5, 10.5, 85>
//texture { pigment { Yellow } }
//}
//-------------------------------------------------------------------------\
//------------------------------Obstacles----------------------------------\
//-------------------------------------------------------------------------\

box {
<5, 5, 0>,
<15, 15, 50>
texture { pigment { rgbt<0, 0, 1, 0> } }
}
box {
<-20, 10, 0>,
<-10, 20, 60>
texture { pigment { rgbt<0, 0, 1, 0> } }
}
box {
<-18, -18, 0>,
<-3, -3, 30>
texture { pigment { rgbt<0, 0, 1, 0> } }
}
box {
<3, -13, 0>,
<13, -3, 70>
texture { pigment { rgbt<0, 0, 1, 0> } }
}