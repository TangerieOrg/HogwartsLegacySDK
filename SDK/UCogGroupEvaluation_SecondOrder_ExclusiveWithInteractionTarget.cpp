#include "UCogGroupEvaluation_SecondOrder.hpp"
#include "UCogGroupEvaluation_SecondOrder_ExclusiveWithInteractionTarget.hpp"
UCogGroupEvaluation_SecondOrder_ExclusiveWithInteractionTarget* UCogGroupEvaluation_SecondOrder_ExclusiveWithInteractionTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_SecondOrder_ExclusiveWithInteractionTarget");
    return (UCogGroupEvaluation_SecondOrder_ExclusiveWithInteractionTarget*)res;
}
