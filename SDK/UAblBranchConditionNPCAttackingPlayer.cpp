#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionNPCAttackingPlayer.hpp"
UAblBranchConditionNPCAttackingPlayer* UAblBranchConditionNPCAttackingPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionNPCAttackingPlayer");
    return (UAblBranchConditionNPCAttackingPlayer*)res;
}
