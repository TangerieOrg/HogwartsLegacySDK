#include "AActor.hpp"
#include "ACreatureFeed.hpp"
#include "ACreature_Character.hpp"
#include "FVector.hpp"
#include "UCreatureFeedFloatingComponent.hpp"
#include "UFunction.hpp"
ACreatureFeed* ACreatureFeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureFeed");
    return (ACreatureFeed*)res;
}
void ACreatureFeed::FloatToCreature(FVector ReleaseVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeed.FloatToCreature"));
    struct Params_FloatToCreature {
        FVector ReleaseVelocity; // 0x0
    }; // Size: 0xc
    Params_FloatToCreature params{};
    params.ReleaseVelocity = (FVector)ReleaseVelocity;
    ProcessEvent(func, &params);
}
void ACreatureFeed::OnStartedVanishing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeed.OnStartedVanishing"));
    struct Params_OnStartedVanishing {
    }; // Size: 0x0
    Params_OnStartedVanishing params{};
    ProcessEvent(func, &params);
}
void ACreatureFeed::InitializeRelease(ACreature_Character* SelectedCreature) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeed.InitializeRelease"));
    struct Params_InitializeRelease {
        ACreature_Character* SelectedCreature; // 0x0
    }; // Size: 0x8
    Params_InitializeRelease params{};
    params.SelectedCreature = (ACreature_Character*)SelectedCreature;
    ProcessEvent(func, &params);
}
