#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
#pragma pack(push, 1)
class URPGAbilityEventListener_DuringDaytime : public URPGAbilityEventListener {
public:
    char pad_98[0x8];
    static URPGAbilityEventListener_DuringDaytime* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
