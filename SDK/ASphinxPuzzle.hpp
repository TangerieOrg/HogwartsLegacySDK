#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "EInteractiveState.hpp"
class UInteractiveObjectComponent;
class AActor;
#pragma pack(push, 1)
class ASphinxPuzzle : public AWorldObject {
public:
    UInteractiveObjectComponent* InteractiveObjectComponent; // 0x2b0
    FString GuidString; // 0x2b8
    FString PuzzleTypeName; // 0x2c8
    char pad_2d8[0x10];
    static ASphinxPuzzle* StaticClass();
    void NotifyBeginPuzzle(EInteractiveState State);
    void CleanUpObject(AActor* actorToDestroy);
}; // Size: 0x2e8
#pragma pack(pop)
