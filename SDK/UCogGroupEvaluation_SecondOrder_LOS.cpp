#include "UCogGroupEvaluation_SecondOrder.hpp"
#include "UCogGroupEvaluation_SecondOrder_LOS.hpp"
UCogGroupEvaluation_SecondOrder_LOS* UCogGroupEvaluation_SecondOrder_LOS::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_SecondOrder_LOS");
    return (UCogGroupEvaluation_SecondOrder_LOS*)res;
}
