#include "UQualifierConsideration.hpp"
#include "USelfBlackboardBool.hpp"
USelfBlackboardBool* USelfBlackboardBool::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfBlackboardBool");
    return (USelfBlackboardBool*)res;
}
