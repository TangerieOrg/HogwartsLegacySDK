#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDbSingleColumnInfo.hpp"
class UBoxComponent;
#pragma pack(push, 1)
class AMapRegionBox : public AActor {
public:
    FDbSingleColumnInfo LocationID; // 0x248
    FString WorldID; // 0x2d0
    FString TypeID; // 0x2e0
    UBoxComponent* Region; // 0x2f0
    static AMapRegionBox* StaticClass();
}; // Size: 0x2f8
#pragma pack(pop)
