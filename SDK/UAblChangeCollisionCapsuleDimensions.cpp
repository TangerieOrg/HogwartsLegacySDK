#include "UAblAbilityTask.hpp"
#include "UAblChangeCollisionCapsuleDimensions.hpp"
UAblChangeCollisionCapsuleDimensions* UAblChangeCollisionCapsuleDimensions::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblChangeCollisionCapsuleDimensions");
    return (UAblChangeCollisionCapsuleDimensions*)res;
}
