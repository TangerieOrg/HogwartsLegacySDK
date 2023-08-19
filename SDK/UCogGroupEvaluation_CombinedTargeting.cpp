#include "UCogGroupEvaluation_CombinedBase.hpp"
#include "UCogGroupEvaluation_CombinedTargeting.hpp"
UCogGroupEvaluation_CombinedTargeting* UCogGroupEvaluation_CombinedTargeting::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_CombinedTargeting");
    return (UCogGroupEvaluation_CombinedTargeting*)res;
}
