#pragma once
#include <cstdint>
#include "UInteractionMechanic.hpp"
#pragma pack(push, 1)
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic {
public:
    char pad_30[0x470];
    static UPlaneDistanceFromHitMechanic* StaticClass();
}; // Size: 0x4a0
#pragma pack(pop)
