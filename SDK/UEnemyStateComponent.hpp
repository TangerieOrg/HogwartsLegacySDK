#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "FEnemyStateData.hpp"
#include "UBaseStateComponent.hpp"
#pragma pack(push, 1)
class UEnemyStateComponent : public UBaseStateComponent {
public:
    FEnemyStateData EnemyStateData; // 0x5a0
    FDbSingleColumnInfo TeamAsset; // 0x840
    static UEnemyStateComponent* StaticClass();
}; // Size: 0x8c8
#pragma pack(pop)
