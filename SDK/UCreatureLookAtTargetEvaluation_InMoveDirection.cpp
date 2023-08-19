#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
#include "UCreatureLookAtTargetEvaluation_InMoveDirection.hpp"
UCreatureLookAtTargetEvaluation_InMoveDirection* UCreatureLookAtTargetEvaluation_InMoveDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_InMoveDirection");
    return (UCreatureLookAtTargetEvaluation_InMoveDirection*)res;
}
