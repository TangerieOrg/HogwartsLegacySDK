#include "AActor.hpp"
#include "ABP_WallaTrigger_C.hpp"
#include "ACharacter.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FEventDateTime.hpp"
#include "FHitResult.hpp"
#include "FMissionName.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimeEvent.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
ABP_WallaTrigger_C* ABP_WallaTrigger_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_WallaTrigger.BP_WallaTrigger_C");
    return (ABP_WallaTrigger_C*)res;
}
void ABP_WallaTrigger_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_WallaTrigger.BP_WallaTrigger_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_WallaTrigger_C::Player_in_Trig(bool& IsInside, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_WallaTrigger.BP_WallaTrigger_C.Player in Trig"));
    struct Params_Player_in_Trig {
        bool IsInside; // 0x0
        char pad_1[0x7];
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x8
        bool CallFunc_IsOverlappingActor_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Player_in_Trig params{};
    params.IsInside = (bool)IsInside;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.CallFunc_IsOverlappingActor_ReturnValue = (bool)CallFunc_IsOverlappingActor_ReturnValue;
    ProcessEvent(func, &params);
    IsInside = params.IsInside;
}
void ABP_WallaTrigger_C::ExecuteUbergraph_BP_WallaTrigger(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
void ABP_WallaTrigger_C::CustomEvent_0(FTimeEvent& InTimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_WallaTrigger.BP_WallaTrigger_C.CustomEvent_0"));
    struct Params_CustomEvent_0 {
        FTimeEvent InTimeEvent; // 0x0
    }; // Size: 0x30
    Params_CustomEvent_0 params{};
    params.InTimeEvent = (FTimeEvent)InTimeEvent;
    ProcessEvent(func, &params);
    InTimeEvent = params.InTimeEvent;
}
void ABP_WallaTrigger_C::BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_WallaTrigger.BP_WallaTrigger_C.BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_WallaTrigger_C::BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_WallaTrigger.BP_WallaTrigger_C.BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__BP_WallaTrigger_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_WallaTrigger_C::CustomEvent_1(FTimeEvent& InTimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_WallaTrigger.BP_WallaTrigger_C.CustomEvent_1"));
    struct Params_CustomEvent_1 {
        FTimeEvent InTimeEvent; // 0x0
    }; // Size: 0x30
    Params_CustomEvent_1 params{};
    params.InTimeEvent = (FTimeEvent)InTimeEvent;
    ProcessEvent(func, &params);
    InTimeEvent = params.InTimeEvent;
}
void ABP_WallaTrigger_C::StartWalla(bool TRUE) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_WallaTrigger.BP_WallaTrigger_C.StartWalla"));
    struct Params_StartWalla {
        bool TRUE; // 0x0
    }; // Size: 0x1
    Params_StartWalla params{};
    params.TRUE = (bool)TRUE;
    ProcessEvent(func, &params);
}
void ABP_WallaTrigger_C::RegisterTimeEvents(bool Register) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Classroom/Blueprints/BP_WallaTrigger.BP_WallaTrigger_C.RegisterTimeEvents"));
    struct Params_RegisterTimeEvents {
        bool Register; // 0x0
    }; // Size: 0x1
    Params_RegisterTimeEvents params{};
    params.Register = (bool)Register;
    ProcessEvent(func, &params);
}
