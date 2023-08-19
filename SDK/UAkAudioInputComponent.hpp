#pragma once
#include <cstdint>
#include "UAkComponent.hpp"
#pragma pack(push, 1)
class UAkAudioInputComponent : public UAkComponent {
public:
    char pad_620[0x30];
    static UAkAudioInputComponent* StaticClass();
    int32_t PostAssociatedAudioInputEvent();
}; // Size: 0x650
#pragma pack(pop)
