// Calculator functionality
// Defining pin constants
const int up PROGMEM = 4;
const int presS PROGMEM = 6;
const int down PROGMEM = 5;

// UI layout constants
const byte fromTop PROGMEM = 60;
const byte fromLeft PROGMEM = 4;
const byte boxW PROGMEM = 12;
const byte boxH PROGMEM = 14;
const byte space PROGMEM = 2;

// Grid dimensions
const byte n PROGMEM = 4;
const byte m PROGMEM = 4;

// Position arrays for calculator buttons
int posX[16];
int posY[16];

// Calculator state variables
int temp = 0;
int cx, cy = 0;
float n1 = 0;
float n2 = 0;
float num = 0;
byte digit = 0;
int operation = 0;
int db1, db2, db3 = 0;

// Button layout
char buttons[4][4] = {{'7','4','1','0'},{'8','5','2','='},{'9','6','3','+'},{'*','/','-','C'}};
