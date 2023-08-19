#pragma once
#include <cstdint>
#include "FPhysicalResponseEventData.hpp"
#include "UObject.hpp"
struct FVector;
#pragma pack(push, 1)
class UPhysicalResponseReporter : public UObject {
public:
    char pad_28[0x8];
    TArray<FPhysicalResponseEventData> NewImpactEvents; // 0x30
    TArray<FPhysicalResponseEventData> ImpactEventsPendingDispatch; // 0x40
    char pad_50[0xa8];
    static UPhysicalResponseReporter* StaticClass();
    static void HandlePhysicalSweep_Static(FVector& SweepPosition, FVector& PreviousPosition, FName SourceName, float Radius, float StrengthFactor);
}; // Size: 0xf8
#pragma pack(pop)
