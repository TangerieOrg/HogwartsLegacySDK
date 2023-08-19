#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#pragma pack(push, 1)
class AMunitionType_Potion : public AMunitionType_SubsonicSpell {
public:
    float SpawnDistance; // 0x538
    char pad_53c[0x4];
    static AMunitionType_Potion* StaticClass();
}; // Size: 0x540
#pragma pack(pop)
