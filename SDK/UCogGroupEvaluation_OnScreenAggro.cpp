#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_OnScreenAggro.hpp"
UCogGroupEvaluation_OnScreenAggro* UCogGroupEvaluation_OnScreenAggro::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_OnScreenAggro");
    return (UCogGroupEvaluation_OnScreenAggro*)res;
}
