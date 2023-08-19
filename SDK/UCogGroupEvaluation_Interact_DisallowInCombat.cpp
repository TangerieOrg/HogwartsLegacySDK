#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_Interact_DisallowInCombat.hpp"
UCogGroupEvaluation_Interact_DisallowInCombat* UCogGroupEvaluation_Interact_DisallowInCombat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupEvaluation_Interact_DisallowInCombat");
    return (UCogGroupEvaluation_Interact_DisallowInCombat*)res;
}
