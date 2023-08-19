#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UPointLightComponent;
class UAnimatedLightComponent;
class UNiagaraComponent;
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ABP_Frontend_Deco_Potions_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UPointLightComponent* PointLight; // 0x250
    UAnimatedLightComponent* AnimatedLight; // 0x258
    UNiagaraComponent* Niagara_Fire_Brazier_Med_Sml; // 0x260
    UStaticMeshComponent* SM_CastleDun_Kitchen_Ladle_B; // 0x268
    UStaticMeshComponent* SM_HM_Brazier_Bowl; // 0x270
    UStaticMeshComponent* SM_HM_Cauldron_Cauldron_J; // 0x278
    USceneComponent* Cauldron_Interact; // 0x280
    UStaticMeshComponent* SM_HM_PotionBottle5; // 0x288
    UStaticMeshComponent* SM_HM_PotionBottle4; // 0x290
    UStaticMeshComponent* SM_HM_PotionBottle3; // 0x298
    UStaticMeshComponent* SM_HM_PotionBottle2; // 0x2a0
    UStaticMeshComponent* SM_HM_Stacking_Cauldron_C1; // 0x2a8
    UStaticMeshComponent* SM_HM_Stacking_Cauldron_D3; // 0x2b0
    UStaticMeshComponent* SM_HM_Stacking_Cauldron_C; // 0x2b8
    UStaticMeshComponent* SM_HM_Stacking_Cauldron_D2; // 0x2c0
    UStaticMeshComponent* SM_HM_Stacking_Cauldron_D1; // 0x2c8
    UStaticMeshComponent* SM_HM_Stacking_Cauldron_B; // 0x2d0
    UStaticMeshComponent* SM_HM_Stacking_Cauldron_D; // 0x2d8
    USceneComponent* DefaultSceneRoot; // 0x2e0
    static ABP_Frontend_Deco_Potions_C* StaticClass();
    void ReceiveBeginPlay0();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_Frontend_Deco_Potions(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x2e8
#pragma pack(pop)
