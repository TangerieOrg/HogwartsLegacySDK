#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
#include "UCreatureLookAtTargetEvaluation_IsChild.hpp"
UCreatureLookAtTargetEvaluation_IsChild* UCreatureLookAtTargetEvaluation_IsChild::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_IsChild");
    return (UCreatureLookAtTargetEvaluation_IsChild*)res;
}
