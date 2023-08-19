#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
class USceneComponent;
class UArrowComponent;
class UStaticMesh;
#pragma pack(push, 1)
class ABP_RotatingMesh_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UStaticMeshComponent* StaticMesh; // 0x250
    USceneComponent* Scene; // 0x258
    UArrowComponent* Arrow; // 0x260
    UStaticMesh* RotatingMesh; // 0x268
    float Rotation_Rate; // 0x270
    bool ReceiveRotation; // 0x274
    char pad_275[0x3];
    FVector RotationAxis; // 0x278
    char pad_284[0x4];
    static ABP_RotatingMesh_C* StaticClass();
    void SetRelativeRotation(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult);
    void UserConstructionScript0(bool CallFunc_SetStaticMesh_ReturnValue);
    void UpdateRotation();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_RotatingMesh(int32_t EntryPoint);
}; // Size: 0x288
#pragma pack(pop)
