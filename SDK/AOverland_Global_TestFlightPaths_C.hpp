#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class AOverland_Global_TestFlightPaths_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    static AOverland_Global_TestFlightPaths_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Overland_Global_TestFlightPaths(int32_t EntryPoint, bool CallFunc_IsPackagedForDistribution_ReturnValue, FString CallFunc_GetCurrentLevelName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue);
}; // Size: 0x258
#pragma pack(pop)
