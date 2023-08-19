#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_OnScreenSticky.hpp"
UCogGroupEvaluation_OnScreenSticky* UCogGroupEvaluation_OnScreenSticky::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_OnScreenSticky");
    return (UCogGroupEvaluation_OnScreenSticky*)res;
}
