#include "UCreatureLookAtTargetEvaluation_Bool.hpp"
#include "UCreatureLookAtTargetEvaluation_MatchingSubtypes.hpp"
UCreatureLookAtTargetEvaluation_MatchingSubtypes* UCreatureLookAtTargetEvaluation_MatchingSubtypes::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluation_MatchingSubtypes");
    return (UCreatureLookAtTargetEvaluation_MatchingSubtypes*)res;
}
