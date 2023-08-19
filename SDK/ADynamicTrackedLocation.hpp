#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
#include "FColor.hpp"
#include "FDbSingleColumnInfo.hpp"
#pragma pack(push, 1)
class ADynamicTrackedLocation : public ATargetPoint {
public:
    bool bRegisterOnCreation; // 0x248
    char pad_249[0x7];
    FDbSingleColumnInfo LocationType; // 0x250
    bool bDrawDebug; // 0x2d8
    char pad_2d9[0x3];
    float debugRadius; // 0x2dc
    int32_t debugSegments; // 0x2e0
    FColor DebugColor; // 0x2e4
    static ADynamicTrackedLocation* StaticClass();
}; // Size: 0x2e8
#pragma pack(pop)
