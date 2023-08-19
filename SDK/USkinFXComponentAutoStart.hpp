#pragma once
#include <cstdint>
#include "ESkinFXComponentAutoStartState.hpp"
#include "USkinFXComponent.hpp"
class UClass;
#pragma pack(push, 1)
class USkinFXComponentAutoStart : public USkinFXComponent {
public:
    UClass* AutoStartEffect; // 0x108
    float InitialDelay; // 0x110
    float RepeatDelay; // 0x114
    bool bRepeat; // 0x118
    char pad_119[0x3];
    float Timer; // 0x11c
    ESkinFXComponentAutoStartState State; // 0x120
    char pad_121[0x7];
    static USkinFXComponentAutoStart* StaticClass();
}; // Size: 0x128
#pragma pack(pop)
