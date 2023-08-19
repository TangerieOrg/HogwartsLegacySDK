#pragma once
#include <cstdint>
#include "EPhysicalSurface.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UAmbulatory_MovementComponent;
class AActor;
class ABiped_Player;
#pragma pack(push, 1)
class UBTT_Biped_SlipAndFall_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    UAmbulatory_MovementComponent* AmbulatoryMovementComponent; // 0x158
    EPhysicalSurface CurrentSurfaceType; // 0x160
    char pad_161[0x7];
    static UBTT_Biped_SlipAndFall_C* StaticClass();
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Landed_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_SurfaceTypeChanged_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_Biped_SlipAndFall(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle, AActor* K2Node_Event_OwnerActor_1, bool CallFunc_GetVariantInt32_FromHandle_bFound, int32_t CallFunc_GetVariantInt32_FromHandle_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, uint8_t CallFunc_Conv_IntToByte_ReturnValue);
}; // Size: 0x168
#pragma pack(pop)
