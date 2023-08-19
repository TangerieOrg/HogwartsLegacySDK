#include "AActor.hpp"
#include "UAnimInstance.hpp"
#include "UAnimSequence.hpp"
#include "UAnimSharingInstance.hpp"
#include "UAnimSharingStateInstance.hpp"
#include "UFunction.hpp"
UAnimSharingStateInstance* UAnimSharingStateInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationSharing.AnimSharingStateInstance");
    return (UAnimSharingStateInstance*)res;
}
void UAnimSharingStateInstance::GetInstancedActors(TArray<AActor*>& Actors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationSharing.AnimSharingStateInstance.GetInstancedActors"));
    struct Params_GetInstancedActors {
        TArray<AActor*> Actors; // 0x0
    }; // Size: 0x10
    Params_GetInstancedActors params{};
    params.Actors = (TArray<AActor*>)Actors;
    ProcessEvent(func, &params);
    Actors = params.Actors;
}
