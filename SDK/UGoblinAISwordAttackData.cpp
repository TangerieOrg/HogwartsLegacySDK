#include "UEnemyAIAttackData.hpp"
#include "UGoblinAISwordAttackData.hpp"
UGoblinAISwordAttackData* UGoblinAISwordAttackData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.GoblinAISwordAttackData");
    return (UGoblinAISwordAttackData*)res;
}
