#pragma once
#include <cstdint>
#include "FDamageEvent.hpp"
#include "FHitResult.hpp"
#include "FRadialDamageParams.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRadialDamageEvent : public FDamageEvent {
    FRadialDamageParams Params; // 0x10
    FVector Origin; // 0x24
    TArray<FHitResult> ComponentHits; // 0x30
}; // Size: 0x40
#pragma pack(pop)
