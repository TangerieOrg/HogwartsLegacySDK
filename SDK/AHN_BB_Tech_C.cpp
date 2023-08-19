#include "ABP_GlassWaller_v2__C.hpp"
#include "ABP_Stand2PStation_C.hpp"
#include "ABP_Station_Stand_Kid_Dock_EdgeSit_2P_C.hpp"
#include "ABP_Wow_Player_C.hpp"
#include "AHN_BB_Tech_C.hpp"
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "MissionStatus.hpp"
#include "UFunction.hpp"
#include "UStationComponent.hpp"
AHN_BB_Tech_C* AHN_BB_Tech_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/SubLevels/HN_BB_Tech.HN_BB_Tech_C");
    return (AHN_BB_Tech_C*)res;
}
void AHN_BB_Tech_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BB_Tech.HN_BB_Tech_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AHN_BB_Tech_C::ExecuteUbergraph_HN_BB_Tech(int32_t EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FName CallFunc_GetLockName_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, FName CallFunc_GetMissionName_ReturnValue, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UStationComponent* CallFunc_GetStationComponent_ReturnValue, UStationComponent* CallFunc_GetStationComponent_ReturnValue_1, FName CallFunc_GetMissionName_ReturnValue_1, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/SubLevels/HN_BB_Tech.HN_BB_Tech_C.ExecuteUbergraph_HN_BB_Tech"));
    struct Params_ExecuteUbergraph_HN_BB_Tech {
        int32_t EntryPoint; // 0x0
        bool Temp_bool_IsClosed_Variable; // 0x4
        bool Temp_bool_Has_Been_Initd_Variable; // 0x5
        char pad_6[0x2];
        FName CallFunc_GetLockName_ReturnValue; // 0x8
        bool CallFunc_IsUnlocked_ReturnValue; // 0x10
        char pad_11[0x3];
        FName CallFunc_GetMissionName_ReturnValue; // 0x14
        MissionStatus CallFunc_GetMissionStatusBP_ReturnValue; // 0x1c
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1d
        char pad_1e[0x2];
        UStationComponent* CallFunc_GetStationComponent_ReturnValue; // 0x20
        UStationComponent* CallFunc_GetStationComponent_ReturnValue_1; // 0x28
        FName CallFunc_GetMissionName_ReturnValue_1; // 0x30
        MissionStatus CallFunc_GetMissionStatusBP_ReturnValue_1; // 0x38
        bool K2Node_SwitchEnum_CmpSuccess_1; // 0x39
    }; // Size: 0x3a
    Params_ExecuteUbergraph_HN_BB_Tech params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_bool_IsClosed_Variable = (bool)Temp_bool_IsClosed_Variable;
    params.Temp_bool_Has_Been_Initd_Variable = (bool)Temp_bool_Has_Been_Initd_Variable;
    params.CallFunc_GetLockName_ReturnValue = (FName)CallFunc_GetLockName_ReturnValue;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_GetMissionName_ReturnValue = (FName)CallFunc_GetMissionName_ReturnValue;
    params.CallFunc_GetMissionStatusBP_ReturnValue = (MissionStatus)CallFunc_GetMissionStatusBP_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_GetStationComponent_ReturnValue = (UStationComponent*)CallFunc_GetStationComponent_ReturnValue;
    params.CallFunc_GetStationComponent_ReturnValue_1 = (UStationComponent*)CallFunc_GetStationComponent_ReturnValue_1;
    params.CallFunc_GetMissionName_ReturnValue_1 = (FName)CallFunc_GetMissionName_ReturnValue_1;
    params.CallFunc_GetMissionStatusBP_ReturnValue_1 = (MissionStatus)CallFunc_GetMissionStatusBP_ReturnValue_1;
    params.K2Node_SwitchEnum_CmpSuccess_1 = (bool)K2Node_SwitchEnum_CmpSuccess_1;
    ProcessEvent(func, &params);
}
