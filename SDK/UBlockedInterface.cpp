#include "AActor.hpp"
#include "EBlockTiming.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UBlockedInterface.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UInterface.hpp"
UBlockedInterface* UBlockedInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BlockedInterface");
    return (UBlockedInterface*)res;
}
void UBlockedInterface::OnBlocked(AActor* Instigator, UInteractionArchitectAsset* DataAsset, EBlockTiming BlockedTiming, FGameplayTagContainer MunitionTagContainer, FVector Throw, FVector ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BlockedInterface.OnBlocked"));
    struct Params_OnBlocked {
        AActor* Instigator; // 0x0
        UInteractionArchitectAsset* DataAsset; // 0x8
        EBlockTiming BlockedTiming; // 0x10
        char pad_11[0x7];
        FGameplayTagContainer MunitionTagContainer; // 0x18
        FVector Throw; // 0x38
        FVector ImpactDirection; // 0x44
    }; // Size: 0x50
    Params_OnBlocked params{};
    params.Instigator = (AActor*)Instigator;
    params.DataAsset = (UInteractionArchitectAsset*)DataAsset;
    params.BlockedTiming = (EBlockTiming)BlockedTiming;
    params.MunitionTagContainer = (FGameplayTagContainer)MunitionTagContainer;
    params.Throw = (FVector)Throw;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
}
