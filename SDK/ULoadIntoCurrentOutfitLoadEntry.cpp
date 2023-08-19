#include "FOutfitDefinition.hpp"
#include "ULoadEntry.hpp"
#include "ULoadIntoCurrentOutfitLoadEntry.hpp"
ULoadIntoCurrentOutfitLoadEntry* ULoadIntoCurrentOutfitLoadEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.LoadIntoCurrentOutfitLoadEntry");
    return (ULoadIntoCurrentOutfitLoadEntry*)res;
}
