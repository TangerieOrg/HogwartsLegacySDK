#include "UObject.hpp"
#include "UQualifierConsideration.hpp"
UQualifierConsideration* UQualifierConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.QualifierConsideration");
    return (UQualifierConsideration*)res;
}
