#include "UCreatureLookAtTargetEvaluation.hpp"
#include "UObject.hpp"
UCreatureLookAtTargetEvaluation* UCreatureLookAtTargetEvaluation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation");
    return (UCreatureLookAtTargetEvaluation*)res;
}
