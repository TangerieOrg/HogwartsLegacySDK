#include "UCreatureLookAtTargetEvaluation_FOV.hpp"
#include "UCreatureLookAtTargetEvaluation_Float.hpp"
UCreatureLookAtTargetEvaluation_FOV* UCreatureLookAtTargetEvaluation_FOV::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_FOV");
    return (UCreatureLookAtTargetEvaluation_FOV*)res;
}
