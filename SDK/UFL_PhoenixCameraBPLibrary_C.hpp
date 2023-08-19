#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
class UObject;
class ACameraStackActor;
class UCameraStack;
class UCameraStackBehavior;
class UCameraStackBehaviorSetTargetWorldLocation;
#pragma pack(push, 1)
class UFL_PhoenixCameraBPLibrary_C : public UBlueprintFunctionLibrary {
public:
    static UFL_PhoenixCameraBPLibrary_C* StaticClass();
    static void CameraSmoothOutDetachPop(AActor* TargetActor, float Duration, UObject* __WorldContext, ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue, UCameraStack* CallFunc_GetBehaviors_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCameraStackBehavior* CallFunc_CreateNonCoreBehavior_ReturnValue, bool CallFunc_RemoveBehavior_ReturnValue, bool CallFunc_AddBehavior_ReturnValue);
    static void CameraSmoothOutTeleport(AActor* TargetActor, float Duration, UObject* __WorldContext, ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCameraStackBehavior* CallFunc_CreateNonCoreBehavior_ReturnValue, UCameraStackBehaviorSetTargetWorldLocation* K2Node_DynamicCast_AsSet_Target_World_Location, bool K2Node_DynamicCast_bSuccess, UCameraStack* CallFunc_GetBehaviors_ReturnValue, bool CallFunc_RemoveBehavior_ReturnValue, UCameraStackBehavior* CallFunc_GetBehaviourWithType_ReturnValue, bool CallFunc_InsertBeforeBehavior_ReturnValue);
    static void CameraRemoveBehavior(AActor* TargetActor, UCameraStackBehavior* Behavior, float BlendOutDuration, UObject* __WorldContext, ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue, UCameraStack* CallFunc_GetBehaviors_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveBehavior_ReturnValue);
    static void CameraMoveToFutureTeleportLocation(AActor* TargetActor, FVector TargetWorldLocation, float TimeUntilTeleport, UObject* __WorldContext, UCameraStackBehavior*& Behavior, ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue, UCameraStack* CallFunc_GetBehaviors_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCameraStackBehavior* CallFunc_GetBehaviourWithType_ReturnValue, UCameraStackBehavior* CallFunc_CreateNonCoreBehavior_ReturnValue, UCameraStackBehaviorSetTargetWorldLocation* K2Node_DynamicCast_AsSet_Target_World_Location, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InsertBeforeBehavior_ReturnValue);
}; // Size: 0x28
#pragma pack(pop)
