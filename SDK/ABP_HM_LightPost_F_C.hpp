#pragma once
#include <cstdint>
#include "ABP_LightFixture_Master_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UNiagaraComponent;
class ABP_Candles_C;
#pragma pack(push, 1)
class ABP_HM_LightPost_F_C : public ABP_LightFixture_Master_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0xaf0
    UNiagaraComponent* Niagara; // 0xaf8
    ABP_Candles_C* LanternVar; // 0xb00
    char pad_b08[0x8];
    static ABP_HM_LightPost_F_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HM_LightPost_F(int32_t EntryPoint);
}; // Size: 0xb10
#pragma pack(pop)
