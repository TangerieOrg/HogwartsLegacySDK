#pragma once
#include <cstdint>
#include "EAnimationDirectionSource.hpp"
#include "EAnimationDirections.hpp"
#include "EFootPlantEnum.hpp"
#include "EStandardManagedPriority.hpp"
#include "FAnimationRequestLayer.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UAnimLayersAsset;
class UFloatProvider;
class UClass;
class UControlRig;
class UIKDriver;
class UAnimAsset_TickAssetPlayerProxy;
class UAnimSequence;
class UObject;
#pragma pack(push, 1)
class UAnimationComponent : public UActorComponent {
public:
    char pad_c8[0x198];
    TArray<FAnimationRequestLayer> Layers; // 0x260
    UAnimLayersAsset* LayersAsset; // 0x270
    UClass* ControlRigClass; // 0x278
    char pad_280[0x8];
    UControlRig* ControlRig; // 0x288
    TArray<UIKDriver*> IKDrivers; // 0x290
    bool LadderContactEnabled; // 0x2a0
    char pad_2a1[0x3];
    int32_t HighestLODLevelForIK; // 0x2a4
    float LOD_IKBlendOutDuration; // 0x2a8
    float LOD_IKBlendInDuration; // 0x2ac
    float StrideWarpFactor; // 0x2b0
    EFootPlantEnum FootPlant; // 0x2b4
    bool bHoldFootPositionWhenPlanted; // 0x2b5
    char pad_2b6[0x2];
    float CapsuleInterpSpeed; // 0x2b8
    char pad_2bc[0x11c];
    TArray<bool> ResetDefaultDirection; // 0x3d8
    float MaxLookAlpha; // 0x3e8
    char pad_3ec[0x4];
    UFloatProvider* TimeDelayProvider; // 0x3f0
    UFloatProvider* BlendInTimeProvider; // 0x3f8
    UAnimSequence* LastSequence; // 0x400
    float LastSequenceTime; // 0x408
    char pad_40c[0x14];
    UAnimAsset_TickAssetPlayerProxy* TickAssetPlayerProxy; // 0x420
    char pad_428[0x348];
    static UAnimationComponent* StaticClass();
    void StartSettingPoseFixupEnabled(bool bInEnabled, EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration);
    void StartSettingLookAtEnabled(bool bInEnabled, EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration);
    void StartSettingIKEnabled(bool bInEnabled, EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration);
    void StartSettingFloorContactEnabled(bool bInEnabled, EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration);
    void StartIKBlendOut(float Duration);
    void StartIKBlendIn(float Duration);
    static void SetPlayerIKEnabled(bool State);
    void SetLadderInfo(float BottomRungZ, float TopRungZ, float RungSpacing, FVector LadderWorldPos, FVector LadderFaceNormal);
    void SetLadderIKEnabled(bool Enabled);
    static void SetGlobalIKEnabled(bool State);
    void SetDirectionWeight(EAnimationDirections Direction, EAnimationDirectionSource Source, float weight);
    void SetDirectionTargetAndWeightNoCap(EAnimationDirections Direction, EAnimationDirectionSource Source, FVector TargetInWorldSpace, float weight);
    void SetDirectionTargetAndWeight(EAnimationDirections Direction, EAnimationDirectionSource Source, FVector TargetInWorldSpace, float weight);
    void SetAnimLayersAsset(UAnimLayersAsset* InLayersAsset);
    void ResetDefaultDirectionNow(EAnimationDirections Direction);
    static bool IsPlayerIKEnabled();
    static bool IsGlobalIKEnabled();
    UIKDriver* GetIKDriverFromClass(UClass* IKDriverClass);
    float GetIKBlendWeight();
    bool GetDirectionTargetAndWeight(EAnimationDirections Direction, FVector& OutTargetInWorldSpace, float& OutWeight);
    bool GetDefaultDirection(EAnimationDirections Direction, FVector& OutDefaultDirectionInComponentSpace);
    void FinishSettingPoseFixupEnabled(EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration);
    void FinishSettingLookAtEnabled(EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration);
    void FinishSettingIKEnabled(EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration);
    void FinishSettingFloorContactEnabled(EStandardManagedPriority InPriority, UObject* Provider, float InBlendDuration);
}; // Size: 0x770
#pragma pack(pop)
