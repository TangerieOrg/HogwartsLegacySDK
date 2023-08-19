#pragma once
#include <cstdint>
class UFXRule;
class UFXSystemAsset;
#pragma pack(push, 1)
struct FFXOverride {
    TArray<UFXRule*> Rules; // 0x0
    UFXSystemAsset* ParticleSystem; // 0x10
}; // Size: 0x18
#pragma pack(pop)
