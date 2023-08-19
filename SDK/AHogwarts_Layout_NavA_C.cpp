#include "AHogwarts_Layout_NavA_C.hpp"
#include "ALevelScriptActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPathNavigationManager.hpp"
AHogwarts_Layout_NavA_C* AHogwarts_Layout_NavA_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Hogwarts_Layout_NavA_LvlInst_163.Hogwarts_Layout_NavA_C");
    return (AHogwarts_Layout_NavA_C*)res;
}
void AHogwarts_Layout_NavA_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Hogwarts_Layout_NavA_LvlInst_163.Hogwarts_Layout_NavA_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AHogwarts_Layout_NavA_C::ExecuteUbergraph_Hogwarts_Layout_NavA(int32_t EntryPoint, UPathNavigationManager* CallFunc_Get_ReturnValue, UPathNavigationManager* CallFunc_Get_ReturnValue_1, EEndPlayReason::Type K2Node_Event_EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Hogwarts_Layout_NavA_LvlInst_163.Hogwarts_Layout_NavA_C.ExecuteUbergraph_Hogwarts_Layout_NavA"));
    struct Params_ExecuteUbergraph_Hogwarts_Layout_NavA {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UPathNavigationManager* CallFunc_Get_ReturnValue; // 0x8
        UPathNavigationManager* CallFunc_Get_ReturnValue_1; // 0x10
        EEndPlayReason::Type K2Node_Event_EndPlayReason; // 0x18
    }; // Size: 0x19
    Params_ExecuteUbergraph_Hogwarts_Layout_NavA params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UPathNavigationManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Get_ReturnValue_1 = (UPathNavigationManager*)CallFunc_Get_ReturnValue_1;
    params.K2Node_Event_EndPlayReason = (EEndPlayReason::Type)K2Node_Event_EndPlayReason;
    ProcessEvent(func, &params);
}
void AHogwarts_Layout_NavA_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Hogwarts_Layout_NavA_LvlInst_163.Hogwarts_Layout_NavA_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
