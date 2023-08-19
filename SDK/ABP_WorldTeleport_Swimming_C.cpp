#include "AActor.hpp"
#include "ABP_WorldTeleport_Swimming_C.hpp"
#include "ABiped_Player.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHitResult.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UChildActorComponent.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UEmissiveAdaptationFixedOverrideComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USphereComponent.hpp"
ABP_WorldTeleport_Swimming_C* ABP_WorldTeleport_Swimming_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C");
    return (ABP_WorldTeleport_Swimming_C*)res;
}
void ABP_WorldTeleport_Swimming_C::RunFadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RunFadeOut"));
    struct Params_RunFadeOut {
    }; // Size: 0x0
    Params_RunFadeOut params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::Interact(UBTService_AvaAITree* AvaService) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.Interact"));
    struct Params_Interact {
        UBTService_AvaAITree* AvaService; // 0x0
    }; // Size: 0x8
    Params_Interact params{};
    params.AvaService = (UBTService_AvaAITree*)AvaService;
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
FName ABP_WorldTeleport_Swimming_C::GetUniqueBeaconId() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.GetUniqueBeaconId"));
    struct Params_GetUniqueBeaconId {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUniqueBeaconId params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void ABP_WorldTeleport_Swimming_C::RenderSmoothTransitionEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RenderSmoothTransitionEnd"));
    struct Params_RenderSmoothTransitionEnd {
    }; // Size: 0x0
    Params_RenderSmoothTransitionEnd params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::UserConstructionScript0(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UserConstructionScript params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::MovementModeChanged(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.MovementModeChanged"));
    struct Params_MovementModeChanged {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_MovementModeChanged params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_WorldTeleport_Swimming_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::RunFadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RunFadeIn"));
    struct Params_RunFadeIn {
    }; // Size: 0x0
    Params_RunFadeIn params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::StartFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StartFX"));
    struct Params_StartFX {
    }; // Size: 0x0
    Params_StartFX params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::StopFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StopFX"));
    struct Params_StopFX {
    }; // Size: 0x0
    Params_StopFX params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::StopStartBehavior() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StopStartBehavior"));
    struct Params_StopStartBehavior {
    }; // Size: 0x0
    Params_StopStartBehavior params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::ActivateBehavior() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.ActivateBehavior"));
    struct Params_ActivateBehavior {
    }; // Size: 0x0
    Params_ActivateBehavior params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::DeactivateBehaviour() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.DeactivateBehaviour"));
    struct Params_DeactivateBehaviour {
    }; // Size: 0x0
    Params_DeactivateBehaviour params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::ReceiveTick0(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::StartAudioFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StartAudioFX"));
    struct Params_StartAudioFX {
    }; // Size: 0x0
    Params_StartAudioFX params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::StopAudioFX() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.StopAudioFX"));
    struct Params_StopAudioFX {
    }; // Size: 0x0
    Params_StopAudioFX params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::PopDisable() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.PopDisable"));
    struct Params_PopDisable {
    }; // Size: 0x0
    Params_PopDisable params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::RemoveDivingContext() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RemoveDivingContext"));
    struct Params_RemoveDivingContext {
    }; // Size: 0x0
    Params_RemoveDivingContext params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::RenderSmoothTransitionStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.RenderSmoothTransitionStart"));
    struct Params_RenderSmoothTransitionStart {
    }; // Size: 0x0
    Params_RenderSmoothTransitionStart params{};
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::OnTeleport(FVector PrevLocation, FRotator PrevRotation, bool bIsATest, bool bNoCheck, bool bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Triggers/BP_WorldTeleport_Swimming.BP_WorldTeleport_Swimming_C.OnTeleport"));
    struct Params_OnTeleport {
        FVector PrevLocation; // 0x0
        FRotator PrevRotation; // 0xc
        bool bIsATest; // 0x18
        bool bNoCheck; // 0x19
        bool bSuccess; // 0x1a
    }; // Size: 0x1b
    Params_OnTeleport params{};
    params.PrevLocation = (FVector)PrevLocation;
    params.PrevRotation = (FRotator)PrevRotation;
    params.bIsATest = (bool)bIsATest;
    params.bNoCheck = (bool)bNoCheck;
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
}
void ABP_WorldTeleport_Swimming_C::ExecuteUbergraph_BP_WorldTeleport_Swimming(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue) {}
