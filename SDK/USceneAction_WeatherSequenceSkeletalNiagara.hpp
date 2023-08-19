#pragma once
#include <cstdint>
#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnMultiSkeletalInfo.hpp"
#include "USceneAction_WeatherSequenceNiagara.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_WeatherSequenceSkeletalNiagara : public USceneAction_WeatherSequenceNiagara {
public:
    UActorProvider* Actor; // 0xb0
    char pad_b8[0x8];
    FNiagaraSystemSpawnMultiSkeletalInfo SpawnInfo; // 0xc0
    FNiagaraHelpersPrimFilter Filter; // 0x140
    char pad_158[0x8];
    static USceneAction_WeatherSequenceSkeletalNiagara* StaticClass();
}; // Size: 0x160
#pragma pack(pop)
