#include "AActor.hpp"
#include "ACameraStackActor.hpp"
#include "FVector.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UCameraStack.hpp"
#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorSetTargetWorldLocation.hpp"
#include "UFL_PhoenixCameraBPLibrary_C.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UFL_PhoenixCameraBPLibrary_C::CameraRemoveBehavior(AActor* TargetActor, UCameraStackBehavior* Behavior, float BlendOutDuration, UObject* __WorldContext, ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue, UCameraStack* CallFunc_GetBehaviors_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveBehavior_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C.CameraRemoveBehavior"));
    struct Params_CameraRemoveBehavior {
        AActor* TargetActor; // 0x0
        UCameraStackBehavior* Behavior; // 0x8
        float BlendOutDuration; // 0x10
        char pad_14[0x4];
        UObject* __WorldContext; // 0x18
        ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue; // 0x20
        UCameraStack* CallFunc_GetBehaviors_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x30
        bool CallFunc_RemoveBehavior_ReturnValue; // 0x31
    }; // Size: 0x32
    Params_CameraRemoveBehavior params{};
    params.TargetActor = (AActor*)TargetActor;
    params.Behavior = (UCameraStackBehavior*)Behavior;
    params.BlendOutDuration = (float)BlendOutDuration;
    params.__WorldContext = (UObject*)__WorldContext;
    params.CallFunc_GetCameraStackActorForTarget_ReturnValue = (ACameraStackActor*)CallFunc_GetCameraStackActorForTarget_ReturnValue;
    params.CallFunc_GetBehaviors_ReturnValue = (UCameraStack*)CallFunc_GetBehaviors_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_RemoveBehavior_ReturnValue = (bool)CallFunc_RemoveBehavior_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UFL_PhoenixCameraBPLibrary_C* UFL_PhoenixCameraBPLibrary_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C");
    return (UFL_PhoenixCameraBPLibrary_C*)res;
}
void UFL_PhoenixCameraBPLibrary_C::CameraMoveToFutureTeleportLocation(AActor* TargetActor, FVector TargetWorldLocation, float TimeUntilTeleport, UObject* __WorldContext, UCameraStackBehavior*& Behavior, ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue, UCameraStack* CallFunc_GetBehaviors_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCameraStackBehavior* CallFunc_GetBehaviourWithType_ReturnValue, UCameraStackBehavior* CallFunc_CreateNonCoreBehavior_ReturnValue, UCameraStackBehaviorSetTargetWorldLocation* K2Node_DynamicCast_AsSet_Target_World_Location, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InsertBeforeBehavior_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C.CameraMoveToFutureTeleportLocation"));
    struct Params_CameraMoveToFutureTeleportLocation {
        AActor* TargetActor; // 0x0
        FVector TargetWorldLocation; // 0x8
        float TimeUntilTeleport; // 0x14
        UObject* __WorldContext; // 0x18
        UCameraStackBehavior* Behavior; // 0x20
        ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue; // 0x28
        UCameraStack* CallFunc_GetBehaviors_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x38
        char pad_39[0x7];
        UCameraStackBehavior* CallFunc_GetBehaviourWithType_ReturnValue; // 0x40
        UCameraStackBehavior* CallFunc_CreateNonCoreBehavior_ReturnValue; // 0x48
        UCameraStackBehaviorSetTargetWorldLocation* K2Node_DynamicCast_AsSet_Target_World_Location; // 0x50
        bool K2Node_DynamicCast_bSuccess; // 0x58
        bool CallFunc_InsertBeforeBehavior_ReturnValue; // 0x59
    }; // Size: 0x5a
    Params_CameraMoveToFutureTeleportLocation params{};
    params.TargetActor = (AActor*)TargetActor;
    params.TargetWorldLocation = (FVector)TargetWorldLocation;
    params.TimeUntilTeleport = (float)TimeUntilTeleport;
    params.__WorldContext = (UObject*)__WorldContext;
    params.Behavior = (UCameraStackBehavior*)Behavior;
    params.CallFunc_GetCameraStackActorForTarget_ReturnValue = (ACameraStackActor*)CallFunc_GetCameraStackActorForTarget_ReturnValue;
    params.CallFunc_GetBehaviors_ReturnValue = (UCameraStack*)CallFunc_GetBehaviors_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetBehaviourWithType_ReturnValue = (UCameraStackBehavior*)CallFunc_GetBehaviourWithType_ReturnValue;
    params.CallFunc_CreateNonCoreBehavior_ReturnValue = (UCameraStackBehavior*)CallFunc_CreateNonCoreBehavior_ReturnValue;
    params.K2Node_DynamicCast_AsSet_Target_World_Location = (UCameraStackBehaviorSetTargetWorldLocation*)K2Node_DynamicCast_AsSet_Target_World_Location;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_InsertBeforeBehavior_ReturnValue = (bool)CallFunc_InsertBeforeBehavior_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Behavior = params.Behavior;
}
void UFL_PhoenixCameraBPLibrary_C::CameraSmoothOutDetachPop(AActor* TargetActor, float Duration, UObject* __WorldContext, ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue, UCameraStack* CallFunc_GetBehaviors_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCameraStackBehavior* CallFunc_CreateNonCoreBehavior_ReturnValue, bool CallFunc_RemoveBehavior_ReturnValue, bool CallFunc_AddBehavior_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C.CameraSmoothOutDetachPop"));
    struct Params_CameraSmoothOutDetachPop {
        AActor* TargetActor; // 0x0
        float Duration; // 0x8
        char pad_c[0x4];
        UObject* __WorldContext; // 0x10
        ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue; // 0x18
        UCameraStack* CallFunc_GetBehaviors_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        char pad_29[0x7];
        UCameraStackBehavior* CallFunc_CreateNonCoreBehavior_ReturnValue; // 0x30
        bool CallFunc_RemoveBehavior_ReturnValue; // 0x38
        bool CallFunc_AddBehavior_ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_CameraSmoothOutDetachPop params{};
    params.TargetActor = (AActor*)TargetActor;
    params.Duration = (float)Duration;
    params.__WorldContext = (UObject*)__WorldContext;
    params.CallFunc_GetCameraStackActorForTarget_ReturnValue = (ACameraStackActor*)CallFunc_GetCameraStackActorForTarget_ReturnValue;
    params.CallFunc_GetBehaviors_ReturnValue = (UCameraStack*)CallFunc_GetBehaviors_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_CreateNonCoreBehavior_ReturnValue = (UCameraStackBehavior*)CallFunc_CreateNonCoreBehavior_ReturnValue;
    params.CallFunc_RemoveBehavior_ReturnValue = (bool)CallFunc_RemoveBehavior_ReturnValue;
    params.CallFunc_AddBehavior_ReturnValue = (bool)CallFunc_AddBehavior_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UFL_PhoenixCameraBPLibrary_C::CameraSmoothOutTeleport(AActor* TargetActor, float Duration, UObject* __WorldContext, ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCameraStackBehavior* CallFunc_CreateNonCoreBehavior_ReturnValue, UCameraStackBehaviorSetTargetWorldLocation* K2Node_DynamicCast_AsSet_Target_World_Location, bool K2Node_DynamicCast_bSuccess, UCameraStack* CallFunc_GetBehaviors_ReturnValue, bool CallFunc_RemoveBehavior_ReturnValue, UCameraStackBehavior* CallFunc_GetBehaviourWithType_ReturnValue, bool CallFunc_InsertBeforeBehavior_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/FL_PhoenixCameraBPLibrary.FL_PhoenixCameraBPLibrary_C.CameraSmoothOutTeleport"));
    struct Params_CameraSmoothOutTeleport {
        AActor* TargetActor; // 0x0
        float Duration; // 0x8
        char pad_c[0x4];
        UObject* __WorldContext; // 0x10
        ACameraStackActor* CallFunc_GetCameraStackActorForTarget_ReturnValue; // 0x18
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x2c
        char pad_2d[0x3];
        UCameraStackBehavior* CallFunc_CreateNonCoreBehavior_ReturnValue; // 0x30
        UCameraStackBehaviorSetTargetWorldLocation* K2Node_DynamicCast_AsSet_Target_World_Location; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
        char pad_41[0x7];
        UCameraStack* CallFunc_GetBehaviors_ReturnValue; // 0x48
        bool CallFunc_RemoveBehavior_ReturnValue; // 0x50
        char pad_51[0x7];
        UCameraStackBehavior* CallFunc_GetBehaviourWithType_ReturnValue; // 0x58
        bool CallFunc_InsertBeforeBehavior_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_CameraSmoothOutTeleport params{};
    params.TargetActor = (AActor*)TargetActor;
    params.Duration = (float)Duration;
    params.__WorldContext = (UObject*)__WorldContext;
    params.CallFunc_GetCameraStackActorForTarget_ReturnValue = (ACameraStackActor*)CallFunc_GetCameraStackActorForTarget_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_CreateNonCoreBehavior_ReturnValue = (UCameraStackBehavior*)CallFunc_CreateNonCoreBehavior_ReturnValue;
    params.K2Node_DynamicCast_AsSet_Target_World_Location = (UCameraStackBehaviorSetTargetWorldLocation*)K2Node_DynamicCast_AsSet_Target_World_Location;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetBehaviors_ReturnValue = (UCameraStack*)CallFunc_GetBehaviors_ReturnValue;
    params.CallFunc_RemoveBehavior_ReturnValue = (bool)CallFunc_RemoveBehavior_ReturnValue;
    params.CallFunc_GetBehaviourWithType_ReturnValue = (UCameraStackBehavior*)CallFunc_GetBehaviourWithType_ReturnValue;
    params.CallFunc_InsertBeforeBehavior_ReturnValue = (bool)CallFunc_InsertBeforeBehavior_ReturnValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
