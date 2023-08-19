#pragma once
#include <cstdint>
#include "AFreeStandingClock.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class UAkComponent;
#pragma pack(push, 1)
class ABP_Sanc_FreeStandingClock_Parent_C : public AFreeStandingClock {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x310
    UAkComponent* AkChime; // 0x318
    UAkComponent* AkTick; // 0x320
    char pad_328[0x50];
    static ABP_Sanc_FreeStandingClock_Parent_C* StaticClass();
    void ReceiveBeginPlay();
    void ObjectConjured();
    void ObjectTransformationCancelled();
    void ObjectTransformationConfirmed();
    void ObjectVanished();
    void SecondTick();
    void OnClockChime0();
    void ExecuteUbergraph_BP_Sanc_FreeStandingClock_Parent(int32_t EntryPoint, FTransform CallFunc_GetPlayerViewTransform_ReturnValue);
}; // Size: 0x378
#pragma pack(pop)
