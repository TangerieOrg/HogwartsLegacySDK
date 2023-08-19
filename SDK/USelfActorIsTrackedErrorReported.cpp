#include "EUtilityTrackedErrorType.hpp"
#include "USelfActorIsTrackedErrorReported.hpp"
#include "USelfActorIsTrackedErrorReported_Base.hpp"
USelfActorIsTrackedErrorReported* USelfActorIsTrackedErrorReported::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfActorIsTrackedErrorReported");
    return (USelfActorIsTrackedErrorReported*)res;
}
