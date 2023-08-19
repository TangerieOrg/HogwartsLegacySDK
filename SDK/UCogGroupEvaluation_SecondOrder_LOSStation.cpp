#include "UCogGroupEvaluation_SecondOrder.hpp"
#include "UCogGroupEvaluation_SecondOrder_LOSStation.hpp"
UCogGroupEvaluation_SecondOrder_LOSStation* UCogGroupEvaluation_SecondOrder_LOSStation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_SecondOrder_LOSStation");
    return (UCogGroupEvaluation_SecondOrder_LOSStation*)res;
}
