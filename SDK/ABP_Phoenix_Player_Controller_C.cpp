#include "ABP_Phoenix_Player_Controller_C.hpp"
#include "APhoenixPlayerController.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UUIManager.hpp"
ABP_Phoenix_Player_Controller_C* ABP_Phoenix_Player_Controller_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/BP_Phoenix_Player_Controller.BP_Phoenix_Player_Controller_C");
    return (ABP_Phoenix_Player_Controller_C*)res;
}
void ABP_Phoenix_Player_Controller_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Phoenix_Player_Controller.BP_Phoenix_Player_Controller_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Phoenix_Player_Controller_C::ExecuteUbergraph_BP_Phoenix_Player_Controller(int32_t EntryPoint, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlatformName_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/Player/BP_Phoenix_Player_Controller.BP_Phoenix_Player_Controller_C.ExecuteUbergraph_BP_Phoenix_Player_Controller"));
    struct Params_ExecuteUbergraph_BP_Phoenix_Player_Controller {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
        FString CallFunc_GetPlatformName_ReturnValue; // 0x10
        FString CallFunc_GetPlayerHouse_ReturnValue; // 0x20
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x31
        bool CallFunc_EqualEqual_StrStr_ReturnValue_2; // 0x32
        bool CallFunc_EqualEqual_StrStr_ReturnValue_3; // 0x33
        bool CallFunc_EqualEqual_StrStr_ReturnValue_4; // 0x34
        bool CallFunc_EqualEqual_StrStr_ReturnValue_5; // 0x35
    }; // Size: 0x36
    Params_ExecuteUbergraph_BP_Phoenix_Player_Controller params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetPlatformName_ReturnValue = (FString)CallFunc_GetPlatformName_ReturnValue;
    params.CallFunc_GetPlayerHouse_ReturnValue = (FString)CallFunc_GetPlayerHouse_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_2 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_2;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_3 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_3;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_4 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_4;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_5 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_5;
    ProcessEvent(func, &params);
}
