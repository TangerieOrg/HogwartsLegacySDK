#pragma once
#include <cstdint>
#include "FMultiBase.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
struct FMultiSfx : public FMultiBase {
    UAkAudioEvent* SFX; // 0x8
    UAkAudioEvent* EndSfx; // 0x10
}; // Size: 0x18
#pragma pack(pop)
