#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_TargetFOV.hpp"
UCogGroupEvaluation_TargetFOV* UCogGroupEvaluation_TargetFOV::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_TargetFOV");
    return (UCogGroupEvaluation_TargetFOV*)res;
}
