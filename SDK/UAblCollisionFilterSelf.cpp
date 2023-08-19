#include "UAblCollisionFilter.hpp"
#include "UAblCollisionFilterSelf.hpp"
UAblCollisionFilterSelf* UAblCollisionFilterSelf::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionFilterSelf");
    return (UAblCollisionFilterSelf*)res;
}
