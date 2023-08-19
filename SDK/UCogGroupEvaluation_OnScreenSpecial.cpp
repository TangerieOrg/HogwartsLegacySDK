#include "UCogGroupEvaluation_OnScreen.hpp"
#include "UCogGroupEvaluation_OnScreenSpecial.hpp"
UCogGroupEvaluation_OnScreenSpecial* UCogGroupEvaluation_OnScreenSpecial::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_OnScreenSpecial");
    return (UCogGroupEvaluation_OnScreenSpecial*)res;
}
