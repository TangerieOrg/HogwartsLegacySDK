#include "AActor.hpp"
#include "ABP_ShadowBlinkTravelActor_C.hpp"
#include "APawn.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USphereComponent.hpp"
ABP_ShadowBlinkTravelActor_C* ABP_ShadowBlinkTravelActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/BP_ShadowBlinkTravelActor.BP_ShadowBlinkTravelActor_C");
    return (ABP_ShadowBlinkTravelActor_C*)res;
}
void ABP_ShadowBlinkTravelActor_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_ShadowBlinkTravelActor.BP_ShadowBlinkTravelActor_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_ShadowBlinkTravelActor_C::BndEvt__BP_ShadowBlinkTravelActor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_ShadowBlinkTravelActor.BP_ShadowBlinkTravelActor_C.BndEvt__BP_ShadowBlinkTravelActor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_ShadowBlinkTravelActor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__BP_ShadowBlinkTravelActor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_ShadowBlinkTravelActor_C::ExecuteUbergraph_BP_ShadowBlinkTravelActor(int32_t EntryPoint, USceneComponent* CallFunc_GetAttachParent_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_NotEqual_ObjectObject_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_ShadowBlinkTravelActor.BP_ShadowBlinkTravelActor_C.ExecuteUbergraph_BP_ShadowBlinkTravelActor"));
    struct Params_ExecuteUbergraph_BP_ShadowBlinkTravelActor {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        USceneComponent* CallFunc_GetAttachParent_ReturnValue; // 0x8
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent; // 0x10
        AActor* K2Node_ComponentBoundEvent_OtherActor; // 0x18
        UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp; // 0x20
        int32_t K2Node_ComponentBoundEvent_OtherBodyIndex; // 0x28
        bool K2Node_ComponentBoundEvent_bFromSweep; // 0x2c
        char pad_2d[0x3];
        FHitResult K2Node_ComponentBoundEvent_SweepResult; // 0x30
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0xb8
        char pad_b9[0x7];
        APawn* CallFunc_GetInstigator_ReturnValue; // 0xc0
    }; // Size: 0xc8
    Params_ExecuteUbergraph_BP_ShadowBlinkTravelActor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetAttachParent_ReturnValue = (USceneComponent*)CallFunc_GetAttachParent_ReturnValue;
    params.K2Node_ComponentBoundEvent_OverlappedComponent = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OverlappedComponent;
    params.K2Node_ComponentBoundEvent_OtherActor = (AActor*)K2Node_ComponentBoundEvent_OtherActor;
    params.K2Node_ComponentBoundEvent_OtherComp = (UPrimitiveComponent*)K2Node_ComponentBoundEvent_OtherComp;
    params.K2Node_ComponentBoundEvent_OtherBodyIndex = (int32_t)K2Node_ComponentBoundEvent_OtherBodyIndex;
    params.K2Node_ComponentBoundEvent_bFromSweep = (bool)K2Node_ComponentBoundEvent_bFromSweep;
    params.K2Node_ComponentBoundEvent_SweepResult = (FHitResult)K2Node_ComponentBoundEvent_SweepResult;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_GetInstigator_ReturnValue = (APawn*)CallFunc_GetInstigator_ReturnValue;
    ProcessEvent(func, &params);
}
