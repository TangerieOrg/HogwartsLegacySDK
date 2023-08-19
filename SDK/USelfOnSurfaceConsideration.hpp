#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfOnSurfaceConsideration : public UQualifierConsideration {
public:
    EPhysicalSurface DesiredSurface; // 0x28
    char pad_29[0x7];
    static USelfOnSurfaceConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
