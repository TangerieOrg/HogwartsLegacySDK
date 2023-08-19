#include "AActor.hpp"
#include "ASphinxPuzzle.hpp"
#include "AWorldObject.hpp"
#include "EInteractiveState.hpp"
#include "UFunction.hpp"
#include "UInteractiveObjectComponent.hpp"
void ASphinxPuzzle::CleanUpObject(AActor* actorToDestroy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SphinxPuzzle.CleanUpObject"));
    struct Params_CleanUpObject {
        AActor* actorToDestroy; // 0x0
    }; // Size: 0x8
    Params_CleanUpObject params{};
    params.actorToDestroy = (AActor*)actorToDestroy;
    ProcessEvent(func, &params);
}
void ASphinxPuzzle::NotifyBeginPuzzle(EInteractiveState State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SphinxPuzzle.NotifyBeginPuzzle"));
    struct Params_NotifyBeginPuzzle {
        EInteractiveState State; // 0x0
    }; // Size: 0x1
    Params_NotifyBeginPuzzle params{};
    params.State = (EInteractiveState)State;
    ProcessEvent(func, &params);
}
ASphinxPuzzle* ASphinxPuzzle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SphinxPuzzle");
    return (ASphinxPuzzle*)res;
}
