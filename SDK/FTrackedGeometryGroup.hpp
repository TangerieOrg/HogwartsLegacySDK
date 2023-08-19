#pragma once
#include <cstdint>
class AARActor;
class UARTrackedGeometry;
class UARComponent;
#pragma pack(push, 1)
struct FTrackedGeometryGroup {
    AARActor* ARActor; // 0x0
    UARComponent* ARComponent; // 0x8
    UARTrackedGeometry* TrackedGeometry; // 0x10
}; // Size: 0x18
#pragma pack(pop)
