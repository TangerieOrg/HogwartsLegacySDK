#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
struct FVector;
struct FRotator;
#pragma pack(push, 1)
class URootControlFunctions : public UBlueprintFunctionLibrary {
public:
    static URootControlFunctions* StaticClass();
    static void AdjustWorldSpaceTransform(AActor* Actor, FVector& TranslationOffset, FRotator& RotationOffset);
}; // Size: 0x28
#pragma pack(pop)
