#include "UEnemy_AttackExtraData.hpp"
#include "USpiderSpawn_AttackExtraData.hpp"
USpiderSpawn_AttackExtraData* USpiderSpawn_AttackExtraData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderSpawn_AttackExtraData");
    return (USpiderSpawn_AttackExtraData*)res;
}
