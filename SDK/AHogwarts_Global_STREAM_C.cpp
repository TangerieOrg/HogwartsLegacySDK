#include "AHogwarts_Global_STREAM_C.hpp"
#include "ALevelScriptActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void AHogwarts_Global_STREAM_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Hogwarts_Global_STREAM_LvlInst_161.Hogwarts_Global_STREAM_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
AHogwarts_Global_STREAM_C* AHogwarts_Global_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Hogwarts_Global_STREAM_LvlInst_161.Hogwarts_Global_STREAM_C");
    return (AHogwarts_Global_STREAM_C*)res;
}
void AHogwarts_Global_STREAM_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Hogwarts_Global_STREAM_LvlInst_161.Hogwarts_Global_STREAM_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AHogwarts_Global_STREAM_C::EnteredRegion(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Hogwarts_Global_STREAM_LvlInst_161.Hogwarts_Global_STREAM_C.EnteredRegion"));
    struct Params_EnteredRegion {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_EnteredRegion params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void AHogwarts_Global_STREAM_C::ExecuteUbergraph_Hogwarts_Global_STREAM(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, FString K2Node_CustomEvent_String, bool CallFunc_EqualEqual_StrStr_ReturnValue) {}
