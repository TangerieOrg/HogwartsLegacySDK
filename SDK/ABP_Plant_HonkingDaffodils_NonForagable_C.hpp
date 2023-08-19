#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
#include "EVisibilityBasedAnimTickOption.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FMasterTickThrottlerSettingsAdvanced.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USkeletalMeshComponent;
class USceneComponent;
class UABP_HonkingDaffodils_C;
class UAnimInstance;
#pragma pack(push, 1)
class ABP_Plant_HonkingDaffodils_NonForagable_C : public APhoenixBudgetedActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    USkeletalMeshComponent* SkeletalMesh; // 0x270
    USceneComponent* Scene; // 0x278
    UABP_HonkingDaffodils_C* ABP; // 0x280
    static ABP_Plant_HonkingDaffodils_NonForagable_C* StaticClass();
    void StartHonking(bool bStart, bool Temp_bool_Variable, EVisibilityBasedAnimTickOption Temp_byte_Variable, EVisibilityBasedAnimTickOption Temp_byte_Variable_1, EVisibilityBasedAnimTickOption K2Node_Select_Default, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_HonkingDaffodils_C* K2Node_DynamicCast_AsABP_Honking_Daffodils, bool K2Node_DynamicCast_bSuccess);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Plant_HonkingDaffodils_NonForagable(int32_t EntryPoint, FMasterTickThrottlerSettingsAdvanced K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings);
}; // Size: 0x288
#pragma pack(pop)
