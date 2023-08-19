#include "UCreatureLookAtTargetEvaluation_Float.hpp"
#include "UCreatureLookAtTargetEvaluation_TimePerceived.hpp"
UCreatureLookAtTargetEvaluation_TimePerceived* UCreatureLookAtTargetEvaluation_TimePerceived::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_TimePerceived");
    return (UCreatureLookAtTargetEvaluation_TimePerceived*)res;
}
