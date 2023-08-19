#include "UOptionActorBlackboardBool.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorBlackboardBool* UOptionActorBlackboardBool::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionActorBlackboardBool");
    return (UOptionActorBlackboardBool*)res;
}
