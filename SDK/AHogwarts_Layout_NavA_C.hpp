#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UPathNavigationManager;
#pragma pack(push, 1)
class AHogwarts_Layout_NavA_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    static AHogwarts_Layout_NavA_C* StaticClass();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_Hogwarts_Layout_NavA(int32_t EntryPoint, UPathNavigationManager* CallFunc_Get_ReturnValue, UPathNavigationManager* CallFunc_Get_ReturnValue_1, EEndPlayReason::Type K2Node_Event_EndPlayReason);
}; // Size: 0x258
#pragma pack(pop)
