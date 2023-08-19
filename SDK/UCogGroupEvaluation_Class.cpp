#include "UClass.hpp"
#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_Class.hpp"
UCogGroupEvaluation_Class* UCogGroupEvaluation_Class::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupEvaluation_Class");
    return (UCogGroupEvaluation_Class*)res;
}
