#pragma once
#include <cstdint>
#include "FVector.hpp"
class UMapMarkupComponent;
class UMapLocation;
class AMapLocationActor;
#pragma pack(push, 1)
struct FPathLocationData {
    UMapMarkupComponent* Room; // 0x0
    UMapLocation* Floor; // 0x8
    UMapMarkupComponent* Stair; // 0x10
    UMapLocation* Primary; // 0x18
    AMapLocationActor* PrimaryStructureLocationActor; // 0x20
    FVector PathPoint; // 0x28
    bool bISinglePrimaryLocation; // 0x34
    char pad_35[0x3];
}; // Size: 0x38
#pragma pack(pop)
