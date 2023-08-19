#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UObject;
#pragma pack(push, 1)
class AHogwarts_Global_STREAM_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    static AHogwarts_Global_STREAM_C* StaticClass();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void EnteredRegion(UObject* Caller, FString String);
    void ExecuteUbergraph_Hogwarts_Global_STREAM(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, FString K2Node_CustomEvent_String, bool CallFunc_EqualEqual_StrStr_ReturnValue);
}; // Size: 0x258
#pragma pack(pop)
