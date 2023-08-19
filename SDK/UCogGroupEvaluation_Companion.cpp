#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_Companion.hpp"
UCogGroupEvaluation_Companion* UCogGroupEvaluation_Companion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_Companion");
    return (UCogGroupEvaluation_Companion*)res;
}
