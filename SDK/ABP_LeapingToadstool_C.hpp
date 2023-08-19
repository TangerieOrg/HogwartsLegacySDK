#pragma once
#include <cstdint>
#include "ABP_Foragable_C.hpp"
#include "EForageableState.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UAnimInstance;
class UHierarchicalInstancedStaticMeshComponent;
class UABP_Foragable_Leaping_Toadstools_C;
class UAkComponent;
class UStaticMeshComponent;
class USphereComponent;
class USkeletalMeshComponent;
class UPrimitiveComponent;
class AActor;
class UObject;
struct FHitResult;
#pragma pack(push, 1)
class ABP_LeapingToadstool_C : public ABP_Foragable_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
    UHierarchicalInstancedStaticMeshComponent* HISM_19SM_Forageable_Leaping_Toadstools_I; // 0x2f8
    UHierarchicalInstancedStaticMeshComponent* HISM_11SM_KidneyWeed_05; // 0x300
    UHierarchicalInstancedStaticMeshComponent* HISM_17SM_Forageable_Leaping_Toadstools_G; // 0x308
    UHierarchicalInstancedStaticMeshComponent* HISM_25SM_Forageable_Leaping_Toadstools_H; // 0x310
    UStaticMeshComponent* SM_DeadLeafThin_01_Master; // 0x318
    UHierarchicalInstancedStaticMeshComponent* HISM_2SM_DeadLeafThick_01_Master; // 0x320
    UStaticMeshComponent* SM_Toadstools_Mound_Round; // 0x328
    UHierarchicalInstancedStaticMeshComponent* HISM_15SM_DeadLeafThick_01_Fall2; // 0x330
    UAkComponent* AK_BP_LeapingToadstool; // 0x338
    UAkComponent* Ak_MotionListener; // 0x340
    USphereComponent* RevelioSphere; // 0x348
    USphereComponent* ExitProximitySphere; // 0x350
    USphereComponent* EnterProximitySphere; // 0x358
    USkeletalMeshComponent* SkeletalMesh; // 0x360
    float RB_Max_Vertical_Speed; // 0x368
    float RB_Max_Lateral_speed; // 0x36c
    EForageableState CurrentState; // 0x370
    char pad_371[0x7];
    static ABP_LeapingToadstool_C* StaticClass();
    bool ResetState(EForageableState NextState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ResetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_Foragable_Leaping_Toadstools_C* K2Node_DynamicCast_AsABP_Foragable_Leaping_Toadstools, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ResetState_ReturnValue_1, bool CallFunc_ResetState_ReturnValue_2);
    void BndEvt__BP_Horklump_ExitProximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void SpawnRigidBodies(UObject* Caller);
    void BndEvt__BP_Horklump_EnterProximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void OnPickedUp();
    void ExecuteUbergraph_BP_LeapingToadstool(int32_t EntryPoint, FMasterTickThrottlerSettings K2Node_MakeStruct_MasterTickThrottlerSettings, TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
}; // Size: 0x378
#pragma pack(pop)
