#include "AActor.hpp"
#include "ABP_FieldGuideHotSpot_C.hpp"
#include "ABP_FieldGuidePage_C.hpp"
#include "ABiped_Player.hpp"
#include "AFieldGuideHotSpot.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FHitResult.hpp"
#include "FLockManagerLock.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "UAkComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkinFXComponent.hpp"
#include "USphereComponent.hpp"
ABP_FieldGuideHotSpot_C* ABP_FieldGuideHotSpot_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C");
    return (ABP_FieldGuideHotSpot_C*)res;
}
void ABP_FieldGuideHotSpot_C::CheckShowFieldGuidePage() {}
void ABP_FieldGuideHotSpot_C::SetFieldGUideMissionUnlocked(bool Flag) {}
void ABP_FieldGuideHotSpot_C::CheckShowFieldGuideHint(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3) {}
void ABP_FieldGuideHotSpot_C::MenuTabLockChanged(UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.MenuTabLockChanged"));
    struct Params_MenuTabLockChanged {
        UObject* Caller; // 0x0
        FLockManagerLock Lock; // 0x8
    }; // Size: 0x14
    Params_MenuTabLockChanged params{};
    params.Caller = (UObject*)Caller;
    params.Lock = (FLockManagerLock)Lock;
    ProcessEvent(func, &params);
    Lock = params.Lock;
}
void ABP_FieldGuideHotSpot_C::SetFieldGuideCollected(bool Flag) {}
void ABP_FieldGuideHotSpot_C::HideNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.HideNonCinematicElements"));
    struct Params_HideNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::SetFieldGuideInOuterRadius(bool Flag) {}
void ABP_FieldGuideHotSpot_C::ExitedHotSpotRadius0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ExitedHotSpotRadius"));
    struct Params_ExitedHotSpotRadius {
    }; // Size: 0x0
    Params_ExitedHotSpotRadius params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::SetGuideHidden(bool Flag) {}
void ABP_FieldGuideHotSpot_C::SetGuidePageRevealed(bool Flag) {}
void ABP_FieldGuideHotSpot_C::SetPageActor(ABP_FieldGuidePage_C* InPageActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SetPageActor"));
    struct Params_SetPageActor {
        ABP_FieldGuidePage_C* InPageActor; // 0x0
    }; // Size: 0x8
    Params_SetPageActor params{};
    params.InPageActor = (ABP_FieldGuidePage_C*)InPageActor;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::GetPageActor(ABP_FieldGuidePage_C*& NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.GetPageActor"));
    struct Params_GetPageActor {
        ABP_FieldGuidePage_C* NewParam; // 0x0
    }; // Size: 0x8
    Params_GetPageActor params{};
    params.NewParam = (ABP_FieldGuidePage_C*)NewParam;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
void ABP_FieldGuideHotSpot_C::SpawnPageAndQuill(bool CallFunc_IsValid_ReturnValue, FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, ABP_FieldGuidePage_C* CallFunc_FinishSpawningActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SpawnPageAndQuill"));
    struct Params_SpawnPageAndQuill {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        char pad_1[0xf];
        FTransform CallFunc_GetTransform_ReturnValue; // 0x10
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x40
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x48
        ABP_FieldGuidePage_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x50
    }; // Size: 0x58
    Params_SpawnPageAndQuill params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetTransform_ReturnValue = (FTransform)CallFunc_GetTransform_ReturnValue;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ABP_FieldGuidePage_C*)CallFunc_FinishSpawningActor_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::DestroyPageAndQuill(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.DestroyPageAndQuill"));
    struct Params_DestroyPageAndQuill {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DestroyPageAndQuill params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::InteractionInitiated(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.InteractionInitiated"));
    struct Params_InteractionInitiated {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_InteractionInitiated params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::HideRevealHint(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.HideRevealHint"));
    struct Params_HideRevealHint {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HideRevealHint params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::SceneRigActionTakingControl(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SceneRigActionTakingControl"));
    struct Params_SceneRigActionTakingControl {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_SceneRigActionTakingControl params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::ShowRevealHint(USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ShowRevealHint"));
    struct Params_ShowRevealHint {
        USkinFXComponent* CallFunc_ActorStartSkinFX_skinFXComponent; // 0x0
    }; // Size: 0x8
    Params_ShowRevealHint params{};
    params.CallFunc_ActorStartSkinFX_skinFXComponent = (USkinFXComponent*)CallFunc_ActorStartSkinFX_skinFXComponent;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::Enter_Outer_Radius(float CallFunc_Add_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.Enter Outer Radius"));
    struct Params_Enter_Outer_Radius {
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x0
    }; // Size: 0x4
    Params_Enter_Outer_Radius params{};
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::DeactivateThisHotSpot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.DeactivateThisHotSpot"));
    struct Params_DeactivateThisHotSpot {
    }; // Size: 0x0
    Params_DeactivateThisHotSpot params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::EnteredOuterRadius0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.EnteredOuterRadius"));
    struct Params_EnteredOuterRadius {
    }; // Size: 0x0
    Params_EnteredOuterRadius params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::ActivateThisHotSpot() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ActivateThisHotSpot"));
    struct Params_ActivateThisHotSpot {
    }; // Size: 0x0
    Params_ActivateThisHotSpot params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::ExitOuterRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ExitOuterRadius"));
    struct Params_ExitOuterRadius {
    }; // Size: 0x0
    Params_ExitOuterRadius params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::ExitedOuterRadius0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ExitedOuterRadius"));
    struct Params_ExitedOuterRadius {
    }; // Size: 0x0
    Params_ExitedOuterRadius params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_FieldGuideHotSpot_C::SceneRigActionReleasingControl(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.SceneRigActionReleasingControl"));
    struct Params_SceneRigActionReleasingControl {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_SceneRigActionReleasingControl params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::Ping() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.Ping"));
    struct Params_Ping {
    }; // Size: 0x0
    Params_Ping params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::RevealedByRevelio0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.RevealedByRevelio"));
    struct Params_RevealedByRevelio {
    }; // Size: 0x0
    Params_RevealedByRevelio params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::DelayedRegisterForInteract() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.DelayedRegisterForInteract"));
    struct Params_DelayedRegisterForInteract {
    }; // Size: 0x0
    Params_DelayedRegisterForInteract params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::Show() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.Show"));
    struct Params_Show {
    }; // Size: 0x0
    Params_Show params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::ShowNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ShowNonCinematicElements"));
    struct Params_ShowNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::HintedByRevelio0(bool bWasHintedAt) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.HintedByRevelio"));
    struct Params_HintedByRevelio {
        bool bWasHintedAt; // 0x0
    }; // Size: 0x1
    Params_HintedByRevelio params{};
    params.bWasHintedAt = (bool)bWasHintedAt;
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::EnteredHotSpotRadius0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.EnteredHotSpotRadius"));
    struct Params_EnteredHotSpotRadius {
    }; // Size: 0x0
    Params_EnteredHotSpotRadius params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/FieldGuide/Blueprints/BP_FieldGuideHotSpot.BP_FieldGuideHotSpot_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_FieldGuideHotSpot_C::ExecuteUbergraph_BP_FieldGuideHotSpot(int32_t EntryPoint) {}
