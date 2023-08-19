#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_Health.hpp"
UCogGroupEvaluation_Health* UCogGroupEvaluation_Health::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_Health");
    return (UCogGroupEvaluation_Health*)res;
}
