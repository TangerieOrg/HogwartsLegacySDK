#pragma once
#include <cstdint>
class UPrimitiveComponent;
#pragma pack(push, 1)
struct FCachedColovariaComponentInfo {
    FName ActorComponentName; // 0x0
    UPrimitiveComponent* PrimitiveComponent; // 0x8
}; // Size: 0x10
#pragma pack(pop)
