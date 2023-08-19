#include "UCreatureLookAtTargetEvaluation_Float.hpp"
#include "UCreatureLookAtTargetEvaluation_TimeAsTarget.hpp"
UCreatureLookAtTargetEvaluation_TimeAsTarget* UCreatureLookAtTargetEvaluation_TimeAsTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_TimeAsTarget");
    return (UCreatureLookAtTargetEvaluation_TimeAsTarget*)res;
}
