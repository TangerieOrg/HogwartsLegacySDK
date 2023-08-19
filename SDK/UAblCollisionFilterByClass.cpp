#include "UAblCollisionFilter.hpp"
#include "UAblCollisionFilterByClass.hpp"
#include "UClass.hpp"
UAblCollisionFilterByClass* UAblCollisionFilterByClass::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionFilterByClass");
    return (UAblCollisionFilterByClass*)res;
}
