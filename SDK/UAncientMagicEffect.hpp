#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UAncientMagicEffect : public UActorComponent {
public:
    bool LockPlayerWhileActive; // 0xc8
    char pad_c9[0x7];
    static UAncientMagicEffect* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
