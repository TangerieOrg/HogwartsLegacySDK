#include "UEnemyAIAttackData.hpp"
#include "UTrollAISwordAttackData.hpp"
UTrollAISwordAttackData* UTrollAISwordAttackData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TrollAISwordAttackData");
    return (UTrollAISwordAttackData*)res;
}
