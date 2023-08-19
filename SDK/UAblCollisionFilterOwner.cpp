#include "UAblCollisionFilter.hpp"
#include "UAblCollisionFilterOwner.hpp"
UAblCollisionFilterOwner* UAblCollisionFilterOwner::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionFilterOwner");
    return (UAblCollisionFilterOwner*)res;
}
