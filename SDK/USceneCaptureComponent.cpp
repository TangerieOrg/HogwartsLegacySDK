#include "AActor.hpp"
#include "ESceneCapturePrimitiveRenderMode.hpp"
#include "ESceneCaptureSource.hpp"
#include "FEngineShowFlagsSetting.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneCaptureComponent.hpp"
#include "USceneComponent.hpp"
USceneCaptureComponent* USceneCaptureComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SceneCaptureComponent");
    return (USceneCaptureComponent*)res;
}
void USceneCaptureComponent::HideComponent(UPrimitiveComponent* InComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent.HideComponent"));
    struct Params_HideComponent {
        UPrimitiveComponent* InComponent; // 0x0
    }; // Size: 0x8
    Params_HideComponent params{};
    params.InComponent = (UPrimitiveComponent*)InComponent;
    ProcessEvent(func, &params);
}
void USceneCaptureComponent::RemoveShowOnlyComponent(UPrimitiveComponent* InComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent.RemoveShowOnlyComponent"));
    struct Params_RemoveShowOnlyComponent {
        UPrimitiveComponent* InComponent; // 0x0
    }; // Size: 0x8
    Params_RemoveShowOnlyComponent params{};
    params.InComponent = (UPrimitiveComponent*)InComponent;
    ProcessEvent(func, &params);
}
void USceneCaptureComponent::SetCaptureSortPriority(int32_t NewCaptureSortPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent.SetCaptureSortPriority"));
    struct Params_SetCaptureSortPriority {
        int32_t NewCaptureSortPriority; // 0x0
    }; // Size: 0x4
    Params_SetCaptureSortPriority params{};
    params.NewCaptureSortPriority = (int32_t)NewCaptureSortPriority;
    ProcessEvent(func, &params);
}
void USceneCaptureComponent::ShowOnlyComponent(UPrimitiveComponent* InComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent.ShowOnlyComponent"));
    struct Params_ShowOnlyComponent {
        UPrimitiveComponent* InComponent; // 0x0
    }; // Size: 0x8
    Params_ShowOnlyComponent params{};
    params.InComponent = (UPrimitiveComponent*)InComponent;
    ProcessEvent(func, &params);
}
void USceneCaptureComponent::ShowOnlyActorComponents(AActor* InActor, bool bIncludeFromChildActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent.ShowOnlyActorComponents"));
    struct Params_ShowOnlyActorComponents {
        AActor* InActor; // 0x0
        bool bIncludeFromChildActors; // 0x8
    }; // Size: 0x9
    Params_ShowOnlyActorComponents params{};
    params.InActor = (AActor*)InActor;
    params.bIncludeFromChildActors = (bool)bIncludeFromChildActors;
    ProcessEvent(func, &params);
}
void USceneCaptureComponent::RemoveShowOnlyActorComponents(AActor* InActor, bool bIncludeFromChildActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent.RemoveShowOnlyActorComponents"));
    struct Params_RemoveShowOnlyActorComponents {
        AActor* InActor; // 0x0
        bool bIncludeFromChildActors; // 0x8
    }; // Size: 0x9
    Params_RemoveShowOnlyActorComponents params{};
    params.InActor = (AActor*)InActor;
    params.bIncludeFromChildActors = (bool)bIncludeFromChildActors;
    ProcessEvent(func, &params);
}
void USceneCaptureComponent::HideActorComponents(AActor* InActor, bool bIncludeFromChildActors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent.HideActorComponents"));
    struct Params_HideActorComponents {
        AActor* InActor; // 0x0
        bool bIncludeFromChildActors; // 0x8
    }; // Size: 0x9
    Params_HideActorComponents params{};
    params.InActor = (AActor*)InActor;
    params.bIncludeFromChildActors = (bool)bIncludeFromChildActors;
    ProcessEvent(func, &params);
}
void USceneCaptureComponent::ClearShowOnlyComponents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent.ClearShowOnlyComponents"));
    struct Params_ClearShowOnlyComponents {
    }; // Size: 0x0
    Params_ClearShowOnlyComponents params{};
    ProcessEvent(func, &params);
}
void USceneCaptureComponent::ClearHiddenComponents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SceneCaptureComponent.ClearHiddenComponents"));
    struct Params_ClearHiddenComponents {
    }; // Size: 0x0
    Params_ClearHiddenComponents params{};
    ProcessEvent(func, &params);
}
