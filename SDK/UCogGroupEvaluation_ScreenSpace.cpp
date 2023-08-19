#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_ScreenSpace.hpp"
UCogGroupEvaluation_ScreenSpace* UCogGroupEvaluation_ScreenSpace::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_ScreenSpace");
    return (UCogGroupEvaluation_ScreenSpace*)res;
}
