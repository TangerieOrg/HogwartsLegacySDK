#include "UClass.hpp"
#include "UFoliageType.hpp"
#include "UFoliageType_Actor.hpp"
UFoliageType_Actor* UFoliageType_Actor::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.FoliageType_Actor");
    return (UFoliageType_Actor*)res;
}
