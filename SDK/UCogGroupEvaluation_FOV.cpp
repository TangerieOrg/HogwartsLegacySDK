#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_FOV.hpp"
UCogGroupEvaluation_FOV* UCogGroupEvaluation_FOV::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_FOV");
    return (UCogGroupEvaluation_FOV*)res;
}
