#include "UCogGroupEvaluation_SecondOrder.hpp"
#include "UObject.hpp"
UCogGroupEvaluation_SecondOrder* UCogGroupEvaluation_SecondOrder::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_SecondOrder");
    return (UCogGroupEvaluation_SecondOrder*)res;
}
