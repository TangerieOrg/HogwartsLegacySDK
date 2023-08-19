#pragma once
#include <cstdint>
#include "FEnemyAIAttackDistData.hpp"
#include "FEnemyAIAttackDistTableDataContainer.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UEnemyAIAttackBaseData : public UDataAsset {
public:
    float MaxMoveAngle; // 0x30
    bool bOverrideMobilityMoveThreshold; // 0x34
    char pad_35[0x3];
    float MoveDistThreshold; // 0x38
    float MoveDistThresholdNoMansLandScale; // 0x3c
    float MoveDistThresholdNoMansLandScaleCloser; // 0x40
    char pad_44[0x4];
    TArray<FEnemyAIAttackDistTableDataContainer> ApproachDataList; // 0x48
    FEnemyAIAttackDistData AttackData; // 0x58
    static UEnemyAIAttackBaseData* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
