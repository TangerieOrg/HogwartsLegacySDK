#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
#include "UCreatureLookAtTargetEvaluation_IsParent.hpp"
UCreatureLookAtTargetEvaluation_IsParent* UCreatureLookAtTargetEvaluation_IsParent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_IsParent");
    return (UCreatureLookAtTargetEvaluation_IsParent*)res;
}
