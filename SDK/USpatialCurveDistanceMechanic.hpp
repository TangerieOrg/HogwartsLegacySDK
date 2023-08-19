#pragma once
#include <cstdint>
#include "UInteractionMechanic.hpp"
#pragma pack(push, 1)
class USpatialCurveDistanceMechanic : public UInteractionMechanic {
public:
    char pad_30[0x3c0];
    static USpatialCurveDistanceMechanic* StaticClass();
}; // Size: 0x3f0
#pragma pack(pop)
