#include "UCreatureLookAtTargetEvaluation.hpp"
#include "UCreatureLookAtTargetEvaluationConfig.hpp"
#include "UDataAsset.hpp"
UCreatureLookAtTargetEvaluationConfig* UCreatureLookAtTargetEvaluationConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureLookAtTargetEvaluationConfig");
    return (UCreatureLookAtTargetEvaluationConfig*)res;
}
