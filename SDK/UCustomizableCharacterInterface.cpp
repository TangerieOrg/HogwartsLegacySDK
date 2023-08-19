#include "UCustomizableCharacterInterface.hpp"
#include "UInterface.hpp"
UCustomizableCharacterInterface* UCustomizableCharacterInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.CustomizableCharacterInterface");
    return (UCustomizableCharacterInterface*)res;
}
