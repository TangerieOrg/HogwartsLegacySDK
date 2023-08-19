#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class UMultiFX2_NiagraSpawnInfoBase;
class UMultiFX2_NiagraPropertyBase;
#pragma pack(push, 1)
class UMultiFX2_NiagraBase : public UMultiFX2_Filtered {
public:
    UMultiFX2_NiagraSpawnInfoBase* SpawnInfo; // 0x68
    TArray<UMultiFX2_NiagraPropertyBase*> NiagaraProperties; // 0x70
    static UMultiFX2_NiagraBase* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
