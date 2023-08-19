#include "UModExtension.hpp"
#include "UObject.hpp"
UModExtension* UModExtension::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayMods.ModExtension");
    return (UModExtension*)res;
}
