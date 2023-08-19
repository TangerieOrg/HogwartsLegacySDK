#include "UInterface.hpp"
#include "UModdable.hpp"
UModdable* UModdable::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayMods.Moddable");
    return (UModdable*)res;
}
