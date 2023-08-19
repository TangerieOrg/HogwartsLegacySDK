#pragma once
#include <cstdint>
#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "USceneAction_WeatherSequenceNiagara.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceNiagaraAttached : public USceneAction_WeatherSequenceNiagara {
public:
    FNiagaraSystemSpawnAttachedPointInfo SpawnInfo; // 0xb0
    static USceneAction_WeatherSequenceNiagaraAttached* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
