#include "ABP_SubSonic_StupefyPopup_Upgrade_C.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UNiagaraComponent.hpp"
#include "USkeletalMeshComponent.hpp"
ABP_SubSonic_StupefyPopup_Upgrade_C* ABP_SubSonic_StupefyPopup_Upgrade_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_StupefyPopup_Upgrade.BP_SubSonic_StupefyPopup_Upgrade_C");
    return (ABP_SubSonic_StupefyPopup_Upgrade_C*)res;
}
void ABP_SubSonic_StupefyPopup_Upgrade_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_StupefyPopup_Upgrade.BP_SubSonic_StupefyPopup_Upgrade_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_SubSonic_StupefyPopup_Upgrade_C::ExecuteUbergraph_BP_SubSonic_StupefyPopup_Upgrade(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Munitions/BP_SubSonic_StupefyPopup_Upgrade.BP_SubSonic_StupefyPopup_Upgrade_C.ExecuteUbergraph_BP_SubSonic_StupefyPopup_Upgrade"));
    struct Params_ExecuteUbergraph_BP_SubSonic_StupefyPopup_Upgrade {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_SubSonic_StupefyPopup_Upgrade params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
