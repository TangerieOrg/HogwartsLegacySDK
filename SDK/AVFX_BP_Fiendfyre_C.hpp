#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UNiagaraComponent;
class USkeletalMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class AVFX_BP_Fiendfyre_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UNiagaraComponent* Torso; // 0x250
    UNiagaraComponent* Wings; // 0x258
    UNiagaraComponent* BodyRibbonAura; // 0x260
    UNiagaraComponent* WingRibbon_L_Fing1_Knuckle2; // 0x268
    UNiagaraComponent* WingRibbon_L_Fing1_Knuckle1; // 0x270
    UNiagaraComponent* WingRibbon_L_Wrist; // 0x278
    UNiagaraComponent* WingRibbon_R_Fing1_Knuckle2; // 0x280
    UNiagaraComponent* WingRibbon_R_Fing1_Knuckle1; // 0x288
    UNiagaraComponent* WingRibbon_R_Wrist; // 0x290
    UNiagaraComponent* Tail_2; // 0x298
    UNiagaraComponent* Tail_1; // 0x2a0
    UNiagaraComponent* Tail_3; // 0x2a8
    UNiagaraComponent* Chest; // 0x2b0
    UNiagaraComponent* head; // 0x2b8
    UNiagaraComponent* Body_Tail; // 0x2c0
    UNiagaraComponent* WingRibbon_R_WristDup; // 0x2c8
    USkeletalMeshComponent* SK_FiendFire; // 0x2d0
    USceneComponent* DefaultSceneRoot; // 0x2d8
    static AVFX_BP_Fiendfyre_C* StaticClass();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_VFX_BP_Fiendfyre(int32_t EntryPoint, float K2Node_Event_DeltaSeconds);
}; // Size: 0x2e0
#pragma pack(pop)
