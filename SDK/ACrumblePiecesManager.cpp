#include "AActor.hpp"
#include "ACrumblePiecesManager.hpp"
#include "UFunction.hpp"
ACrumblePiecesManager* ACrumblePiecesManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CrumblePiecesManager");
    return (ACrumblePiecesManager*)res;
}
void ACrumblePiecesManager::TryToRepairAll(AActor* TargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CrumblePiecesManager.TryToRepairAll"));
    struct Params_TryToRepairAll {
        AActor* TargetActor; // 0x0
    }; // Size: 0x8
    Params_TryToRepairAll params{};
    params.TargetActor = (AActor*)TargetActor;
    ProcessEvent(func, &params);
}
