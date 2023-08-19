#include "ALevelScriptActor.hpp"
#include "ANoDismountZoneVolume.hpp"
#include "ANoMountZoneVolume.hpp"
#include "ASUB_RavenclawTower_STREAM_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UUIManager.hpp"
ASUB_RavenclawTower_STREAM_C* ASUB_RavenclawTower_STREAM_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/SUB_RavenclawTower/SUB_RavenclawTower_STREAM_LvlInst_129.SUB_RavenclawTower_STREAM_C");
    return (ASUB_RavenclawTower_STREAM_C*)res;
}
void ASUB_RavenclawTower_STREAM_C::ExecuteUbergraph_SUB_RavenclawTower_STREAM(int32_t EntryPoint, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/SUB_RavenclawTower/SUB_RavenclawTower_STREAM_LvlInst_129.SUB_RavenclawTower_STREAM_C.ExecuteUbergraph_SUB_RavenclawTower_STREAM"));
    struct Params_ExecuteUbergraph_SUB_RavenclawTower_STREAM {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ExecuteUbergraph_SUB_RavenclawTower_STREAM params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void ASUB_RavenclawTower_STREAM_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/SUB_RavenclawTower/SUB_RavenclawTower_STREAM_LvlInst_129.SUB_RavenclawTower_STREAM_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
