#include "AActor.hpp"
#include "ATransfigurationMovementStyleBase.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "FBox.hpp"
#include "FDampedSpringQuat.hpp"
#include "FDampedSpringScalar.hpp"
#include "FDampedSpringVector.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
ATransfigurationMovementStyleBase* ATransfigurationMovementStyleBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationMovementStyleBase");
    return (ATransfigurationMovementStyleBase*)res;
}
void ATransfigurationMovementStyleBase::SetPlacementRegionTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.SetPlacementRegionTransform"));
    struct Params_SetPlacementRegionTransform {
    }; // Size: 0x0
    Params_SetPlacementRegionTransform params{};
    ProcessEvent(func, &params);
}
void ATransfigurationMovementStyleBase::ShowBeamAtLocalLocation(FVector& InLocationLocal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.ShowBeamAtLocalLocation"));
    struct Params_ShowBeamAtLocalLocation {
        FVector InLocationLocal; // 0x0
    }; // Size: 0xc
    Params_ShowBeamAtLocalLocation params{};
    params.InLocationLocal = (FVector)InLocationLocal;
    ProcessEvent(func, &params);
    InLocationLocal = params.InLocationLocal;
}
void ATransfigurationMovementStyleBase::UpdateFootprintRegionSizes(FVector& PlacementFootprintSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.UpdateFootprintRegionSizes"));
    struct Params_UpdateFootprintRegionSizes {
        FVector PlacementFootprintSize; // 0x0
    }; // Size: 0xc
    Params_UpdateFootprintRegionSizes params{};
    params.PlacementFootprintSize = (FVector)PlacementFootprintSize;
    ProcessEvent(func, &params);
    PlacementFootprintSize = params.PlacementFootprintSize;
}
void ATransfigurationMovementStyleBase::StartTransition(float InDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.StartTransition"));
    struct Params_StartTransition {
        float InDuration; // 0x0
    }; // Size: 0x4
    Params_StartTransition params{};
    params.InDuration = (float)InDuration;
    ProcessEvent(func, &params);
}
void ATransfigurationMovementStyleBase::SetTransformFromBounds(FVector& LocalExtent, FVector& LocalLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.SetTransformFromBounds"));
    struct Params_SetTransformFromBounds {
        FVector LocalExtent; // 0x0
        FVector LocalLocation; // 0xc
    }; // Size: 0x18
    Params_SetTransformFromBounds params{};
    params.LocalExtent = (FVector)LocalExtent;
    params.LocalLocation = (FVector)LocalLocation;
    ProcessEvent(func, &params);
    LocalExtent = params.LocalExtent;
    LocalLocation = params.LocalLocation;
}
void ATransfigurationMovementStyleBase::SetWallTransformFromBounds(FVector& LocalExtent, FVector& LocalLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.SetWallTransformFromBounds"));
    struct Params_SetWallTransformFromBounds {
        FVector LocalExtent; // 0x0
        FVector LocalLocation; // 0xc
    }; // Size: 0x18
    Params_SetWallTransformFromBounds params{};
    params.LocalExtent = (FVector)LocalExtent;
    params.LocalLocation = (FVector)LocalLocation;
    ProcessEvent(func, &params);
    LocalExtent = params.LocalExtent;
    LocalLocation = params.LocalLocation;
}
void ATransfigurationMovementStyleBase::ShowDecal(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.ShowDecal"));
    struct Params_ShowDecal {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_ShowDecal params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
void ATransfigurationMovementStyleBase::Place() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.Place"));
    struct Params_Place {
    }; // Size: 0x0
    Params_Place params{};
    ProcessEvent(func, &params);
}
void ATransfigurationMovementStyleBase::OnPreviewActorDestroyed(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.OnPreviewActorDestroyed"));
    struct Params_OnPreviewActorDestroyed {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_OnPreviewActorDestroyed params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void ATransfigurationMovementStyleBase::Lift() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.Lift"));
    struct Params_Lift {
    }; // Size: 0x0
    Params_Lift params{};
    ProcessEvent(func, &params);
}
void ATransfigurationMovementStyleBase::ClearLitBeams() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.ClearLitBeams"));
    struct Params_ClearLitBeams {
    }; // Size: 0x0
    Params_ClearLitBeams params{};
    ProcessEvent(func, &params);
}
void ATransfigurationMovementStyleBase::CanPlace(bool bCanPlace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationMovementStyleBase.CanPlace"));
    struct Params_CanPlace {
        bool bCanPlace; // 0x0
    }; // Size: 0x1
    Params_CanPlace params{};
    params.bCanPlace = (bool)bCanPlace;
    ProcessEvent(func, &params);
}
