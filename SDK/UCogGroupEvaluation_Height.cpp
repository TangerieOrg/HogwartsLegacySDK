#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_Height.hpp"
UCogGroupEvaluation_Height* UCogGroupEvaluation_Height::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_Height");
    return (UCogGroupEvaluation_Height*)res;
}
