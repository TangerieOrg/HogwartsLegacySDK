#pragma once
#include <cstdint>
#include "UMultiFX2_Sfx.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
class UMultiFX2_SfxEndSfx : public UMultiFX2_Sfx {
public:
    UAkAudioEvent* EndSfx; // 0x90
    static UMultiFX2_SfxEndSfx* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
