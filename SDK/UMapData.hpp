#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class UMapLocation;
#pragma pack(push, 1)
class UMapData : public UObject {
public:
    UMapLocation* Root; // 0x28
    static UMapData* StaticClass();
    UMapLocation* FindLocationThatContainsPoint(FVector Point, UMapLocation* StartLocation);
    UMapLocation* FindLocationByName(FString Name, UMapLocation* StartLocation);
    int32_t FindDepthOfLocation(UMapLocation* LocationIn, UMapLocation* SearchRoot, int32_t CurrentDepth);
    static UMapData* CreateMapData();
    bool ContainsLocation(FString LocationName);
    bool AddLocationInternal(UMapLocation* MapLocation, UMapLocation* Parent);
    bool AddLocation(UMapLocation* MapLocation);
}; // Size: 0x30
#pragma pack(pop)
