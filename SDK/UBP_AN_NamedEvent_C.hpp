#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
class USkeletalMeshComponent;
class UAnimSequenceBase;
class UAnimInstance;
class AActor;
class UNPC_Component;
#pragma pack(push, 1)
class UBP_AN_NamedEvent_C : public UAnimNotify {
public:
    FName Name; // 0x38
    static UBP_AN_NamedEvent_C* StaticClass();
    FString GetNotifyName0(FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    bool Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, AActor* CallFunc_GetOwningActor_ReturnValue, UNPC_Component* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0x40
#pragma pack(pop)
