#pragma once
#include <cstdint>
#include "UInterpTrackInst.hpp"
class UAudioComponent;
#pragma pack(push, 1)
class UInterpTrackInstSound : public UInterpTrackInst {
public:
    float LastUpdatePosition; // 0x28
    char pad_2c[0x4];
    UAudioComponent* PlayAudioComp; // 0x30
    static UInterpTrackInstSound* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
