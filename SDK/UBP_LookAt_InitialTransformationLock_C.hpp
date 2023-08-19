#pragma once
#include <cstdint>
#include "FBox2D.hpp"
#include "FVector2D.hpp"
#include "UCameraStackBehaviorLookAt.hpp"
class ACameraStackActor;
class UTransformationSpellToolComponent;
class UCameraStackTarget;
class AActor;
struct FCameraData;
class ABiped_Character;
class ASpellTool;
class AWandTool;
#pragma pack(push, 1)
class UBP_LookAt_InitialTransformationLock_C : public UCameraStackBehaviorLookAt {
public:
    static UBP_LookAt_InitialTransformationLock_C* StaticClass();
    bool OnActivateEvent(ACameraStackActor* CallFunc_GetOwner_ReturnValue, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, AWandTool* CallFunc_GetWand_ReturnValue, ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue, UTransformationSpellToolComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetTargetPointScreenPosition_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FBox2D CallFunc_MakeBox2D_ReturnValue);
    FString OnGetDebugStatsEvent();
    bool OnUpdateEvent(float DeltaSeconds, ACameraStackActor* CallFunc_GetOwner_ReturnValue, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, AWandTool* CallFunc_GetWand_ReturnValue, ASpellTool* CallFunc_GetActiveSpellTool_ReturnValue, UTransformationSpellToolComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetTargetPointScreenPosition_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FBox2D CallFunc_MakeBox2D_ReturnValue);
    bool OnWriteCameraDataEvent(FCameraData& CameraData);
}; // Size: 0x298
#pragma pack(pop)
