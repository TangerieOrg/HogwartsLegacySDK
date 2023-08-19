#include "FAkExternalSourceInfo.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UAnimNotify.hpp"
#include "UAnimNotify_AkEvent_C.hpp"
#include "UAnimSequenceBase.hpp"
#include "USkeletalMeshComponent.hpp"
UAnimNotify_AkEvent_C* UAnimNotify_AkEvent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Wwise/AnimNotify_AkEvent.AnimNotify_AkEvent_C");
    return (UAnimNotify_AkEvent_C*)res;
}
bool UAnimNotify_AkEvent_C::Received_Notify0(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue) {}
