#pragma once
#include <cstdint>
#include "AVanishmentStyleBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class USceneComponent;
class AActor;
#pragma pack(push, 1)
class ABP_VanishmentStyle_DefaultMovable_C : public AVanishmentStyleBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    USceneComponent* DefaultSceneRoot; // 0x258
    FVector NonUniformScale; // 0x260
    float ScaleFactor; // 0x26c
    float Rotation_Direction; // 0x270
    FVector TranslationOffset; // 0x274
    float TranslationAmount; // 0x280
    char pad_284[0xc];
    FTransform InitialTransform; // 0x290
    float SpawnOutRotation; // 0x2c0
    FVector CenterOffset; // 0x2c4
    static ABP_VanishmentStyle_DefaultMovable_C* StaticClass();
    void StartVanishment();
    void ExecuteUbergraph_BP_VanishmentStyle_DefaultMovable(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue);
}; // Size: 0x2d0
#pragma pack(pop)
