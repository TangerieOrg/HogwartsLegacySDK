#pragma once
#include <cstdint>
#include "ABP_LightFixture_Master_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ABP_Candles_C;
#pragma pack(push, 1)
class ABP_HM_LightPost_C_C : public ABP_LightFixture_Master_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0xaf0
    ABP_Candles_C* LanternVar; // 0xaf8
    static ABP_HM_LightPost_C_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HM_LightPost_C(int32_t EntryPoint);
}; // Size: 0xb00
#pragma pack(pop)
