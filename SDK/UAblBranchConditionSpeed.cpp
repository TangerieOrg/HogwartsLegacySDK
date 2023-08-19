#include "ESpeedInclusivity\Type.hpp"
#include "ESpeedType\Type.hpp"
#include "FVector2D.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionSpeed.hpp"
UAblBranchConditionSpeed* UAblBranchConditionSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionSpeed");
    return (UAblBranchConditionSpeed*)res;
}
