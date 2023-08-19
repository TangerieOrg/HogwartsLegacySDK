#include "AActor.hpp"
#include "ATransfigurationSnappingTarget.hpp"
#include "FVector.hpp"
#include "UConjurationSnappingComponentBase.hpp"
#include "UFunction.hpp"
ATransfigurationSnappingTarget* ATransfigurationSnappingTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationSnappingTarget");
    return (ATransfigurationSnappingTarget*)res;
}
void ATransfigurationSnappingTarget::ShowBeamAtLocalLocation(FVector& InLocationLocal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSnappingTarget.ShowBeamAtLocalLocation"));
    struct Params_ShowBeamAtLocalLocation {
        FVector InLocationLocal; // 0x0
    }; // Size: 0xc
    Params_ShowBeamAtLocalLocation params{};
    params.InLocationLocal = (FVector)InLocationLocal;
    ProcessEvent(func, &params);
    InLocationLocal = params.InLocationLocal;
}
void ATransfigurationSnappingTarget::SetTargetObject(UConjurationSnappingComponentBase* SnappingTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSnappingTarget.SetTargetObject"));
    struct Params_SetTargetObject {
        UConjurationSnappingComponentBase* SnappingTarget; // 0x0
    }; // Size: 0x8
    Params_SetTargetObject params{};
    params.SnappingTarget = (UConjurationSnappingComponentBase*)SnappingTarget;
    ProcessEvent(func, &params);
}
void ATransfigurationSnappingTarget::ClearLitBeams() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSnappingTarget.ClearLitBeams"));
    struct Params_ClearLitBeams {
    }; // Size: 0x0
    Params_ClearLitBeams params{};
    ProcessEvent(func, &params);
}
void ATransfigurationSnappingTarget::FadeOutAndDestroy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationSnappingTarget.FadeOutAndDestroy"));
    struct Params_FadeOutAndDestroy {
    }; // Size: 0x0
    Params_FadeOutAndDestroy params{};
    ProcessEvent(func, &params);
}
