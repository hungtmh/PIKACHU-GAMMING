#include "Image.h"

using namespace std;

void displayLogo(int x, int y)
{
    x = 20;
    y = 3;
    TextColor(6);
    gotoXY(x, y);
    Sleep(150);
    std::cout << "______ _ _              _            ___  ___      _       _      _";
    gotoXY(x, ++y);
    std::cout << "| ___ (_) |            | |           |  |/  |     | |     | |    (_)"; gotoXY(x, ++y); Sleep(150);
    std::cout << "| |_/ /_| | ____ _  ___| |__  _   _  | .  . | __ _| |_ ___| |___  _  _      _   ___ "; gotoXY(x, ++y); Sleep(150);
    std::cout << "|  __/| | |/ / _` |/ __| '_  | | | | | |-/| |/ _` | __/ __| '_  || || |\\\\  | | /___|  "; gotoXY(x, ++y); TextColor(7); Sleep(150);
    std::cout << "| |   | |   < (_| | (__| | | | |_| | | |  | | (_| | || (__| | | || || | \\\\ | |/ /  __"; gotoXY(x, ++y); Sleep(150);
    std::cout << "|_|   |_|_||_|__,_||___|_| |_|___,_| |_|  |_/|__,_| |_|___|_| |_||_||_|  \\\\|_|\\_\\__|     "; gotoXY(x, ++y); Sleep(150);
}

void pikachuMenu(int x, int y)
{
    TextColor(YELLOW);
    gotoXY(x, y);
    std::cout << "`;-.          ___," << endl; gotoXY(x, ++y);
    std::cout << "  `.`\\_..._//`.-'' " << endl; gotoXY(x, ++y);
    std::cout << "    \\       //      ," << endl; gotoXY(x, ++y);
    std::cout << "    /()   () \\    .' `-._" << endl; gotoXY(x, ++y);
    std::cout << "   |)   .   ()\\  //   _.'" << endl; gotoXY(x, ++y);
    std::cout << "   \\  -'-    ,; '. <" << endl; gotoXY(x, ++y);
    std::cout << "    ;.__     ,;|   > \n"; gotoXY(x, ++y);
    std::cout << "   // ,    // ,  |.-'.-'" << endl; gotoXY(x, ++y);
    std::cout << "  (_//    (_// ,;|.<`" << endl; gotoXY(x, ++y);
    std::cout << "    \\   ,     ;-`" << endl; gotoXY(x, ++y);
    std::cout << "     >   \\   //" << endl; gotoXY(x, ++y);
    std::cout << "    (_,-'`> .'" << endl; gotoXY(x, ++y);
    std::cout << "         (_,'" << endl; gotoXY(x, ++y);
}

void displayConrua(int x, int y)
{
    TextColor(3);
    gotoXY(x, y);
    cout << "     __                                _.--'\"7\n"; gotoXY(x, ++y);
    cout << "    `. `--._                        ,-'_,-  ,'\n"; gotoXY(x, ++y);
    cout << "     ,'  `-.`-.                   /' .'    ,|\n"; gotoXY(x, ++y);
    cout << "     `.     `. `-     __...___   /  /     - j\n"; gotoXY(x, ++y);
    cout << "       `.     `  `.-\"\"        \" .  /       /\n"; gotoXY(x, ++y);
    cout << "         \\     /                ` /       /\n"; gotoXY(x, ++y);
    cout << "          \\   /                         ,'\n"; gotoXY(x, ++y);
    cout << "          '._'_               ,-'       |\n"; gotoXY(x, ++y);
    cout << "             | \\            ,|  |   ...-'\n"; gotoXY(x, ++y);
    cout << "             || `         ,|_|  |   | `             _..__\n"; gotoXY(x, ++y);
    cout << "            /|| |          | |  |   |  \\  _,_    .-\"     `-.\n"; gotoXY(x, ++y);
    cout << "           | '.-'          |_|_,' __!  | /|  |  /           \\\n"; gotoXY(x, ++y);
    cout << "   ,-...___ .=                  ._..'  /`.| ,`,.      _,.._ |\n"; gotoXY(x, ++y);
    cout << "  |   |,.. \\     '  `'        ____,  ,' `--','  |    /      |\n"; gotoXY(x, ++y);
    cout << " ,`-..'  _)  .`-..___,---'_...._/  .'      '-...'   |      /\n"; gotoXY(x, ++y);
    cout << "'.__' \"\"'      `.,------'\"'      ,/            ,     `.._.' `.\n"; gotoXY(x, ++y);
    cout << "  `.             | `--........,-'.            .         \\     \\\n"; gotoXY(x, ++y);
    cout << "    `-.          .   '.,--\"\"     |           ,'\\        |      .\n"; gotoXY(x, ++y);
    cout << "       `.       /     |          L          ,\\  .       |  .,---.\n"; gotoXY(x, ++y);
    cout << "         `._   '      |           \\        /  .  L      | /   __ `.\n"; gotoXY(x, ++y);
    cout << "            `-.       |            `._   ,    l   .    j |   '  `. .\n"; gotoXY(x, ++y);
    cout << "              |       |               `\"' |  .    |   /  '      .' |\n"; gotoXY(x, ++y);
    cout << "              |       |                   j  |    |  /  , `.__,'   |\n"; gotoXY(x, ++y);
    cout << "              `.      L                 _.   `    j ,'-'           |\n"; gotoXY(x, ++y);
    cout << "               |`\"---..\\._______,...,--' |   |   /|'      /        j\n"; gotoXY(x, ++y);
    cout << "               '       |                 |   .  / |      '        /\n"; gotoXY(x, ++y);
    cout << "                .      .              ____L   \\'  j    -',       /\n"; gotoXY(x, ++y);
    cout << "               / `.     .          _,\"     \\   | /  ,-','      ,'\n"; gotoXY(x, ++y);
    cout << "              /    `.  ,'`-._     /         \\  i'.,'_,'      .'\n"; gotoXY(x, ++y);
    cout << "             .       `.      `-..'             |_,-'      _.'\n"; gotoXY(x, ++y);
    cout << "             |         `._      |            ''/      _,-'\n"; gotoXY(x, ++y);
    cout << "             |            '-..._\\             `__,.--'\n"; gotoXY(x, ++y);
    cout << "            ,'           ,' `-.._`.            .\n"; gotoXY(x, ++y);
    cout << "           `.    __      |       \"'`.          |\n"; gotoXY(x, ++y);
    cout << "             `-\"'  `\"\"\"\"'            7         `.\n"; gotoXY(x, ++y);
    cout << "                                    `---'--.,'\"`' mh\n"; gotoXY(x, ++y);
}