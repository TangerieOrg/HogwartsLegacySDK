#include "UQualifierConsideration.hpp"
#include "USelfPitchAngleConsideration.hpp"
USelfPitchAngleConsideration* USelfPitchAngleConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfPitchAngleConsideration");
    return (USelfPitchAngleConsideration*)res;
}
