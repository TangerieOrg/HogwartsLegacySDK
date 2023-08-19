#include "ABP_Hitbox_Dugbog_TongueWhip_C.hpp"
#include "AMunitionType_AttackHitbox.hpp"
#include "AMunitionType_Base.hpp"
#include "FMunitionImpactData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_Hitbox_Dugbog_TongueWhip_C* ABP_Hitbox_Dugbog_TongueWhip_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_Hitbox_Dugbog_TongueWhip.BP_Hitbox_Dugbog_TongueWhip_C");
    return (ABP_Hitbox_Dugbog_TongueWhip_C*)res;
}
void ABP_Hitbox_Dugbog_TongueWhip_C::ExecuteUbergraph_BP_Hitbox_Dugbog_TongueWhip(int32_t EntryPoint, AMunitionType_Base* K2Node_CustomEvent_MunitionInstance, FMunitionImpactData K2Node_CustomEvent_MunitionImpactData) {}
void ABP_Hitbox_Dugbog_TongueWhip_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_Hitbox_Dugbog_TongueWhip.BP_Hitbox_Dugbog_TongueWhip_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Hitbox_Dugbog_TongueWhip_C::ImpactDamage(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_Hitbox_Dugbog_TongueWhip.BP_Hitbox_Dugbog_TongueWhip_C.ImpactDamage"));
    struct Params_ImpactDamage {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_ImpactDamage params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
void ABP_Hitbox_Dugbog_TongueWhip_C::ImpactFX(AMunitionType_Base* MunitionInstance, FMunitionImpactData& MunitionImpactData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_Hitbox_Dugbog_TongueWhip.BP_Hitbox_Dugbog_TongueWhip_C.ImpactFX"));
    struct Params_ImpactFX {
        AMunitionType_Base* MunitionInstance; // 0x0
        FMunitionImpactData MunitionImpactData; // 0x8
    }; // Size: 0xf8
    Params_ImpactFX params{};
    params.MunitionInstance = (AMunitionType_Base*)MunitionInstance;
    params.MunitionImpactData = (FMunitionImpactData)MunitionImpactData;
    ProcessEvent(func, &params);
    MunitionImpactData = params.MunitionImpactData;
}
