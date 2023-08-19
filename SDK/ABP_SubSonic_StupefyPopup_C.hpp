#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UNiagaraComponent;
#pragma pack(push, 1)
class ABP_SubSonic_StupefyPopup_C : public AMunitionType_SubsonicSpell {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x538
    UNiagaraComponent* NiagaraPopup; // 0x540
    float ScaleValue; // 0x548
    char pad_54c[0x4];
    static ABP_SubSonic_StupefyPopup_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SubSonic_StupefyPopup(int32_t EntryPoint);
}; // Size: 0x550
#pragma pack(pop)
