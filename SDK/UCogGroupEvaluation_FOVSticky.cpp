#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_FOVSticky.hpp"
UCogGroupEvaluation_FOVSticky* UCogGroupEvaluation_FOVSticky::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_FOVSticky");
    return (UCogGroupEvaluation_FOVSticky*)res;
}
