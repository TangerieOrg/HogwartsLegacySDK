#pragma once
#include <cstdint>
#include "UObject.hpp"
class UWorld;
class AActor;
class UPrimitiveComponent;
class UObjectStateInfo;
class ASpellTool;
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UThrowData : public UObject {
public:
    UWorld* World; // 0x28
    AActor* Owner; // 0x30
    AActor* Instigator; // 0x38
    AActor* ThrownActor; // 0x40
    UPrimitiveComponent* Component; // 0x48
    ASpellTool* SpellTool; // 0x50
    char pad_58[0x78];
    UObjectStateInfo* ObjectStateInfo; // 0xd0
    char pad_d8[0x8];
    TArray<AActor*> IgnoreObjectArray; // 0xe0
    char pad_f0[0x40];
    TArray<UInteractionArchitectAsset*> MunitionDataAssets; // 0x130
    char pad_140[0x18];
    AActor* TargetActor; // 0x158
    static UThrowData* StaticClass();
}; // Size: 0x160
#pragma pack(pop)
