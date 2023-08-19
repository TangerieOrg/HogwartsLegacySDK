#include "UAblCollisionFilter.hpp"
#include "UAblCollisionFilterCustom.hpp"
UAblCollisionFilterCustom* UAblCollisionFilterCustom::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionFilterCustom");
    return (UAblCollisionFilterCustom*)res;
}
