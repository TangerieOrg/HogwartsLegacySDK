#include "UAblCollisionFilter.hpp"
#include "UAblCollisionFilterMaxResults.hpp"
UAblCollisionFilterMaxResults* UAblCollisionFilterMaxResults::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionFilterMaxResults");
    return (UAblCollisionFilterMaxResults*)res;
}
