#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_CreatureAttackImpact : public UAnimNotify {
public:
    FName SocketName; // 0x38
    static UAnimNotify_CreatureAttackImpact* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
