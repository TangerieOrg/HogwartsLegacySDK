#pragma once
#include <cstdint>
#include "ABP_LightFixture_Master_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#pragma pack(push, 1)
class ABP_HM_Lantern_OL_C_NoMount_C : public ABP_LightFixture_Master_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0xaf0
    char pad_af8[0x8];
    static ABP_HM_Lantern_OL_C_NoMount_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HM_Lantern_OL_C_NoMount(int32_t EntryPoint);
}; // Size: 0xb00
#pragma pack(pop)
