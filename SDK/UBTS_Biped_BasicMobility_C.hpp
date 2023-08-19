#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTService_AvaAITree_Input.hpp"
class AActor;
class UClass;
class UObject;
#pragma pack(push, 1)
class UBTS_Biped_BasicMobility_C : public UBTService_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xf8
    AActor* Debug_SpawnedFaceTarget; // 0x100
    AActor* Debug_SpawnedLookAtTarget; // 0x108
    bool AltModifierPressed; // 0x110
    char pad_111[0x7];
    static UBTS_Biped_BasicMobility_C* StaticClass();
    void OnLoaded_809DC56944F42BE29C094A8145446EBA(UClass* Loaded);
    void CustActionEvt_BroomFlight_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_CollapseIntoRagdoll_K2Node_GameLogicBoolResultEvent_0(bool CachedResult);
    void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_DEBUG_NumPadModifier_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ServiceEnd(AActor* OwnerActor);
    void ServiceBegin(AActor* OwnerActor);
    void MovementModeChanged(UObject* Caller);
    void ExecuteUbergraph_BTS_Biped_BasicMobility(int32_t EntryPoint, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle_2);
}; // Size: 0x118
#pragma pack(pop)
