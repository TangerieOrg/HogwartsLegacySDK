#include "EUtilityTrackedErrorType.hpp"
#include "UOptionActorIsTrackedErrorReported.hpp"
#include "UOptionActorIsTrackedErrorReported_Base.hpp"
UOptionActorIsTrackedErrorReported* UOptionActorIsTrackedErrorReported::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionActorIsTrackedErrorReported");
    return (UOptionActorIsTrackedErrorReported*)res;
}
