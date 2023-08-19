#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDbDoubleColumnInfo.hpp"
class UCustomizableCharacterComponent;
class USkeletalMeshComponent;
#pragma pack(push, 1)
class ACustomizableActor : public AActor {
public:
    char pad_248[0x18];
    FDbDoubleColumnInfo CharacterIdInfo; // 0x260
    UCustomizableCharacterComponent* CCC; // 0x338
    char pad_340[0x8];
    USkeletalMeshComponent* Mesh; // 0x348
    char pad_350[0x10];
    static ACustomizableActor* StaticClass();
    void SetLODOverride(int32_t InLODOverride);
    FString GetRegistryID();
    UCustomizableCharacterComponent* GetCCC();
}; // Size: 0x360
#pragma pack(pop)
