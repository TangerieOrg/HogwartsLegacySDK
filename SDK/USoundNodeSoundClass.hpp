#pragma once
#include <cstdint>
#include "USoundNode.hpp"
class USoundClass;
#pragma pack(push, 1)
class USoundNodeSoundClass : public USoundNode {
public:
    USoundClass* SoundClassOverride; // 0x48
    char pad_50[0x8];
    static USoundNodeSoundClass* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
