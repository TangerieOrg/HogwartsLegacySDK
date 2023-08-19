#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTS_Biped_BasicMobility_C.hpp"
class UAnimInstance;
class AActor;
class UAmbulatory_AnimInstance;
class ABiped_Player;
#pragma pack(push, 1)
class UBTS_BipedUpper_Wand_C : public UBTS_Biped_BasicMobility_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x118
    static UBTS_BipedUpper_Wand_C* StaticClass();
    bool PartialBodyAbilityTest(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAmbulatory_AnimInstance* K2Node_DynamicCast_AsAmbulatory_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
    void CustActionEvt_FirePartialBodySpell_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_BreakoutUpperSuccess_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_BreakoutUpperFail_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ServiceBegin(AActor* OwnerActor);
    void ServiceEnd(AActor* OwnerActor);
    void ExecuteUbergraph_BTS_BipedUpper_Wand(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1);
}; // Size: 0x120
#pragma pack(pop)
