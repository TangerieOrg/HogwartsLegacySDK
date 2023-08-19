#include "UCogGroupEvaluation.hpp"
#include "UObject.hpp"
UCogGroupEvaluation* UCogGroupEvaluation::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation");
    return (UCogGroupEvaluation*)res;
}
