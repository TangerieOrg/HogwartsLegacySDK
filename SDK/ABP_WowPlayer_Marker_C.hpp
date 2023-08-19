#pragma once
#include <cstdint>
#include "ABP_Marker_Base_C.hpp"
#include "FColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class ABP_WowPlayer_Marker_C : public ABP_Marker_Base_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x308
    static ABP_WowPlayer_Marker_C* StaticClass();
    void UserConstructionScript(FColor K2Node_MakeStruct_Color, bool CallFunc_InitMarker_Valid, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_WowPlayer_Marker(int32_t EntryPoint);
}; // Size: 0x310
#pragma pack(pop)
