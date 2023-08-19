#include "UOptionLocationSightDistanceConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionLocationSightDistanceConsideration* UOptionLocationSightDistanceConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionLocationSightDistanceConsideration");
    return (UOptionLocationSightDistanceConsideration*)res;
}
