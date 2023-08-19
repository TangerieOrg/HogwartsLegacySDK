#include "AActor.hpp"
#include "AControlRigGizmoActor.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
AControlRigGizmoActor* AControlRigGizmoActor::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigGizmoActor");
    return (AControlRigGizmoActor*)res;
}
void AControlRigGizmoActor::SetEnabled(bool bInEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.SetEnabled"));
    struct Params_SetEnabled {
        bool bInEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    ProcessEvent(func, &params);
}
void AControlRigGizmoActor::SetSelected(bool bInSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.SetSelected"));
    struct Params_SetSelected {
        bool bInSelected; // 0x0
    }; // Size: 0x1
    Params_SetSelected params{};
    params.bInSelected = (bool)bInSelected;
    ProcessEvent(func, &params);
}
void AControlRigGizmoActor::OnSelectionChanged(bool bIsSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.OnSelectionChanged"));
    struct Params_OnSelectionChanged {
        bool bIsSelected; // 0x0
    }; // Size: 0x1
    Params_OnSelectionChanged params{};
    params.bIsSelected = (bool)bIsSelected;
    ProcessEvent(func, &params);
}
void AControlRigGizmoActor::SetSelectable(bool bInSelectable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.SetSelectable"));
    struct Params_SetSelectable {
        bool bInSelectable; // 0x0
    }; // Size: 0x1
    Params_SetSelectable params{};
    params.bInSelectable = (bool)bInSelectable;
    ProcessEvent(func, &params);
}
void AControlRigGizmoActor::SetHovered(bool bInHovered) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.SetHovered"));
    struct Params_SetHovered {
        bool bInHovered; // 0x0
    }; // Size: 0x1
    Params_SetHovered params{};
    params.bInHovered = (bool)bInHovered;
    ProcessEvent(func, &params);
}
void AControlRigGizmoActor::SetGlobalTransform(FTransform& InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.SetGlobalTransform"));
    struct Params_SetGlobalTransform {
        FTransform InTransform; // 0x0
    }; // Size: 0x30
    Params_SetGlobalTransform params{};
    params.InTransform = (FTransform)InTransform;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
}
void AControlRigGizmoActor::OnTransformChanged(FTransform& NewTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.OnTransformChanged"));
    struct Params_OnTransformChanged {
        FTransform NewTransform; // 0x0
    }; // Size: 0x30
    Params_OnTransformChanged params{};
    params.NewTransform = (FTransform)NewTransform;
    ProcessEvent(func, &params);
    NewTransform = params.NewTransform;
}
void AControlRigGizmoActor::OnManipulatingChanged(bool bIsManipulating) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.OnManipulatingChanged"));
    struct Params_OnManipulatingChanged {
        bool bIsManipulating; // 0x0
    }; // Size: 0x1
    Params_OnManipulatingChanged params{};
    params.bIsManipulating = (bool)bIsManipulating;
    ProcessEvent(func, &params);
}
void AControlRigGizmoActor::OnHoveredChanged(bool bIsSelected) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.OnHoveredChanged"));
    struct Params_OnHoveredChanged {
        bool bIsSelected; // 0x0
    }; // Size: 0x1
    Params_OnHoveredChanged params{};
    params.bIsSelected = (bool)bIsSelected;
    ProcessEvent(func, &params);
}
void AControlRigGizmoActor::OnEnabledChanged(bool bIsEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.OnEnabledChanged"));
    struct Params_OnEnabledChanged {
        bool bIsEnabled; // 0x0
    }; // Size: 0x1
    Params_OnEnabledChanged params{};
    params.bIsEnabled = (bool)bIsEnabled;
    ProcessEvent(func, &params);
}
bool AControlRigGizmoActor::IsSelectedInEditor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.IsSelectedInEditor"));
    struct Params_IsSelectedInEditor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSelectedInEditor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AControlRigGizmoActor::IsHovered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.IsHovered"));
    struct Params_IsHovered {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsHovered params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AControlRigGizmoActor::IsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.IsEnabled"));
    struct Params_IsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTransform AControlRigGizmoActor::GetGlobalTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigGizmoActor.GetGlobalTransform"));
    struct Params_GetGlobalTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetGlobalTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
