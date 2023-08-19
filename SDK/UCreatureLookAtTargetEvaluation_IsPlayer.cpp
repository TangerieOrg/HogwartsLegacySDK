#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
#include "UCreatureLookAtTargetEvaluation_IsPlayer.hpp"
UCreatureLookAtTargetEvaluation_IsPlayer* UCreatureLookAtTargetEvaluation_IsPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_IsPlayer");
    return (UCreatureLookAtTargetEvaluation_IsPlayer*)res;
}
