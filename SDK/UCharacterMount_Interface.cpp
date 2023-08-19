#include "UCharacterMount_Interface.hpp"
#include "UInterface.hpp"
UCharacterMount_Interface* UCharacterMount_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CharacterMount_Interface");
    return (UCharacterMount_Interface*)res;
}
void UCharacterMount_Interface::SetClothTargetsStartDelegate() {}
void UCharacterMount_Interface::SetClothTargetsEndDelegate() {}
