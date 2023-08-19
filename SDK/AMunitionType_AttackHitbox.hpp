#pragma once
#include <cstdint>
#include "AMunitionType_Hitbox.hpp"
#pragma pack(push, 1)
class AMunitionType_AttackHitbox : public AMunitionType_Hitbox {
public:
    static AMunitionType_AttackHitbox* StaticClass();
}; // Size: 0x470
#pragma pack(pop)
