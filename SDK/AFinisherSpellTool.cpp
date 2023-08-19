#include "AActor.hpp"
#include "AChannelingSpellTool.hpp"
#include "AFinisherSpellTool.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMaterialInterface.hpp"
#include "UMultiFX2_Base.hpp"
#include "USceneComponent.hpp"
#include "USkinFXComponent.hpp"
AFinisherSpellTool* AFinisherSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FinisherSpellTool");
    return (AFinisherSpellTool*)res;
}
void AFinisherSpellTool::SpellStarted(AActor* WandWielder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FinisherSpellTool.SpellStarted"));
    struct Params_SpellStarted {
        AActor* WandWielder; // 0x0
    }; // Size: 0x8
    Params_SpellStarted params{};
    params.WandWielder = (AActor*)WandWielder;
    ProcessEvent(func, &params);
}
void AFinisherSpellTool::OnFinisherEnd(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FinisherSpellTool.OnFinisherEnd"));
    struct Params_OnFinisherEnd {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_OnFinisherEnd params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void AFinisherSpellTool::OnFinisherHit(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FinisherSpellTool.OnFinisherHit"));
    struct Params_OnFinisherHit {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_OnFinisherHit params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void AFinisherSpellTool::OnFinisherDeath(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FinisherSpellTool.OnFinisherDeath"));
    struct Params_OnFinisherDeath {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_OnFinisherDeath params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
USkinFXComponent* AFinisherSpellTool::GetSkinFxComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FinisherSpellTool.GetSkinFxComponent"));
    struct Params_GetSkinFxComponent {
        USkinFXComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSkinFxComponent params{};
    ProcessEvent(func, &params);
    return (USkinFXComponent*)params.ReturnValue;
}
void AFinisherSpellTool::FinisherFail() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FinisherSpellTool.FinisherFail"));
    struct Params_FinisherFail {
    }; // Size: 0x0
    Params_FinisherFail params{};
    ProcessEvent(func, &params);
}
