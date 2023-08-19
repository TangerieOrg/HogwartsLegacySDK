#pragma once
#include <cstdint>
#include "URPGAbilityEventListener.hpp"
#pragma pack(push, 1)
class URPGAbilityEventListener_DuringNighttime : public URPGAbilityEventListener {
public:
    char pad_98[0x8];
    static URPGAbilityEventListener_DuringNighttime* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
