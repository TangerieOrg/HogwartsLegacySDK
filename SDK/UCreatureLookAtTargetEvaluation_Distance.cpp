#include "UCreatureLookAtTargetEvaluation_Distance.hpp"
#include "UCreatureLookAtTargetEvaluation_Float.hpp"
UCreatureLookAtTargetEvaluation_Distance* UCreatureLookAtTargetEvaluation_Distance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_Distance");
    return (UCreatureLookAtTargetEvaluation_Distance*)res;
}
