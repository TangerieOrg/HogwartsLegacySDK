#include "AActor.hpp"
#include "ABP_Clock_C.hpp"
#include "ABP_Clocktower_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimeEvent.hpp"
#include "FVector.hpp"
#include "UArrestoMomentumComponent.hpp"
#include "UFunction.hpp"
#include "UObjectStateComponent.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
bool ABP_Clock_C::StartFreeze(AActor* Instigator, float Amount, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetFrozen_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.StartFreeze"));
    struct Params_StartFreeze {
        AActor* Instigator; // 0x0
        float Amount; // 0x8
        bool ReturnValue; // 0xc
        bool CallFunc_IsValid_ReturnValue; // 0xd
        bool CallFunc_SetFrozen_ReturnValue; // 0xe
    }; // Size: 0xf
    Params_StartFreeze params{};
    params.Instigator = (AActor*)Instigator;
    params.Amount = (float)Amount;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_SetFrozen_ReturnValue = (bool)CallFunc_SetFrozen_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Clock_C::HourTImeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.HourTImeline__UpdateFunc"));
    struct Params_HourTImeline__UpdateFunc {
    }; // Size: 0x0
    Params_HourTImeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Clock_C::HourTImeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.HourTImeline__FinishedFunc"));
    struct Params_HourTImeline__FinishedFunc {
    }; // Size: 0x0
    Params_HourTImeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
ABP_Clock_C* ABP_Clock_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C");
    return (ABP_Clock_C*)res;
}
bool ABP_Clock_C::DisallowArrestoMomentum(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.DisallowArrestoMomentum"));
    struct Params_DisallowArrestoMomentum {
        bool ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        bool CallFunc_Not_PreBool_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_DisallowArrestoMomentum params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_Clock_C::MinuteTimeline__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.MinuteTimeline__FinishedFunc"));
    struct Params_MinuteTimeline__FinishedFunc {
    }; // Size: 0x0
    Params_MinuteTimeline__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Clock_C::SetInitialRotation(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, int32_t CallFunc_GetSimulatedMinuteBP_ReturnValue, int32_t CallFunc_GetSimulatedHourBP_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32_t CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_4, int32_t CallFunc_Multiply_IntInt_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_3, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_2, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.SetInitialRotation"));
    struct Params_SetInitialRotation {
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x0
        float CallFunc_Conv_IntToFloat_ReturnValue_1; // 0x4
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult; // 0x8
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1; // 0x90
        int32_t CallFunc_GetSimulatedMinuteBP_ReturnValue; // 0x118
        int32_t CallFunc_GetSimulatedHourBP_ReturnValue; // 0x11c
        float CallFunc_Conv_IntToFloat_ReturnValue_2; // 0x120
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0x124
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x128
        int32_t CallFunc_Multiply_IntInt_ReturnValue_1; // 0x12c
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0x130
        float CallFunc_Conv_IntToFloat_ReturnValue_3; // 0x134
        FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue; // 0x138
        FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_1; // 0x144
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x150
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x154
        int32_t CallFunc_Multiply_IntInt_ReturnValue_2; // 0x158
        float CallFunc_Conv_IntToFloat_ReturnValue_4; // 0x15c
        int32_t CallFunc_Multiply_IntInt_ReturnValue_3; // 0x160
        float CallFunc_Multiply_FloatFloat_ReturnValue_2; // 0x164
        float CallFunc_Conv_IntToFloat_ReturnValue_5; // 0x168
        float CallFunc_Multiply_FloatFloat_ReturnValue_3; // 0x16c
        FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_2; // 0x170
        FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_3; // 0x17c
    }; // Size: 0x188
    Params_SetInitialRotation params{};
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue_1 = (float)CallFunc_Conv_IntToFloat_ReturnValue_1;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
    params.CallFunc_GetSimulatedMinuteBP_ReturnValue = (int32_t)CallFunc_GetSimulatedMinuteBP_ReturnValue;
    params.CallFunc_GetSimulatedHourBP_ReturnValue = (int32_t)CallFunc_GetSimulatedHourBP_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue_2 = (float)CallFunc_Conv_IntToFloat_ReturnValue_2;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_IntInt_ReturnValue_1 = (int32_t)CallFunc_Multiply_IntInt_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Conv_IntToFloat_ReturnValue_3 = (float)CallFunc_Conv_IntToFloat_ReturnValue_3;
    params.CallFunc_RotatorFromAxisAndAngle_ReturnValue = (FRotator)CallFunc_RotatorFromAxisAndAngle_ReturnValue;
    params.CallFunc_RotatorFromAxisAndAngle_ReturnValue_1 = (FRotator)CallFunc_RotatorFromAxisAndAngle_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Multiply_IntInt_ReturnValue_2 = (int32_t)CallFunc_Multiply_IntInt_ReturnValue_2;
    params.CallFunc_Conv_IntToFloat_ReturnValue_4 = (float)CallFunc_Conv_IntToFloat_ReturnValue_4;
    params.CallFunc_Multiply_IntInt_ReturnValue_3 = (int32_t)CallFunc_Multiply_IntInt_ReturnValue_3;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_2 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_2;
    params.CallFunc_Conv_IntToFloat_ReturnValue_5 = (float)CallFunc_Conv_IntToFloat_ReturnValue_5;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_3 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_3;
    params.CallFunc_RotatorFromAxisAndAngle_ReturnValue_2 = (FRotator)CallFunc_RotatorFromAxisAndAngle_ReturnValue_2;
    params.CallFunc_RotatorFromAxisAndAngle_ReturnValue_3 = (FRotator)CallFunc_RotatorFromAxisAndAngle_ReturnValue_3;
    ProcessEvent(func, &params);
}
void ABP_Clock_C::UserConstructionScript0(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32_t CallFunc_Multiply_IntInt_ReturnValue, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Conv_IntToFloat_ReturnValue_2, FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x0
        float CallFunc_Conv_IntToFloat_ReturnValue_1; // 0x4
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x8
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0xc
        int32_t CallFunc_Multiply_IntInt_ReturnValue; // 0x10
        FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue; // 0x14
        int32_t CallFunc_Multiply_IntInt_ReturnValue_1; // 0x20
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult; // 0x24
        float CallFunc_Conv_IntToFloat_ReturnValue_2; // 0xac
        FRotator CallFunc_RotatorFromAxisAndAngle_ReturnValue_1; // 0xb0
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1; // 0xbc
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x144
        bool CallFunc_SetStaticMesh_ReturnValue_1; // 0x145
    }; // Size: 0x146
    Params_UserConstructionScript params{};
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue_1 = (float)CallFunc_Conv_IntToFloat_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_Multiply_IntInt_ReturnValue = (int32_t)CallFunc_Multiply_IntInt_ReturnValue;
    params.CallFunc_RotatorFromAxisAndAngle_ReturnValue = (FRotator)CallFunc_RotatorFromAxisAndAngle_ReturnValue;
    params.CallFunc_Multiply_IntInt_ReturnValue_1 = (int32_t)CallFunc_Multiply_IntInt_ReturnValue_1;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult;
    params.CallFunc_Conv_IntToFloat_ReturnValue_2 = (float)CallFunc_Conv_IntToFloat_ReturnValue_2;
    params.CallFunc_RotatorFromAxisAndAngle_ReturnValue_1 = (FRotator)CallFunc_RotatorFromAxisAndAngle_ReturnValue_1;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue_1 = (bool)CallFunc_SetStaticMesh_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_Clock_C::MinuteTimeline__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.MinuteTimeline__UpdateFunc"));
    struct Params_MinuteTimeline__UpdateFunc {
    }; // Size: 0x0
    Params_MinuteTimeline__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Clock_C::OnAttemptToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.OnAttemptToFreeze"));
    struct Params_OnAttemptToFreeze {
    }; // Size: 0x0
    Params_OnAttemptToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_Clock_C::OnFailedToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.OnFailedToFreeze"));
    struct Params_OnFailedToFreeze {
    }; // Size: 0x0
    Params_OnFailedToFreeze params{};
    ProcessEvent(func, &params);
}
void ABP_Clock_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Clock_C::ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_Clock_C::UpdateHour(FTimeEvent& InTimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.UpdateHour"));
    struct Params_UpdateHour {
        FTimeEvent InTimeEvent; // 0x0
    }; // Size: 0x30
    Params_UpdateHour params{};
    params.InTimeEvent = (FTimeEvent)InTimeEvent;
    ProcessEvent(func, &params);
    InTimeEvent = params.InTimeEvent;
}
void ABP_Clock_C::OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.OnArrestoMomentumBegin"));
    struct Params_OnArrestoMomentumBegin {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
        float TimeDilation; // 0x10
    }; // Size: 0x14
    Params_OnArrestoMomentumBegin params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    params.TimeDilation = (float)TimeDilation;
    ProcessEvent(func, &params);
}
void ABP_Clock_C::UpdateMinute(FTimeEvent& InTimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.UpdateMinute"));
    struct Params_UpdateMinute {
        FTimeEvent InTimeEvent; // 0x0
    }; // Size: 0x30
    Params_UpdateMinute params{};
    params.InTimeEvent = (FTimeEvent)InTimeEvent;
    ProcessEvent(func, &params);
    InTimeEvent = params.InTimeEvent;
}
void ABP_Clock_C::OnThaw(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.OnThaw"));
    struct Params_OnThaw {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnThaw params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Clock_C::BndEvt__Gears_K2Node_ComponentBoundEvent_0_Frozen__DelegateSignature(bool bFreeze, AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.BndEvt__Gears_K2Node_ComponentBoundEvent_0_Frozen__DelegateSignature"));
    struct Params_BndEvt__Gears_K2Node_ComponentBoundEvent_0_Frozen__DelegateSignature {
        bool bFreeze; // 0x0
        char pad_1[0x7];
        AActor* Instigator; // 0x8
    }; // Size: 0x10
    Params_BndEvt__Gears_K2Node_ComponentBoundEvent_0_Frozen__DelegateSignature params{};
    params.bFreeze = (bool)bFreeze;
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_Clock_C::OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.OnArrestoMomentumEnd"));
    struct Params_OnArrestoMomentumEnd {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
    }; // Size: 0x10
    Params_OnArrestoMomentumEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    ProcessEvent(func, &params);
}
void ABP_Clock_C::BndEvt__Gears_K2Node_ComponentBoundEvent_1_Arresto__DelegateSignature(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.BndEvt__Gears_K2Node_ComponentBoundEvent_1_Arresto__DelegateSignature"));
    struct Params_BndEvt__Gears_K2Node_ComponentBoundEvent_1_Arresto__DelegateSignature {
        float Duration; // 0x0
    }; // Size: 0x4
    Params_BndEvt__Gears_K2Node_ComponentBoundEvent_1_Arresto__DelegateSignature params{};
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void ABP_Clock_C::BndEvt__Gears_K2Node_ComponentBoundEvent_2_ArrestoEnd__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_Clock.BP_Clock_C.BndEvt__Gears_K2Node_ComponentBoundEvent_2_ArrestoEnd__DelegateSignature"));
    struct Params_BndEvt__Gears_K2Node_ComponentBoundEvent_2_ArrestoEnd__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Gears_K2Node_ComponentBoundEvent_2_ArrestoEnd__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Clock_C::ExecuteUbergraph_BP_Clock(int32_t EntryPoint) {}
