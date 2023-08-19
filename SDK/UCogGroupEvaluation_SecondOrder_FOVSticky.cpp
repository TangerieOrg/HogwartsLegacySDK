#include "UCogGroupEvaluation_SecondOrder.hpp"
#include "UCogGroupEvaluation_SecondOrder_FOVSticky.hpp"
UCogGroupEvaluation_SecondOrder_FOVSticky* UCogGroupEvaluation_SecondOrder_FOVSticky::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_SecondOrder_FOVSticky");
    return (UCogGroupEvaluation_SecondOrder_FOVSticky*)res;
}
