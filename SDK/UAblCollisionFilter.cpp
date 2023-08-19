#include "UAblCollisionFilter.hpp"
#include "UObject.hpp"
UAblCollisionFilter* UAblCollisionFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionFilter");
    return (UAblCollisionFilter*)res;
}
