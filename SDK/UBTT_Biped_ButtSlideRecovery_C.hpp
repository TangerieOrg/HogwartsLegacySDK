#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UObject;
class ABiped_Player;
struct FSurfaceTypeChanged;
#pragma pack(push, 1)
class UBTT_Biped_ButtSlideRecovery_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    static UBTT_Biped_ButtSlideRecovery_C* StaticClass();
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void SurfaceTypeChanged(UObject* Caller, FSurfaceTypeChanged& SurfaceTypeChanged);
    void ExecuteUbergraph_BTT_Biped_ButtSlideRecovery(int32_t EntryPoint, AActor* CallFunc_GetActorOwner_ReturnValue, AActor* K2Node_Event_OwnerActor_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x158
#pragma pack(pop)
