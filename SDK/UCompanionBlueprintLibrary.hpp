#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
#pragma pack(push, 1)
class UCompanionBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UCompanionBlueprintLibrary* StaticClass();
    static bool IsCompanionPawn(AActor* TargetActor);
    static bool HasCompanionOverlaps(AActor* TargetActor);
}; // Size: 0x28
#pragma pack(pop)
