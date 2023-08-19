#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_Ally.hpp"
UCogGroupEvaluation_Ally* UCogGroupEvaluation_Ally::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_Ally");
    return (UCogGroupEvaluation_Ally*)res;
}
