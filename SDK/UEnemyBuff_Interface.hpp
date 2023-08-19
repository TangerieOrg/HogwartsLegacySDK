#pragma once
#include <cstdint>
#include "EEnemyBuffTypeEnum.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UEnemyBuff_Interface : public UInterface {
public:
    static UEnemyBuff_Interface* StaticClass();
    bool UpdateBuffEmitterLocationAndRotFx(FVector Location, FRotator Rotation, EEnemyBuffTypeEnum BuffType);
    bool DestroyBuffEmitterFx(EEnemyBuffTypeEnum BuffType);
    bool DeactivateBuffEmitterFx(EEnemyBuffTypeEnum BuffType);
    bool CreateBuffEmitterFx(EEnemyBuffTypeEnum BuffType, FVector Location);
}; // Size: 0x28
#pragma pack(pop)
