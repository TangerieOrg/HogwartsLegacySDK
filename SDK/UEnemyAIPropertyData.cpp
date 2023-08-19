#include "EEEnemyAISizeCategory.hpp"
#include "UDataAsset.hpp"
#include "UEnemyAIPathCheckPropertyData.hpp"
#include "UEnemyAIPropertyData.hpp"
UEnemyAIPropertyData* UEnemyAIPropertyData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIPropertyData");
    return (UEnemyAIPropertyData*)res;
}
