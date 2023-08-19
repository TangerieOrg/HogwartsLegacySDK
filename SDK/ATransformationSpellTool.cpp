#include "AActor.hpp"
#include "ATransfigurationPlaceholder.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "ATransfigurationSpellToolBase.hpp"
#include "ATransformationSpellTool.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
void ATransformationSpellTool::ExitTransformAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellTool.ExitTransformAll"));
    struct Params_ExitTransformAll {
    }; // Size: 0x0
    Params_ExitTransformAll params{};
    ProcessEvent(func, &params);
}
ATransformationSpellTool* ATransformationSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformationSpellTool");
    return (ATransformationSpellTool*)res;
}
void ATransformationSpellTool::FinishHoldTransforming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellTool.FinishHoldTransforming"));
    struct Params_FinishHoldTransforming {
    }; // Size: 0x0
    Params_FinishHoldTransforming params{};
    ProcessEvent(func, &params);
}
void ATransformationSpellTool::TransformPlaceholder(ATransfigurationPlaceholder* Placeholder, AActor* ExistingActor, FVector FxInfoCenter, FVector FxInfoExtent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellTool.TransformPlaceholder"));
    struct Params_TransformPlaceholder {
        ATransfigurationPlaceholder* Placeholder; // 0x0
        AActor* ExistingActor; // 0x8
        FVector FxInfoCenter; // 0x10
        FVector FxInfoExtent; // 0x1c
    }; // Size: 0x28
    Params_TransformPlaceholder params{};
    params.Placeholder = (ATransfigurationPlaceholder*)Placeholder;
    params.ExistingActor = (AActor*)ExistingActor;
    params.FxInfoCenter = (FVector)FxInfoCenter;
    params.FxInfoExtent = (FVector)FxInfoExtent;
    ProcessEvent(func, &params);
}
void ATransformationSpellTool::StartHoldTransforming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellTool.StartHoldTransforming"));
    struct Params_StartHoldTransforming {
    }; // Size: 0x0
    Params_StartHoldTransforming params{};
    ProcessEvent(func, &params);
}
void ATransformationSpellTool::SpawnPlaceholderNow(ATransfigurationPlaceholder* Placeholder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellTool.SpawnPlaceholderNow"));
    struct Params_SpawnPlaceholderNow {
        ATransfigurationPlaceholder* Placeholder; // 0x0
    }; // Size: 0x8
    Params_SpawnPlaceholderNow params{};
    params.Placeholder = (ATransfigurationPlaceholder*)Placeholder;
    ProcessEvent(func, &params);
}
void ATransformationSpellTool::OnPreviewDestroyed(AActor* DestroyedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellTool.OnPreviewDestroyed"));
    struct Params_OnPreviewDestroyed {
        AActor* DestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnPreviewDestroyed params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    ProcessEvent(func, &params);
}
void ATransformationSpellTool::EnterTransformAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellTool.EnterTransformAll"));
    struct Params_EnterTransformAll {
    }; // Size: 0x0
    Params_EnterTransformAll params{};
    ProcessEvent(func, &params);
}
void ATransformationSpellTool::CancelHoldTransforming() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationSpellTool.CancelHoldTransforming"));
    struct Params_CancelHoldTransforming {
    }; // Size: 0x0
    Params_CancelHoldTransforming params{};
    ProcessEvent(func, &params);
}
