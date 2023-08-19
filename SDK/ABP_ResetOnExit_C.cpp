#include "AActor.hpp"
#include "ABP_ResetOnExit_C.hpp"
#include "ATargetPoint.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "USphereComponent.hpp"
ABP_ResetOnExit_C* ABP_ResetOnExit_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Utilities/BP_ResetOnExit.BP_ResetOnExit_C");
    return (ABP_ResetOnExit_C*)res;
}
void ABP_ResetOnExit_C::ResetAll() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ResetOnExit.BP_ResetOnExit_C.ResetAll"));
    struct Params_ResetAll {
    }; // Size: 0x0
    Params_ResetAll params{};
    ProcessEvent(func, &params);
}
bool ABP_ResetOnExit_C::StatCheck(bool AssignLocations, bool StatCleared, int32_t CallFunc_ReadStat_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ResetOnExit.BP_ResetOnExit_C.StatCheck"));
    struct Params_StatCheck {
        bool AssignLocations; // 0x0
        bool ReturnValue; // 0x1
        bool StatCleared; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_ReadStat_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_NameName_ReturnValue; // 0x8
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_StatCheck params{};
    params.AssignLocations = (bool)AssignLocations;
    params.StatCleared = (bool)StatCleared;
    params.CallFunc_ReadStat_ReturnValue = (int32_t)CallFunc_ReadStat_ReturnValue;
    params.CallFunc_EqualEqual_NameName_ReturnValue = (bool)CallFunc_EqualEqual_NameName_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ABP_ResetOnExit_C::UserConstructionScript0(FVector CallFunc_Conv_FloatToVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ResetOnExit.BP_ResetOnExit_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FVector CallFunc_Conv_FloatToVector_ReturnValue; // 0x0
    }; // Size: 0xc
    Params_UserConstructionScript params{};
    params.CallFunc_Conv_FloatToVector_ReturnValue = (FVector)CallFunc_Conv_FloatToVector_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_ResetOnExit_C::BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ResetOnExit.BP_ResetOnExit_C.BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ABP_ResetOnExit_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ResetOnExit.BP_ResetOnExit_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_ResetOnExit_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ResetOnExit.BP_ResetOnExit_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_ResetOnExit_C::BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ResetOnExit.BP_ResetOnExit_C.BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"));
    struct Params_BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BndEvt__BP_ResetOnExit_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ABP_ResetOnExit_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_ResetOnExit.BP_ResetOnExit_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_ResetOnExit_C::ExecuteUbergraph_BP_ResetOnExit(int32_t EntryPoint, bool CallFunc_StatCheck_ReturnValue, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, FTransform CallFunc_MakeTransform_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_4, int32_t Temp_int_Array_Index_Variable_1, AActor* K2Node_Event_SwitchActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1) {}
