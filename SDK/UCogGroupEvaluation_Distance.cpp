#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_Distance.hpp"
UCogGroupEvaluation_Distance* UCogGroupEvaluation_Distance::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_Distance");
    return (UCogGroupEvaluation_Distance*)res;
}
