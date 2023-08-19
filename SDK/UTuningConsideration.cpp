#include "UQualifierConsideration.hpp"
#include "UTuningConsideration.hpp"
UTuningConsideration* UTuningConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.TuningConsideration");
    return (UTuningConsideration*)res;
}
