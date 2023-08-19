#include "AActor.hpp"
#include "ABP_CooldownPickup_All_C.hpp"
#include "ACooldownPickup.hpp"
#include "EEnvironment\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UCapsuleComponent.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
void ABP_CooldownPickup_All_C::BndEvt__BP_CooldownPickup_All_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.BndEvt__BP_CooldownPickup_All_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_CooldownPickup_All_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__BP_CooldownPickup_All_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
ABP_CooldownPickup_All_C* ABP_CooldownPickup_All_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C");
    return (ABP_CooldownPickup_All_C*)res;
}
void ABP_CooldownPickup_All_C::BndEvt__BP_CooldownPickup_All_Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.BndEvt__BP_CooldownPickup_All_Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature"));
    struct Params_BndEvt__BP_CooldownPickup_All_Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature {
        UPrimitiveComponent* HitComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        FVector NormalImpulse; // 0x18
        FHitResult Hit; // 0x24
    }; // Size: 0xac
    Params_BndEvt__BP_CooldownPickup_All_Capsule_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature params{};
    params.HitComponent = (UPrimitiveComponent*)HitComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.NormalImpulse = (FVector)NormalImpulse;
    params.Hit = (FHitResult)Hit;
    ProcessEvent(func, &params);
    Hit = params.Hit;
}
void ABP_CooldownPickup_All_C::UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, float CallFunc_RandomFloatInRangeFromStream_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        FRandomStream CallFunc_MakeRandomStream_RandomStream; // 0xc
        float CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x14
    }; // Size: 0x18
    Params_UserConstructionScript params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_MakeRandomStream_RandomStream = (FRandomStream)CallFunc_MakeRandomStream_RandomStream;
    params.CallFunc_RandomFloatInRangeFromStream_ReturnValue = (float)CallFunc_RandomFloatInRangeFromStream_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_CooldownPickup_All_C::BndEvt__BP_CooldownPickup_Red_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.BndEvt__BP_CooldownPickup_Red_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_CooldownPickup_Red_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__BP_CooldownPickup_Red_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_CooldownPickup_All_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_CooldownPickup_All_C::ShowNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.ShowNonCinematicElements"));
    struct Params_ShowNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_CooldownPickup_All_C::HideNonCinematicElements(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.HideNonCinematicElements"));
    struct Params_HideNonCinematicElements {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideNonCinematicElements params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_CooldownPickup_All_C::FinisherCast(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.FinisherCast"));
    struct Params_FinisherCast {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FinisherCast params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_CooldownPickup_All_C::OnResetRecycle0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.OnResetRecycle"));
    struct Params_OnResetRecycle {
    }; // Size: 0x0
    Params_OnResetRecycle params{};
    ProcessEvent(func, &params);
}
void ABP_CooldownPickup_All_C::ExecuteUbergraph_BP_CooldownPickup_All(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_CooldownPickup_All_C::onBagEmpty__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CooldownPickup_All.BP_CooldownPickup_All_C.onBagEmpty__DelegateSignature"));
    struct Params_onBagEmpty__DelegateSignature {
    }; // Size: 0x0
    Params_onBagEmpty__DelegateSignature params{};
    ProcessEvent(func, &params);
}
