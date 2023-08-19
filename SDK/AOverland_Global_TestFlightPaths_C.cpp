#include "ALevelScriptActor.hpp"
#include "AOverland_Global_TestFlightPaths_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
void AOverland_Global_TestFlightPaths_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland_Global_TestFlightPaths.Overland_Global_TestFlightPaths_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
AOverland_Global_TestFlightPaths_C* AOverland_Global_TestFlightPaths_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland_Global_TestFlightPaths.Overland_Global_TestFlightPaths_C");
    return (AOverland_Global_TestFlightPaths_C*)res;
}
void AOverland_Global_TestFlightPaths_C::ExecuteUbergraph_Overland_Global_TestFlightPaths(int32_t EntryPoint, bool CallFunc_IsPackagedForDistribution_ReturnValue, FString CallFunc_GetCurrentLevelName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland_Global_TestFlightPaths.Overland_Global_TestFlightPaths_C.ExecuteUbergraph_Overland_Global_TestFlightPaths"));
    struct Params_ExecuteUbergraph_Overland_Global_TestFlightPaths {
        int32_t EntryPoint; // 0x0
        bool CallFunc_IsPackagedForDistribution_ReturnValue; // 0x4
        char pad_5[0x3];
        FString CallFunc_GetCurrentLevelName_ReturnValue; // 0x8
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_ExecuteUbergraph_Overland_Global_TestFlightPaths params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_IsPackagedForDistribution_ReturnValue = (bool)CallFunc_IsPackagedForDistribution_ReturnValue;
    params.CallFunc_GetCurrentLevelName_ReturnValue = (FString)CallFunc_GetCurrentLevelName_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    ProcessEvent(func, &params);
}
