#include "EGenderEnum.hpp"
#include "UCustomizableCharacterDefinition.hpp"
#include "UDataAsset.hpp"
#include "UObject.hpp"
UCustomizableCharacterDefinition* UCustomizableCharacterDefinition::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.CustomizableCharacterDefinition");
    return (UCustomizableCharacterDefinition*)res;
}
