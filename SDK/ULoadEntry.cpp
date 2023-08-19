#include "ULoadEntry.hpp"
#include "UObject.hpp"
ULoadEntry* ULoadEntry::StaticClass() {
    static auto res = find_uobject("Class /Script/CustomizableCharacter.LoadEntry");
    return (ULoadEntry*)res;
}
