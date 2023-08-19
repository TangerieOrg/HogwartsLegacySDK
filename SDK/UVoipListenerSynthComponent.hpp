#pragma once
#include <cstdint>
#include "USynthComponent.hpp"
#pragma pack(push, 1)
class UVoipListenerSynthComponent : public USynthComponent {
public:
    char pad_6e0[0x60];
    static UVoipListenerSynthComponent* StaticClass();
    bool IsIdling();
}; // Size: 0x740
#pragma pack(pop)
