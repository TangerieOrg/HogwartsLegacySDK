#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "MissionStatus.hpp"
class ABP_GlassWaller_v2__C;
class ABP_Station_Stand_Kid_Dock_EdgeSit_2P_C;
class ABP_Stand2PStation_C;
class ABP_Wow_Player_C;
class UStationComponent;
#pragma pack(push, 1)
class AHN_BB_Tech_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    FName COM_12_MissionName; // 0x258
    ABP_GlassWaller_v2__C* BP_GlassWaller_v2__C_8_ExecuteUbergraph_HN_BB_Tech_RefProperty; // 0x260
    ABP_GlassWaller_v2__C* BP_GlassWaller_v2__C_6_ExecuteUbergraph_HN_BB_Tech_RefProperty; // 0x268
    ABP_GlassWaller_v2__C* BP_GlassWaller_v2__C_1_ExecuteUbergraph_HN_BB_Tech_RefProperty; // 0x270
    ABP_GlassWaller_v2__C* BP_GlassWaller_v2__C_3_ExecuteUbergraph_HN_BB_Tech_RefProperty; // 0x278
    ABP_GlassWaller_v2__C* BP_GlassWaller_v2__C_5_ExecuteUbergraph_HN_BB_Tech_RefProperty; // 0x280
    ABP_GlassWaller_v2__C* BP_GlassWaller_v2__C_7_ExecuteUbergraph_HN_BB_Tech_RefProperty; // 0x288
    ABP_Station_Stand_Kid_Dock_EdgeSit_2P_C* BP_Station_Stand_Kid_Dock_EdgeSit_2P_2_ExecuteUbergraph_HN_BB_Tech_RefProperty; // 0x290
    ABP_Stand2PStation_C* BP_Stand2PStation_2_ExecuteUbergraph_HN_BB_Tech_RefProperty; // 0x298
    ABP_Wow_Player_C* BP_Wow_Player_CIV_WOW_01_DontSnitch_SR_0_ExecuteUbergraph_HN_BB_Tech_RefProperty; // 0x2a0
    static AHN_BB_Tech_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_HN_BB_Tech(int32_t EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FName CallFunc_GetLockName_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, FName CallFunc_GetMissionName_ReturnValue, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UStationComponent* CallFunc_GetStationComponent_ReturnValue, UStationComponent* CallFunc_GetStationComponent_ReturnValue_1, FName CallFunc_GetMissionName_ReturnValue_1, MissionStatus CallFunc_GetMissionStatusBP_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
}; // Size: 0x2a8
#pragma pack(pop)
