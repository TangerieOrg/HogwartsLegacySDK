#include "FVector2D.hpp"
#include "UCreatureLookAtTargetEvaluation.hpp"
#include "UCreatureLookAtTargetEvaluation_Float.hpp"
UCreatureLookAtTargetEvaluation_Float* UCreatureLookAtTargetEvaluation_Float::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_Float");
    return (UCreatureLookAtTargetEvaluation_Float*)res;
}
