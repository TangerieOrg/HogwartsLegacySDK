#pragma once
#include <cstdint>
class UParticleSystemComponent;
#pragma pack(push, 1)
struct FPSCPoolElem {
    UParticleSystemComponent* PSC; // 0x0
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
