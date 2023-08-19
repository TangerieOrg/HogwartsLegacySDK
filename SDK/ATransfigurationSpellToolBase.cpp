#include "AChannelingSpellTool.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "ATransfigurationSpellToolBase.hpp"
#include "ETransfigurationPlacementError.hpp"
#include "FBTCustomAction.hpp"
#include "FLockableTransfigurationItem.hpp"
#include "FTransfigurationResource.hpp"
#include "UFunction.hpp"
#include "UTransformationSpellToolComponent.hpp"
void ATransfigurationSpellToolBase::RotateLeft_FromMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.RotateLeft_FromMotion"));
    struct Params_RotateLeft_FromMotion {
    }; // Size: 0x0
    Params_RotateLeft_FromMotion params{};
    ProcessEvent(func, &params);
}
ATransfigurationSpellToolBase* ATransfigurationSpellToolBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationSpellToolBase");
    return (ATransfigurationSpellToolBase*)res;
}
void ATransfigurationSpellToolBase::TransformObject_FromMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.TransformObject_FromMotion"));
    struct Params_TransformObject_FromMotion {
    }; // Size: 0x0
    Params_TransformObject_FromMotion params{};
    ProcessEvent(func, &params);
}
bool ATransfigurationSpellToolBase::ConsumesSanctuaryContextResources() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.ConsumesSanctuaryContextResources"));
    struct Params_ConsumesSanctuaryContextResources {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ConsumesSanctuaryContextResources params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationSpellToolBase::ScaleUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.ScaleUp"));
    struct Params_ScaleUp {
    }; // Size: 0x0
    Params_ScaleUp params{};
    ProcessEvent(func, &params);
}
bool ATransfigurationSpellToolBase::IsObjectScalable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.IsObjectScalable"));
    struct Params_IsObjectScalable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObjectScalable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationSpellToolBase::SetTransformComponentRef(UTransformationSpellToolComponent* TC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.SetTransformComponentRef"));
    struct Params_SetTransformComponentRef {
        UTransformationSpellToolComponent* TC; // 0x0
    }; // Size: 0x8
    Params_SetTransformComponentRef params{};
    params.TC = (UTransformationSpellToolComponent*)TC;
    ProcessEvent(func, &params);
}
void ATransfigurationSpellToolBase::ConfirmTransfiguration_FromMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.ConfirmTransfiguration_FromMotion"));
    struct Params_ConfirmTransfiguration_FromMotion {
    }; // Size: 0x0
    Params_ConfirmTransfiguration_FromMotion params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSpellToolBase::ScaleDown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.ScaleDown"));
    struct Params_ScaleDown {
    }; // Size: 0x0
    Params_ScaleDown params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSpellToolBase::RotateRight_FromMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.RotateRight_FromMotion"));
    struct Params_RotateRight_FromMotion {
    }; // Size: 0x0
    Params_RotateRight_FromMotion params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSpellToolBase::NextColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.NextColor"));
    struct Params_NextColor {
    }; // Size: 0x0
    Params_NextColor params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSpellToolBase::RotateRight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.RotateRight"));
    struct Params_RotateRight {
    }; // Size: 0x0
    Params_RotateRight params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSpellToolBase::Exit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.Exit"));
    struct Params_Exit {
    }; // Size: 0x0
    Params_Exit params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSpellToolBase::RotateLeft() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.RotateLeft"));
    struct Params_RotateLeft {
    }; // Size: 0x0
    Params_RotateLeft params{};
    ProcessEvent(func, &params);
}
bool ATransfigurationSpellToolBase::PrevTransformation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.PrevTransformation"));
    struct Params_PrevTransformation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_PrevTransformation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ATransfigurationSpellToolBase::AreResourceRequirementsMet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.AreResourceRequirementsMet"));
    struct Params_AreResourceRequirementsMet {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AreResourceRequirementsMet params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationSpellToolBase::PrevColor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.PrevColor"));
    struct Params_PrevColor {
    }; // Size: 0x0
    Params_PrevColor params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSpellToolBase::PrepareToExit() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.PrepareToExit"));
    struct Params_PrepareToExit {
    }; // Size: 0x0
    Params_PrepareToExit params{};
    ProcessEvent(func, &params);
}
ATransfigurationPreviewActor* ATransfigurationSpellToolBase::GetPreviewActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.GetPreviewActor"));
    struct Params_GetPreviewActor {
        ATransfigurationPreviewActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPreviewActor params{};
    ProcessEvent(func, &params);
    return (ATransfigurationPreviewActor*)params.ReturnValue;
}
void ATransfigurationSpellToolBase::PrepareToBack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.PrepareToBack"));
    struct Params_PrepareToBack {
    }; // Size: 0x0
    Params_PrepareToBack params{};
    ProcessEvent(func, &params);
}
bool ATransfigurationSpellToolBase::CanPlaceItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.CanPlaceItem"));
    struct Params_CanPlaceItem {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPlaceItem params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ATransfigurationSpellToolBase::NextTransformation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.NextTransformation"));
    struct Params_NextTransformation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_NextTransformation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ATransfigurationSpellToolBase::IsObjectStationary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.IsObjectStationary"));
    struct Params_IsObjectStationary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObjectStationary params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ATransfigurationSpellToolBase::IsObjectRotatable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.IsObjectRotatable"));
    struct Params_IsObjectRotatable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsObjectRotatable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ATransfigurationSpellToolBase::DoesObjectSupportSnapping() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.DoesObjectSupportSnapping"));
    struct Params_DoesObjectSupportSnapping {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DoesObjectSupportSnapping params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ATransfigurationSpellToolBase::HasTransformationOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.HasTransformationOptions"));
    struct Params_HasTransformationOptions {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasTransformationOptions params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationSpellToolBase::CancelPreview_FromMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.CancelPreview_FromMotion"));
    struct Params_CancelPreview_FromMotion {
    }; // Size: 0x0
    Params_CancelPreview_FromMotion params{};
    ProcessEvent(func, &params);
}
bool ATransfigurationSpellToolBase::HasColorOptions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.HasColorOptions"));
    struct Params_HasColorOptions {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasColorOptions params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float ATransfigurationSpellToolBase::GetTransfigurationDuration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.GetTransfigurationDuration"));
    struct Params_GetTransfigurationDuration {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetTransfigurationDuration params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
TArray<FTransfigurationResource> ATransfigurationSpellToolBase::GetRequiredResources() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.GetRequiredResources"));
    struct Params_GetRequiredResources {
        TArray<FTransfigurationResource> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetRequiredResources params{};
    ProcessEvent(func, &params);
    return (TArray<FTransfigurationResource>)params.ReturnValue;
}
ETransfigurationPlacementError ATransfigurationSpellToolBase::GetPlacementError() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.GetPlacementError"));
    struct Params_GetPlacementError {
        ETransfigurationPlacementError ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlacementError params{};
    ProcessEvent(func, &params);
    return (ETransfigurationPlacementError)params.ReturnValue;
}
float ATransfigurationSpellToolBase::GetHoldingDurationBeforeTransfigurationTimerStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.GetHoldingDurationBeforeTransfigurationTimerStart"));
    struct Params_GetHoldingDurationBeforeTransfigurationTimerStart {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetHoldingDurationBeforeTransfigurationTimerStart params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ATransfigurationSpellToolBase::ConjurePreview_FromMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.ConjurePreview_FromMotion"));
    struct Params_ConjurePreview_FromMotion {
    }; // Size: 0x0
    Params_ConjurePreview_FromMotion params{};
    ProcessEvent(func, &params);
}
bool ATransfigurationSpellToolBase::ConfirmTransfiguration() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.ConfirmTransfiguration"));
    struct Params_ConfirmTransfiguration {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_ConfirmTransfiguration params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATransfigurationSpellToolBase::ColorObject_FromMotion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.ColorObject_FromMotion"));
    struct Params_ColorObject_FromMotion {
    }; // Size: 0x0
    Params_ColorObject_FromMotion params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSpellToolBase::Back() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSpellToolBase.Back"));
    struct Params_Back {
    }; // Size: 0x0
    Params_Back params{};
    ProcessEvent(func, &params);
}
