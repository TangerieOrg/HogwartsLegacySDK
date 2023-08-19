#include "UCreatureLookAtTargetEvaluation.hpp"
#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
UCreatureLookAtTargetEvaluation_Bool* UCreatureLookAtTargetEvaluation_Bool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_Bool");
    return (UCreatureLookAtTargetEvaluation_Bool*)res;
}
