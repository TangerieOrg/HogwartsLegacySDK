#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ABP_RaceTurboBubble_C;
class UObject;
#pragma pack(push, 1)
class AM_ZZM_01_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Spires23_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x258
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Spires24_1_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x260
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Spires25_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x268
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Spires5_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x270
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Spires8_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x278
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Spires9_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x280
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge9_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x288
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge10_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x290
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge11_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x298
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge12_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x2a0
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge13_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x2a8
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge14_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x2b0
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge15_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x2b8
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge16_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x2c0
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge17_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x2c8
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge18_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x2d0
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge19_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x2d8
    ABP_RaceTurboBubble_C* BP_TurboBubble_ZZM_Keenbridge20_ExecuteUbergraph_M_ZZM_01_RefProperty; // 0x2e0
    static AM_ZZM_01_C* StaticClass();
    void ReceiveBeginPlay();
    void ZZM_01_Spires_Updated(UObject* Caller, FName& String);
    void ZZM_01_Tower_Updated(UObject* Caller, FName& String);
    void ExecuteUbergraph_M_ZZM_01(int32_t EntryPoint, bool CallFunc_GetMissionComplete_ReturnValue);
}; // Size: 0x2e8
#pragma pack(pop)
