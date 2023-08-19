#include "AActor.hpp"
#include "ABP_MapPath_ArrayActor_C.hpp"
#include "ACharacter.hpp"
#include "ATargetPoint.hpp"
#include "ATriggerBox.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UUIManager.hpp"
ABP_MapPath_ArrayActor_C* ABP_MapPath_ArrayActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C");
    return (ABP_MapPath_ArrayActor_C*)res;
}
void ABP_MapPath_ArrayActor_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_MapPath_ArrayActor_C::EnteredTrig(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C.EnteredTrig"));
    struct Params_EnteredTrig {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_EnteredTrig params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_MapPath_ArrayActor_C::DM01_01_Updated(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C.DM01_01_Updated"));
    struct Params_DM01_01_Updated {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_DM01_01_Updated params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void ABP_MapPath_ArrayActor_C::ExecuteUbergraph_BP_MapPath_ArrayActor(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, FName K2Node_CustomEvent_String, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_2, AActor* K2Node_CustomEvent_OverlappedActor, AActor* K2Node_CustomEvent_OtherActor, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FName CallFunc_GetMissionName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FString CallFunc_GetMissionStepBP_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/BP_MapPath_ArrayActor.BP_MapPath_ArrayActor_C.ExecuteUbergraph_BP_MapPath_ArrayActor"));
    struct Params_ExecuteUbergraph_BP_MapPath_ArrayActor {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UObject* K2Node_CustomEvent_Caller; // 0x8
        FName K2Node_CustomEvent_String; // 0x10
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x18
        bool CallFunc_Array_IsValidIndex_ReturnValue_1; // 0x19
        bool CallFunc_Array_IsValidIndex_ReturnValue_2; // 0x1a
        char pad_1b[0x5];
        AActor* K2Node_CustomEvent_OverlappedActor; // 0x20
        AActor* K2Node_CustomEvent_OtherActor; // 0x28
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x30
        FName CallFunc_GetMissionName_ReturnValue; // 0x38
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x40
        char pad_41[0x7];
        FString CallFunc_GetMissionStepBP_ReturnValue; // 0x48
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x58
        char pad_59[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x60
    }; // Size: 0x68
    Params_ExecuteUbergraph_BP_MapPath_ArrayActor params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomEvent_Caller = (UObject*)K2Node_CustomEvent_Caller;
    params.K2Node_CustomEvent_String = (FName)K2Node_CustomEvent_String;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    params.CallFunc_Array_IsValidIndex_ReturnValue_1 = (bool)CallFunc_Array_IsValidIndex_ReturnValue_1;
    params.CallFunc_Array_IsValidIndex_ReturnValue_2 = (bool)CallFunc_Array_IsValidIndex_ReturnValue_2;
    params.K2Node_CustomEvent_OverlappedActor = (AActor*)K2Node_CustomEvent_OverlappedActor;
    params.K2Node_CustomEvent_OtherActor = (AActor*)K2Node_CustomEvent_OtherActor;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.CallFunc_GetMissionName_ReturnValue = (FName)CallFunc_GetMissionName_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_GetMissionStepBP_ReturnValue = (FString)CallFunc_GetMissionStepBP_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    ProcessEvent(func, &params);
}
