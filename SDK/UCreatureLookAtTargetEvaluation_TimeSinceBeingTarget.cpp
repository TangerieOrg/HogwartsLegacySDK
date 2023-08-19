#include "UCreatureLookAtTargetEvaluation_Float.hpp"
#include "UCreatureLookAtTargetEvaluation_TimeSinceBeingTarget.hpp"
UCreatureLookAtTargetEvaluation_TimeSinceBeingTarget* UCreatureLookAtTargetEvaluation_TimeSinceBeingTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_TimeSinceBeingTarget");
    return (UCreatureLookAtTargetEvaluation_TimeSinceBeingTarget*)res;
}
