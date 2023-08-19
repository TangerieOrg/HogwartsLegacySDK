#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UCameraStackBehaviorAddCameraSpaceTranslation.hpp"
class ACameraStackActor;
class UCameraStackTarget;
class AActor;
struct FCameraData;
class ACharacter;
#pragma pack(push, 1)
class UBP_OffsetCamera_WhileMoving_C : public UCameraStackBehaviorAddCameraSpaceTranslation {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x1c8
    bool IsMoving; // 0x1d0
    char pad_1d1[0x3];
    FVector CameraOffset; // 0x1d4
    FVector OffsetWhileMoving; // 0x1e0
    FVector OffsetWhileStill; // 0x1ec
    float InterpSpeedStopping; // 0x1f8
    float InterpSpeedMoving; // 0x1fc
    float DeltaSeconds; // 0x200
    char pad_204[0x4];
    static UBP_OffsetCamera_WhileMoving_C* StaticClass();
    bool OnActivateEvent();
    FString OnGetDebugStatsEvent();
    bool OnUpdateEvent(float DeltaSeconds, bool Temp_bool_Variable, bool Temp_bool_Variable_1, ACameraStackActor* CallFunc_GetOwner_ReturnValue, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsMovingOnGround_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector K2Node_Select_Default, float K2Node_Select_Default_1, FVector CallFunc_VInterpTo_ReturnValue);
    bool OnWriteCameraDataEvent(FCameraData& CameraData);
    void ExecuteUbergraph_BP_OffsetCamera_WhileMoving(int32_t EntryPoint);
}; // Size: 0x208
#pragma pack(pop)
