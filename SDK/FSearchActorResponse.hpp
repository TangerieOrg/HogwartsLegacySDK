#pragma once
#include <cstdint>
#include "FRCObjectDescription.hpp"
#pragma pack(push, 1)
struct FSearchActorResponse {
    TArray<FRCObjectDescription> Actors; // 0x0
}; // Size: 0x10
#pragma pack(pop)
