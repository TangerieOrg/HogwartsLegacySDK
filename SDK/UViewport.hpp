#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UContentWidget.hpp"
class UClass;
class AActor;
class UWorld;
#pragma pack(push, 1)
class UViewport : public UContentWidget {
public:
    FLinearColor BackgroundColor; // 0x120
    char pad_130[0x38];
    static UViewport* StaticClass();
    AActor* Spawn(UClass* ActorClass);
    void SetViewRotation(FRotator Rotation);
    void SetViewLocation(FVector Location);
    FRotator GetViewRotation();
    UWorld* GetViewportWorld();
    FVector GetViewLocation();
}; // Size: 0x168
#pragma pack(pop)
