#include "UAblBranchCondition.hpp"
#include "UAblBranchCreatureContinueInteraction.hpp"
UAblBranchCreatureContinueInteraction* UAblBranchCreatureContinueInteraction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchCreatureContinueInteraction");
    return (UAblBranchCreatureContinueInteraction*)res;
}
