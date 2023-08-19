#include "AActor.hpp"
#include "ACPPActor_C.hpp"
#include "ACPP_C.hpp"
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
void ACPP_C::ExecuteUbergraph_CPP(int32_t EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, FString K2Node_CustomEvent_Message, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ACPPActor_C* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_Event_DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ML-CPP.CPP_C.ExecuteUbergraph_CPP"));
    struct Params_ExecuteUbergraph_CPP {
        int32_t EntryPoint; // 0x0
        char pad_4[0xc];
        FTransform CallFunc_MakeTransform_ReturnValue; // 0x10
        FString K2Node_CustomEvent_Message; // 0x40
        AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x50
        ACPPActor_C* CallFunc_FinishSpawningActor_ReturnValue; // 0x58
        float K2Node_Event_DeltaSeconds; // 0x60
    }; // Size: 0x64
    Params_ExecuteUbergraph_CPP params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_MakeTransform_ReturnValue = (FTransform)CallFunc_MakeTransform_ReturnValue;
    params.K2Node_CustomEvent_Message = (FString)K2Node_CustomEvent_Message;
    params.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = (AActor*)CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
    params.CallFunc_FinishSpawningActor_ReturnValue = (ACPPActor_C*)CallFunc_FinishSpawningActor_ReturnValue;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    ProcessEvent(func, &params);
}
ACPP_C* ACPP_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/CustomContent/ML-CPP.CPP_C");
    return (ACPP_C*)res;
}
void ACPP_C::PrintToModLoader(FString Message) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ML-CPP.CPP_C.PrintToModLoader"));
    struct Params_PrintToModLoader {
        FString Message; // 0x0
    }; // Size: 0x10
    Params_PrintToModLoader params{};
    params.Message = (FString)Message;
    ProcessEvent(func, &params);
}
void ACPP_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ML-CPP.CPP_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void ACPP_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ML-CPP.CPP_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
