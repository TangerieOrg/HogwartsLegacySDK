#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UBTService.hpp"
class UClass;
class AAIController;
class ANavigationData;
#pragma pack(push, 1)
class UBTService_InvalidPathChecker : public UBTService {
public:
    int32_t MaxChecksPerTick; // 0x70
    float MaxCacheRefreshTime_Empty; // 0x74
    float MaxCacheRefreshTime_Valid; // 0x78
    char pad_7c[0x4];
    UClass* FilterClass; // 0x80
    bool bDisallowPartial; // 0x88
    char pad_89[0x3];
    float ProjectionRadius; // 0x8c
    float ProjectionHeight; // 0x90
    char pad_94[0x24];
    static UBTService_InvalidPathChecker* StaticClass();
    static bool CanPath(AAIController* AIOwner, ANavigationData* NavData, FVector From, FVector To, UClass* QueryFilter, bool bAllowPartial, float ProjRadius, float ProjHeight);
}; // Size: 0xb8
#pragma pack(pop)
