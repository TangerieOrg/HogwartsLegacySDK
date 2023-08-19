#pragma once
#include <cstdint>
#include "AMunitionType_AttackHitbox.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class AMunitionType_Base;
#pragma pack(push, 1)
class ABP_Hitbox_Dugbog_TongueWhip_C : public AMunitionType_AttackHitbox {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x470
    USceneComponent* DefaultSceneRoot; // 0x478
    static ABP_Hitbox_Dugbog_TongueWhip_C* StaticClass();
    void ReceiveBeginPlay();
    void ImpactDamage(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void ImpactFX(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData);
    void ExecuteUbergraph_BP_Hitbox_Dugbog_TongueWhip(int32_t EntryPoint, AMunitionType_Base* K2Node_CustomEvent_MunitionInstance, FMunitionImpactData K2Node_CustomEvent_MunitionImpactData);
}; // Size: 0x480
#pragma pack(pop)
