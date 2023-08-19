#pragma once
#include <cstdint>
#include "EEndPlayReason\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UActorComponent.hpp"
class AActor;
class UManagedCharacterComponent;
#pragma pack(push, 1)
class UBP_LeviosoReactionComp_C : public UActorComponent {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    float Original_Gravity_Scale; // 0xd0
    char pad_d4[0x4];
    static UBP_LeviosoReactionComp_C* StaticClass();
    void ReceiveBeginPlay0();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_BP_LeviosoReactionComp(int32_t EntryPoint, AActor* CallFunc_GetOwner_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason, UManagedCharacterComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, UManagedCharacterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0xd8
#pragma pack(pop)
