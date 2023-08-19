#include "ABP_RaceTurboBubble_C.hpp"
#include "ALevelScriptActor.hpp"
#include "AM_ZZM_01_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void AM_ZZM_01_C::ZZM_01_Tower_Updated(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZM_01_7.M_ZZM_01_C.ZZM_01_Tower_Updated"));
    struct Params_ZZM_01_Tower_Updated {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_ZZM_01_Tower_Updated params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void AM_ZZM_01_C::ZZM_01_Spires_Updated(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZM_01_7.M_ZZM_01_C.ZZM_01_Spires_Updated"));
    struct Params_ZZM_01_Spires_Updated {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_ZZM_01_Spires_Updated params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
AM_ZZM_01_C* AM_ZZM_01_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Missions/M_ZZM_01_7.M_ZZM_01_C");
    return (AM_ZZM_01_C*)res;
}
void AM_ZZM_01_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_ZZM_01_7.M_ZZM_01_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AM_ZZM_01_C::ExecuteUbergraph_M_ZZM_01(int32_t EntryPoint, bool CallFunc_GetMissionComplete_ReturnValue) {}
