#include "UMenuReaderTestScreen.hpp"
#include "UScreen.hpp"
UMenuReaderTestScreen* UMenuReaderTestScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MenuReaderTestScreen");
    return (UMenuReaderTestScreen*)res;
}
