#include "EAblCollisionBranchDetectionType.hpp"
#include "UAblCollisionBranchCondition.hpp"
#include "UAblTaskCondition.hpp"
#include "UClass.hpp"
UAblCollisionBranchCondition* UAblCollisionBranchCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCollisionBranchCondition");
    return (UAblCollisionBranchCondition*)res;
}
