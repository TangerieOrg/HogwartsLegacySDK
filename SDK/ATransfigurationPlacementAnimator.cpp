#include "AActor.hpp"
#include "ATransfigurationPlacementAnimator.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "UFunction.hpp"
ATransfigurationPlacementAnimator* ATransfigurationPlacementAnimator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransfigurationPlacementAnimator");
    return (ATransfigurationPlacementAnimator*)res;
}
void ATransfigurationPlacementAnimator::SelectAnimationIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPlacementAnimator.SelectAnimationIndex"));
    struct Params_SelectAnimationIndex {
    }; // Size: 0x0
    Params_SelectAnimationIndex params{};
    ProcessEvent(func, &params);
}
void ATransfigurationPlacementAnimator::AttachPreviewObject(ATransfigurationPreviewActor* InPreviewActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPlacementAnimator.AttachPreviewObject"));
    struct Params_AttachPreviewObject {
        ATransfigurationPreviewActor* InPreviewActor; // 0x0
    }; // Size: 0x8
    Params_AttachPreviewObject params{};
    params.InPreviewActor = (ATransfigurationPreviewActor*)InPreviewActor;
    ProcessEvent(func, &params);
}
int32_t ATransfigurationPlacementAnimator::GetSelectedAnimIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPlacementAnimator.GetSelectedAnimIndex"));
    struct Params_GetSelectedAnimIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSelectedAnimIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ATransfigurationPlacementAnimator::DetachPreviewObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransfigurationPlacementAnimator.DetachPreviewObject"));
    struct Params_DetachPreviewObject {
    }; // Size: 0x0
    Params_DetachPreviewObject params{};
    ProcessEvent(func, &params);
}
