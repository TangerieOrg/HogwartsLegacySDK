#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EAlohomoraLevel.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ELockDifficulty.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FDateTime.hpp"
#include "FEventDateTime.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimeEvent.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UPadlockComponent;
class UStaticMeshComponent;
class UCognitionStimuliSourceComponent;
class UAkComponent;
class USphereComponent;
class USceneComponent;
class UTimelineComponent;
class UMeshComponent;
class UScheduler;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_Portcullis_Base_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UPadlockComponent* Padlock; // 0x250
    UAkComponent* Ak_BP_Portcullis_Base; // 0x258
    USphereComponent* Overlap; // 0x260
    USceneComponent* CalloutLocation; // 0x268
    UCognitionStimuliSourceComponent* CognitionStimuliSourceA; // 0x270
    UStaticMeshComponent* PortculisFrame; // 0x278
    UStaticMeshComponent* Portculis; // 0x280
    USceneComponent* DefaultSceneRoot; // 0x288
    float Open_position_0A841224490FA5B083C154883BCFAB58; // 0x290
    ETimelineDirection::Type Open__Direction_0A841224490FA5B083C154883BCFAB58; // 0x294
    char pad_295[0x3];
    UTimelineComponent* Open; // 0x298
    bool useSchedule; // 0x2a0
    bool wantsToOpen; // 0x2a1
    char pad_2a2[0x6];
    FEventDateTime openTime; // 0x2a8
    FEventDateTime closeTime; // 0x2e8
    bool IsOpen; // 0x328
    bool IsLocked; // 0x329
    bool hasBeenOpened; // 0x32a
    char pad_32b[0x1];
    FVector openPosition; // 0x32c
    FVector closePosition; // 0x338
    char pad_344[0x4];
    TArray<int32_t> Handles; // 0x348
    bool interactable; // 0x358
    bool requiresAlohomora; // 0x359
    char pad_35a[0x2];
    int32_t alohomoraLevelRequired; // 0x35c
    FVector cogLookAtPoint; // 0x360
    FVector cogCalloutLocation; // 0x36c
    float PlayRate; // 0x378
    FVector ActorBounds; // 0x37c
    int32_t numInside; // 0x388
    bool StayOpenDayHours; // 0x38c
    char pad_38d[0x3];
    static ABP_Portcullis_Base_C* StaticClass();
    UMeshComponent* GetAttachToMesh();
    FVector GetSoundPos(FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius);
    void CompareTimeEvent(FTimeEvent TimeEvent, FDateTime CallFunc_GetSimulateDateTimeBP_ReturnValue, int32_t CallFunc_BreakDateTime_Year, int32_t CallFunc_BreakDateTime_Month, int32_t CallFunc_BreakDateTime_Day, int32_t CallFunc_BreakDateTime_Hour, int32_t CallFunc_BreakDateTime_Minute, int32_t CallFunc_BreakDateTime_Second, int32_t CallFunc_BreakDateTime_Millisecond, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
    void HasRequiredAlohomoraLevel(int32_t RequiredLevel, bool& canCast, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, EAlohomoraLevel CallFunc_GetAlohomoraLevel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void UpdateCallout();
    void SetInitialPosition(int32_t convertedCurrentTime, int32_t convertedOpenTime, int32_t convertedCloseTime, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UScheduler* CallFunc_Get_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, FDateTime CallFunc_GetSimulatedTime_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_BreakDateTime_Year, int32_t CallFunc_BreakDateTime_Month, int32_t CallFunc_BreakDateTime_Day, int32_t CallFunc_BreakDateTime_Hour, int32_t CallFunc_BreakDateTime_Minute, int32_t CallFunc_BreakDateTime_Second, int32_t CallFunc_BreakDateTime_Millisecond, int32_t CallFunc_Multiply_IntInt_ReturnValue_2, int32_t CallFunc_Add_IntInt_ReturnValue_2);
    void UserConstructionScript0(FName Temp_name_Variable, FName Temp_name_Variable_1, int32_t Temp_int_Variable, ELockDifficulty Temp_byte_Variable, ELockDifficulty Temp_byte_Variable_1, ELockDifficulty Temp_byte_Variable_2, int32_t CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Clamp_ReturnValue, ELockDifficulty K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, FVector CallFunc_Subtract_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_RotateAngleAxis_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2);
    void Open__FinishedFunc();
    void Open__UpdateFunc();
    void ReceiveBeginPlay0();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void BndEvt__Overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__Overlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void OnLocked();
    void OnUnlocked(bool OpenLockable, bool ThrowLock, bool PlaySoundsAndEffects, bool FromMinigame);
    void SetAudioSwitch(UAkComponent* AkComponent);
    void CloseGate(FTimeEvent& InTimeEvent);
    void OpenGate(FTimeEvent& InTimeEvent);
    void ExecuteUbergraph_BP_Portcullis_Base(int32_t EntryPoint);
}; // Size: 0x390
#pragma pack(pop)
