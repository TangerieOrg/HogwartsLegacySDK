#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceNiagaraAttached.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceCameraNiagara : public USceneAction_WeatherSequenceNiagaraAttached {
public:
    FName SetOutdoors; // 0x130
    bool bSetOutdoorsValue; // 0x138
    bool bHideIndoors; // 0x139
    char pad_13a[0x6];
    static USceneAction_WeatherSequenceCameraNiagara* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
