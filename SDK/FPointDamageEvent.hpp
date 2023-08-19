#pragma once
#include <cstdint>
#include "FDamageEvent.hpp"
#include "FHitResult.hpp"
#include "FVector_NetQuantizeNormal.hpp"
#pragma pack(push, 1)
struct FPointDamageEvent : public FDamageEvent {
    float Damage; // 0x10
    FVector_NetQuantizeNormal ShotDirection; // 0x14
    FHitResult HitInfo; // 0x20
}; // Size: 0xa8
#pragma pack(pop)
