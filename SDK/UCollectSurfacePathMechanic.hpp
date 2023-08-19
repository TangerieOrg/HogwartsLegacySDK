#pragma once
#include <cstdint>
#include "UInteractionMechanic.hpp"
#pragma pack(push, 1)
class UCollectSurfacePathMechanic : public UInteractionMechanic {
public:
    char pad_30[0x520];
    static UCollectSurfacePathMechanic* StaticClass();
}; // Size: 0x550
#pragma pack(pop)
