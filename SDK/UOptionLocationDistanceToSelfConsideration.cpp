#include "UOptionLocationDistanceToSelfConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionLocationDistanceToSelfConsideration* UOptionLocationDistanceToSelfConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionLocationDistanceToSelfConsideration");
    return (UOptionLocationDistanceToSelfConsideration*)res;
}
