#pragma once
#include <cstdint>
#include "ABP_Sanc_FreeStandingClock_Parent_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class ABP_Sanc_FreeStandingClock_Forest_C : public ABP_Sanc_FreeStandingClock_Parent_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0x378
    static ABP_Sanc_FreeStandingClock_Forest_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Sanc_FreeStandingClock_Forest(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0x380
#pragma pack(pop)
