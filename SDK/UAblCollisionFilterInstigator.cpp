#include "UAblCollisionFilter.hpp"
#include "UAblCollisionFilterInstigator.hpp"
UAblCollisionFilterInstigator* UAblCollisionFilterInstigator::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionFilterInstigator");
    return (UAblCollisionFilterInstigator*)res;
}
