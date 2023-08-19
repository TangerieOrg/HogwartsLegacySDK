#include "UCreatureLookAtTargetEvaluation_Float.hpp"
#include "UCreatureLookAtTargetEvaluation_Speed.hpp"
UCreatureLookAtTargetEvaluation_Speed* UCreatureLookAtTargetEvaluation_Speed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_Speed");
    return (UCreatureLookAtTargetEvaluation_Speed*)res;
}
