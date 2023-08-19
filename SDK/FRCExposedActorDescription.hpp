#pragma once
#include <cstdint>
#include "FRCObjectDescription.hpp"
#pragma pack(push, 1)
struct FRCExposedActorDescription {
    FName DisplayName; // 0x0
    FString ID; // 0x8
    FRCObjectDescription UnderlyingActor; // 0x18
}; // Size: 0x48
#pragma pack(pop)
