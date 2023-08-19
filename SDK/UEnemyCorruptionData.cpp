#include "FMaterialParameterSetter.hpp"
#include "FMultiFXWrapper.hpp"
#include "UDataAsset.hpp"
#include "UEnemyCorruptionData.hpp"
UEnemyCorruptionData* UEnemyCorruptionData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyCorruptionData");
    return (UEnemyCorruptionData*)res;
}
