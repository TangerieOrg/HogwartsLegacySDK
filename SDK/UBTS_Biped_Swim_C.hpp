#pragma once
#include <cstdint>
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTService_AvaAITree_Input.hpp"
class UClass;
class AActor;
class UBlackboardComponent;
class UObject;
#pragma pack(push, 1)
class UBTS_Biped_Swim_C : public UBTService_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xf8
    FTransform TargetTransform; // 0x100
    float RiseDelay; // 0x130
    char pad_134[0x4];
    FHermesBPDelegateHandle MovementModeChangedHandle; // 0x138
    char pad_148[0x8];
    static UBTS_Biped_Swim_C* StaticClass();
    void PlaySwimAbility(UClass* SwimAbility, FName CallFunc_MakeLiteralName_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue);
    void CustActionEvt_SpellButton_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SwimDive_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Teleport_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Protego_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void MovementModeChanged(UObject* Caller);
    void ServiceEnd(AActor* OwnerActor);
    void LeafNodeSwitched();
    void ServiceBegin(AActor* OwnerActor);
    void ExecuteUbergraph_BTS_Biped_Swim(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue_1);
}; // Size: 0x150
#pragma pack(pop)
