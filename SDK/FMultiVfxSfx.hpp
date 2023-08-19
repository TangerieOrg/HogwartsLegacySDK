#pragma once
#include <cstdint>
#include "FMultiVfx.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
struct FMultiVfxSfx : public FMultiVfx {
    UAkAudioEvent* SFX; // 0x18
    UAkAudioEvent* EndSfx; // 0x20
}; // Size: 0x28
#pragma pack(pop)
