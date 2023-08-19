#include "EEnemy_Ability.hpp"
#include "EEnemy_InitTreeTimeoutAction.hpp"
#include "FGameplayTag.hpp"
#include "UBTT_Enemy_InitTree.hpp"
#include "UBTTaskNode.hpp"
UBTT_Enemy_InitTree* UBTT_Enemy_InitTree::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTT_Enemy_InitTree");
    return (UBTT_Enemy_InitTree*)res;
}
