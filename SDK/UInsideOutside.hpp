#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class UInsideOutside : public UBlueprintFunctionLibrary {
public:
    static UInsideOutside* StaticClass();
    static bool PositionOutside(UObject* WorldContextObject, FVector Position, bool bExact);
    static bool PositionInside(UObject* WorldContextObject, FVector Position, bool bExact);
    static bool ActorOutsideExactCached(AActor* Actor);
    static bool ActorOutsideCoarseCached(AActor* Actor);
    static bool ActorOutsideCached(AActor* Actor);
    static bool ActorInsideExactCached(AActor* Actor);
    static bool ActorInsideCoarseCached(AActor* Actor);
    static bool ActorInsideCached(AActor* Actor);
}; // Size: 0x28
#pragma pack(pop)
