#include "ABP_Mission_VOTrigger_C.hpp"
#include "ALevelScriptActor.hpp"
#include "AM_COM_10_C.hpp"
#include "FMissionID.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void AM_COM_10_C::Updated_COM_10(UObject* Caller, FMissionID& MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_COM_10_0.M_COM_10_C.Updated COM_10"));
    struct Params_Updated_COM_10 {
        UObject* Caller; // 0x0
        FMissionID MissionID; // 0x8
    }; // Size: 0x10
    Params_Updated_COM_10 params{};
    params.Caller = (UObject*)Caller;
    params.MissionID = (FMissionID)MissionID;
    ProcessEvent(func, &params);
    MissionID = params.MissionID;
}
AM_COM_10_C* AM_COM_10_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Missions/M_COM_10_0.M_COM_10_C");
    return (AM_COM_10_C*)res;
}
void AM_COM_10_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Missions/M_COM_10_0.M_COM_10_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AM_COM_10_C::ExecuteUbergraph_M_COM_10(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, FMissionID K2Node_CustomEvent_MissionID) {}
