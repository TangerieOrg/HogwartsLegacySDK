#include "UCreatureLookAtTargetEvaluation_Float.hpp"
#include "UCreatureLookAtTargetEvaluation_Heading.hpp"
UCreatureLookAtTargetEvaluation_Heading* UCreatureLookAtTargetEvaluation_Heading::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_Heading");
    return (UCreatureLookAtTargetEvaluation_Heading*)res;
}
