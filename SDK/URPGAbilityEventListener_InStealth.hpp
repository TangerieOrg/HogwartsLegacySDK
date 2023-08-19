#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
#pragma pack(push, 1)
class URPGAbilityEventListener_InStealth : public URPGAbilityEventListener {
public:
    char pad_98[0x10];
    static URPGAbilityEventListener_InStealth* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
