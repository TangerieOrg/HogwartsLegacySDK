#pragma once
#include <cstdint>
#include "FCollisionResponseContainer.hpp"
#include "FResponseChannel.hpp"
#pragma pack(push, 1)
struct FCollisionResponse {
    FCollisionResponseContainer ResponseToChannels; // 0x0
    TArray<FResponseChannel> ResponseArray; // 0x20
}; // Size: 0x30
#pragma pack(pop)
