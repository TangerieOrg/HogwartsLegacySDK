#pragma once
#include <cstdint>
class AMapLocationActor;
#pragma pack(push, 1)
struct FLocationGroup {
    TArray<AMapLocationActor*> Locations; // 0x0
}; // Size: 0x10
#pragma pack(pop)
