#pragma once
#include <cstdint>
#include "FWorldFXAudioEvent.hpp"
#include "FWorldFXPreview.hpp"
class UAkComponent;
#pragma pack(push, 1)
struct FWorldFXAudioPreview : public FWorldFXPreview {
    UAkComponent* SFXPreview; // 0x8
    FWorldFXAudioEvent CurrentFX; // 0x10
}; // Size: 0x70
#pragma pack(pop)
