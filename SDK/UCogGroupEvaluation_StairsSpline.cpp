#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_StairsSpline.hpp"
UCogGroupEvaluation_StairsSpline* UCogGroupEvaluation_StairsSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_StairsSpline");
    return (UCogGroupEvaluation_StairsSpline*)res;
}
