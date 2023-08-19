#include "UCreatureLookAtTargetEvaluation_Distance2D.hpp"
#include "UCreatureLookAtTargetEvaluation_Float.hpp"
UCreatureLookAtTargetEvaluation_Distance2D* UCreatureLookAtTargetEvaluation_Distance2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_Distance2D");
    return (UCreatureLookAtTargetEvaluation_Distance2D*)res;
}
