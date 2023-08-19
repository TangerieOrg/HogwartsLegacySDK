#include "UOptionActorIsTrackedErrorReported_Base.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsTrackedErrorReported_Base* UOptionActorIsTrackedErrorReported_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionActorIsTrackedErrorReported_Base");
    return (UOptionActorIsTrackedErrorReported_Base*)res;
}
