#include "ALevelScriptActor.hpp"
#include "ASUB_Audio_Hogwarts_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
ASUB_Audio_Hogwarts_C* ASUB_Audio_Hogwarts_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_Audio_Hogwarts_LvlInst_166.SUB_Audio_Hogwarts_C");
    return (ASUB_Audio_Hogwarts_C*)res;
}
void ASUB_Audio_Hogwarts_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/SUB_Audio_Hogwarts_LvlInst_166.SUB_Audio_Hogwarts_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ASUB_Audio_Hogwarts_C::ExecuteUbergraph_SUB_Audio_Hogwarts(int32_t EntryPoint) {}
void ASUB_Audio_Hogwarts_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/SUB_Audio_Hogwarts_LvlInst_166.SUB_Audio_Hogwarts_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
