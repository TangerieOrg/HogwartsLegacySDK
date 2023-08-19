#include "ACreatureFeedingTool.hpp"
#include "ACreatureInteractionTool.hpp"
#include "ACreature_Character.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
void ACreatureFeedingTool::SetupDistanceBasedPelletReleaseAnim(ACreature_Character* InCreatureCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingTool.SetupDistanceBasedPelletReleaseAnim"));
    struct Params_SetupDistanceBasedPelletReleaseAnim {
        ACreature_Character* InCreatureCharacter; // 0x0
    }; // Size: 0x8
    Params_SetupDistanceBasedPelletReleaseAnim params{};
    params.InCreatureCharacter = (ACreature_Character*)InCreatureCharacter;
    ProcessEvent(func, &params);
}
ACreatureFeedingTool* ACreatureFeedingTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureFeedingTool");
    return (ACreatureFeedingTool*)res;
}
FVector ACreatureFeedingTool::CalculateDynamicPelletReleaseVeloctiy(ACreature_Character* InCreatureCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureFeedingTool.CalculateDynamicPelletReleaseVeloctiy"));
    struct Params_CalculateDynamicPelletReleaseVeloctiy {
        ACreature_Character* InCreatureCharacter; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_CalculateDynamicPelletReleaseVeloctiy params{};
    params.InCreatureCharacter = (ACreature_Character*)InCreatureCharacter;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
