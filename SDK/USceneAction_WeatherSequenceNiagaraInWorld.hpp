#pragma once
#include <cstdint>
#include "FNiagaraSystemSpawnInfo.hpp"
#include "USceneAction_WeatherSequenceNiagara.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_WeatherSequenceNiagaraInWorld : public USceneAction_WeatherSequenceNiagara {
public:
    UTransformProvider* Transform; // 0xb0
    char pad_b8[0x8];
    FNiagaraSystemSpawnInfo SpawnInfo; // 0xc0
    static USceneAction_WeatherSequenceNiagaraInWorld* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
