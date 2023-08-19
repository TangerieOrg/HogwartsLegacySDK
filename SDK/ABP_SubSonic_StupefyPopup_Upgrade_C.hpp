#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USkeletalMeshComponent;
class UNiagaraComponent;
#pragma pack(push, 1)
class ABP_SubSonic_StupefyPopup_Upgrade_C : public AMunitionType_SubsonicSpell {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x538
    USkeletalMeshComponent* SkeletalMesh; // 0x540
    UNiagaraComponent* NiagaraPopup; // 0x548
    float ScaleValue; // 0x550
    char pad_554[0x4];
    static ABP_SubSonic_StupefyPopup_Upgrade_C* StaticClass();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SubSonic_StupefyPopup_Upgrade(int32_t EntryPoint);
}; // Size: 0x558
#pragma pack(pop)
