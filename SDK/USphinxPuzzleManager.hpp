#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
class USceneComponent;
#pragma pack(push, 1)
class USphinxPuzzleManager : public UPhxDbRegistryTypeManager {
public:
    static USphinxPuzzleManager* StaticClass();
    static FVector FlipendoPuzzle_GetRotationFromHitLocation(USceneComponent* BlockComponent, FVector& HitLocation);
}; // Size: 0xa8
#pragma pack(pop)
