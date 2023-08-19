#include "AActor.hpp"
#include "AChannelingSpellTool.hpp"
#include "ASpellTool.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2_Base.hpp"
bool AChannelingSpellTool::HasMinChannelingTimeBeenMet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ChannelingSpellTool.HasMinChannelingTimeBeenMet"));
    struct Params_HasMinChannelingTimeBeenMet {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasMinChannelingTimeBeenMet params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AChannelingSpellTool* AChannelingSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ChannelingSpellTool");
    return (AChannelingSpellTool*)res;
}
void AChannelingSpellTool::OnCharged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ChannelingSpellTool.OnCharged"));
    struct Params_OnCharged {
    }; // Size: 0x0
    Params_OnCharged params{};
    ProcessEvent(func, &params);
}
void AChannelingSpellTool::OnActivateCharged(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ChannelingSpellTool.OnActivateCharged"));
    struct Params_OnActivateCharged {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_OnActivateCharged params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void AChannelingSpellTool::OnActivateTap(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ChannelingSpellTool.OnActivateTap"));
    struct Params_OnActivateTap {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_OnActivateTap params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
