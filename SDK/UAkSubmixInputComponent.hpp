#pragma once
#include <cstdint>
#include "UAkAudioInputComponent.hpp"
class USoundSubmix;
#pragma pack(push, 1)
class UAkSubmixInputComponent : public UAkAudioInputComponent {
public:
    USoundSubmix* SubmixToRecord; // 0x650
    char pad_658[0x48];
    static UAkSubmixInputComponent* StaticClass();
}; // Size: 0x6a0
#pragma pack(pop)
