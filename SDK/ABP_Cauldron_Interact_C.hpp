#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UAkComponent;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UNiagaraComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Cauldron_Interact_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UAkComponent* Ak_BP_Cauldron_Interact_Cauldron; // 0x250
    UAkComponent* Ak_BP_Cauldron_Interact_Fire; // 0x258
    UNiagaraComponent* Niagara_Fire_Brazier_Med_Sml; // 0x260
    UParticleSystemComponent* VFX_P_Potion_Brewing_Blue; // 0x268
    UStaticMeshComponent* SM_CastleDun_Kitchen_Ladle_B; // 0x270
    UStaticMeshComponent* SM_HM_Brazier_Bowl; // 0x278
    UStaticMeshComponent* SM_HM_Cauldron_Cauldron_J; // 0x280
    USceneComponent* Scene; // 0x288
    static ABP_Cauldron_Interact_C* StaticClass();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Cauldron_Interact(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x290
#pragma pack(pop)
