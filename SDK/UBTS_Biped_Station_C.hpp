#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVector.hpp"
#include "UBTService_AvaAITree_Input.hpp"
class AActor;
class UAnimInstance;
#pragma pack(push, 1)
class UBTS_Biped_Station_C : public UBTService_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xf8
    bool InteractionInitiated; // 0x100
    char pad_101[0x7];
    FTimerHandle ButtslideSurfaceTimer; // 0x108
    bool IsMoving; // 0x110
    char pad_111[0x3];
    FVector WorldDirection; // 0x114
    float SlideForwardSpeed; // 0x120
    float FrictionOverride; // 0x124
    bool RestoreIKState; // 0x128
    char pad_129[0x7];
    static UBTS_Biped_Station_C* StaticClass();
    void SetContexts(bool Flag);
    void ServiceEnd(AActor* OwnerActor);
    void ServiceBegin(AActor* OwnerActor);
    void ExecuteUbergraph_BTS_Biped_Station(int32_t EntryPoint, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
}; // Size: 0x130
#pragma pack(pop)
