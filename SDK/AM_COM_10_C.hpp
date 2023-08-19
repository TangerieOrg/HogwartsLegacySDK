#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "FMissionID.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ABP_Mission_VOTrigger_C;
class UObject;
#pragma pack(push, 1)
class AM_COM_10_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    FString COM_09_MissionStepNickname; // 0x258
    FString COM_10_MissionStepNickname; // 0x268
    bool ACTIVE; // 0x278
    bool Inactive; // 0x279
    char pad_27a[0x6];
    ABP_Mission_VOTrigger_C* BP_Mission_VOTrigger_COM10_Claire_PostMission_ClaireReflects_Lie_ExecuteUbergraph_M_COM_10_RefProperty; // 0x280
    ABP_Mission_VOTrigger_C* BP_Mission_VOTrigger_COM10_Claire_PostMission_ClaireReflects_Truth_ExecuteUbergraph_M_COM_10_RefProperty; // 0x288
    static AM_COM_10_C* StaticClass();
    void ReceiveBeginPlay();
    void Updated_COM_10(UObject* Caller, FMissionID& MissionID);
    void ExecuteUbergraph_M_COM_10(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, FMissionID K2Node_CustomEvent_MissionID);
}; // Size: 0x290
#pragma pack(pop)
