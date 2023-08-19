#include "ULoadEntry.hpp"
#include "USetCurrentOutfitLoadEntry.hpp"
USetCurrentOutfitLoadEntry* USetCurrentOutfitLoadEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.SetCurrentOutfitLoadEntry");
    return (USetCurrentOutfitLoadEntry*)res;
}
