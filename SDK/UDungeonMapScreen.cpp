#include "UDungeonMapScreen.hpp"
#include "UMapDungeon.hpp"
#include "UMapScreenBase.hpp"
UDungeonMapScreen* UDungeonMapScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DungeonMapScreen");
    return (UDungeonMapScreen*)res;
}
