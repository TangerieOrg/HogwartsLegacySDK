#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FVector.hpp"
#include "UBTService.hpp"
class AAIController;
class ANavigationData;
#pragma pack(push, 1)
class UBTService_MissingNavmeshChecker : public UBTService {
public:
    FName ErrorName; // 0x70
    float HorzRadius; // 0x78
    float VertRadius; // 0x7c
    FBlackboardKeySelector LastGoodNavLocKey; // 0x80
    static UBTService_MissingNavmeshChecker* StaticClass();
    static bool HasNavmesh(AAIController* AIOwner, ANavigationData* NavData, FVector Location, FVector Extent, FVector& OutLocation);
}; // Size: 0xa8
#pragma pack(pop)
