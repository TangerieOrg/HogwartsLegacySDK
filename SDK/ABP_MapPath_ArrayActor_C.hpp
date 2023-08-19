#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class ATargetPoint;
class ATriggerBox;
class UObject;
class ACharacter;
class UUIManager;
#pragma pack(push, 1)
class ABP_MapPath_ArrayActor_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USceneComponent* Scene; // 0x250
    float Width_of_Path; // 0x258
    char pad_25c[0x4];
    FString StepNickname; // 0x260
    TArray<ATargetPoint*> PathSec1; // 0x270
    TArray<ATargetPoint*> PathSec2; // 0x280
    TArray<ATargetPoint*> PathSec3; // 0x290
    TArray<ATargetPoint*> PathSec4; // 0x2a0
    ATriggerBox* Trigger; // 0x2b0
    static ABP_MapPath_ArrayActor_C* StaticClass();
    void ReceiveBeginPlay0();
    void EnteredTrig(AActor* OverlappedActor, AActor* OtherActor);
    void DM01_01_Updated(UObject* Caller, FName& String);
    void ExecuteUbergraph_BP_MapPath_ArrayActor(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, FName K2Node_CustomEvent_String, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_2, AActor* K2Node_CustomEvent_OverlappedActor, AActor* K2Node_CustomEvent_OtherActor, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FName CallFunc_GetMissionName_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FString CallFunc_GetMissionStepBP_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UUIManager* CallFunc_Get_ReturnValue);
}; // Size: 0x2b8
#pragma pack(pop)
