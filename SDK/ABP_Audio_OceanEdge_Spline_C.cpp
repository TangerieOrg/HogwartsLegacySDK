#include "AActor.hpp"
#include "ABP_Audio_OceanEdge_Spline_C.hpp"
#include "ABiped_Player.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USplineComponent.hpp"
ABP_Audio_OceanEdge_Spline_C* ABP_Audio_OceanEdge_Spline_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/SupportBP/BP_Audio_OceanEdge_Spline.BP_Audio_OceanEdge_Spline_C");
    return (ABP_Audio_OceanEdge_Spline_C*)res;
}
void ABP_Audio_OceanEdge_Spline_C::TickTimerEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_Audio_OceanEdge_Spline.BP_Audio_OceanEdge_Spline_C.TickTimerEvent"));
    struct Params_TickTimerEvent {
    }; // Size: 0x0
    Params_TickTimerEvent params{};
    ProcessEvent(func, &params);
}
void ABP_Audio_OceanEdge_Spline_C::TickThrottler_WakeUp(float DistanceSquaredToCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_Audio_OceanEdge_Spline.BP_Audio_OceanEdge_Spline_C.TickThrottler_WakeUp"));
    struct Params_TickThrottler_WakeUp {
        float DistanceSquaredToCamera; // 0x0
    }; // Size: 0x4
    Params_TickThrottler_WakeUp params{};
    params.DistanceSquaredToCamera = (float)DistanceSquaredToCamera;
    ProcessEvent(func, &params);
}
void ABP_Audio_OceanEdge_Spline_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_Audio_OceanEdge_Spline.BP_Audio_OceanEdge_Spline_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Audio_OceanEdge_Spline_C::TickThrottler_KeepAlive(float DeltaTime, float DistanceSquaredToCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_Audio_OceanEdge_Spline.BP_Audio_OceanEdge_Spline_C.TickThrottler_KeepAlive"));
    struct Params_TickThrottler_KeepAlive {
        float DeltaTime; // 0x0
        float DistanceSquaredToCamera; // 0x4
    }; // Size: 0x8
    Params_TickThrottler_KeepAlive params{};
    params.DeltaTime = (float)DeltaTime;
    params.DistanceSquaredToCamera = (float)DistanceSquaredToCamera;
    ProcessEvent(func, &params);
}
void ABP_Audio_OceanEdge_Spline_C::TickThrottler_GoToSleep(float DistanceSquaredToCamera) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_Audio_OceanEdge_Spline.BP_Audio_OceanEdge_Spline_C.TickThrottler_GoToSleep"));
    struct Params_TickThrottler_GoToSleep {
        float DistanceSquaredToCamera; // 0x0
    }; // Size: 0x4
    Params_TickThrottler_GoToSleep params{};
    params.DistanceSquaredToCamera = (float)DistanceSquaredToCamera;
    ProcessEvent(func, &params);
}
void ABP_Audio_OceanEdge_Spline_C::BndEvt__ActivateBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_Audio_OceanEdge_Spline.BP_Audio_OceanEdge_Spline_C.BndEvt__ActivateBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__ActivateBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__ActivateBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_Audio_OceanEdge_Spline_C::BndEvt__ActivateBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/SupportBP/BP_Audio_OceanEdge_Spline.BP_Audio_OceanEdge_Spline_C.BndEvt__ActivateBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__ActivateBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__ActivateBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_Audio_OceanEdge_Spline_C::ExecuteUbergraph_BP_Audio_OceanEdge_Spline(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue) {}
