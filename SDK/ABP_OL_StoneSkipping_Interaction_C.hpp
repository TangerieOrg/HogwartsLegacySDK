#pragma once
#include <cstdint>
#include "ASimpleInteractObject.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FMasterTickThrottlerSettingsAdvanced.hpp"
#include "FObjectFadeParamsSpeedDuration.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class UStaticMeshComponent;
class UCognitionStimuliSourceComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UArrowComponent;
class UClass;
class AActor;
#pragma pack(push, 1)
class ABP_OL_StoneSkipping_Interaction_C : public ASimpleInteractObject {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2d8
    UStaticMeshComponent* CollisionSphere; // 0x2e0
    USkeletalMeshComponent* SK_SkippingStonePile_Master; // 0x2e8
    UArrowComponent* Arrow3; // 0x2f0
    USceneComponent* SpawnPosition3; // 0x2f8
    UArrowComponent* Arrow2; // 0x300
    USceneComponent* SpawnPosition2; // 0x308
    UArrowComponent* Arrow1; // 0x310
    USceneComponent* SpawnPosition1; // 0x318
    USceneComponent* Scene; // 0x320
    TArray<USceneComponent*> SpawnLocations; // 0x328
    TArray<UClass*> RandomRock; // 0x338
    TArray<AActor*> RocksSpawned; // 0x348
    int32_t RandomInt; // 0x358
    float Delay; // 0x35c
    static ABP_OL_StoneSkipping_Interaction_C* StaticClass();
    void SpawnRocks(int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_RandomInteger_ReturnValue, UClass* CallFunc_Array_Get_Item, int32_t CallFunc_RandomIntegerInRange_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32_t CallFunc_RandomInteger_ReturnValue_1, USceneComponent* CallFunc_Array_Get_Item_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue);
    void UserConstructionScript(TArray<USceneComponent*>& K2Node_MakeArray_Array);
    void InteractionInitiated0();
    void DestroySpawnedRocks();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_OL_StoneSkipping_Interaction(int32_t EntryPoint, FMasterTickThrottlerSettingsAdvanced K2Node_MakeStruct_MasterTickThrottlerSettingsAdvanced, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue, FObjectFadeParamsSpeedDuration K2Node_MakeStruct_ObjectFadeParamsSpeedDuration, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_ActorStartFade_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32_t CallFunc_Add_IntInt_ReturnValue_1, UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue);
}; // Size: 0x360
#pragma pack(pop)
