#pragma once
#include <cstdint>
#include "EToolEffectType.hpp"
#include "UDataAsset.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UToolEffectData : public UDataAsset {
public:
    EToolEffectType EffectType; // 0x30
    char pad_31[0x7];
    UCurveFloat* GraphCurveFloat; // 0x38
    float BaseScale; // 0x40
    char pad_44[0x4];
    static UToolEffectData* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
