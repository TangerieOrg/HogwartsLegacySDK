#pragma once
#include <cstdint>
#include "FEnemyStateData.hpp"
#include "UObjectStateDataContainerBase.hpp"
#pragma pack(push, 1)
class UEnemyStateDataContainer : public UObjectStateDataContainerBase {
public:
    FEnemyStateData Data; // 0x28
    static UEnemyStateDataContainer* StaticClass();
}; // Size: 0x2c8
#pragma pack(pop)
