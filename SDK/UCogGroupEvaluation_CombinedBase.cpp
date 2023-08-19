#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_CombinedBase.hpp"
UCogGroupEvaluation_CombinedBase* UCogGroupEvaluation_CombinedBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_CombinedBase");
    return (UCogGroupEvaluation_CombinedBase*)res;
}
