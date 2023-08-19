#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_OnScreen.hpp"
UCogGroupEvaluation_OnScreen* UCogGroupEvaluation_OnScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_OnScreen");
    return (UCogGroupEvaluation_OnScreen*)res;
}
