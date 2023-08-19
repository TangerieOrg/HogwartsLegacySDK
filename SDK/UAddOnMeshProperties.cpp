#include "UAddOnMeshProperties.hpp"
#include "UCharacterPiece.hpp"
#include "UObject.hpp"
UAddOnMeshProperties* UAddOnMeshProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.AddOnMeshProperties");
    return (UAddOnMeshProperties*)res;
}
