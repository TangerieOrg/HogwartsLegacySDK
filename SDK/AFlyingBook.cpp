#include "AFlyingBook.hpp"
#include "AWorldInteractObject.hpp"
#include "UFunction.hpp"
#include "USphereComponent.hpp"
#include "USplineComponent.hpp"
void AFlyingBook::RandomizeDistanceAlongSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBook.RandomizeDistanceAlongSpline"));
    struct Params_RandomizeDistanceAlongSpline {
    }; // Size: 0x0
    Params_RandomizeDistanceAlongSpline params{};
    ProcessEvent(func, &params);
}
AFlyingBook* AFlyingBook::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBook");
    return (AFlyingBook*)res;
}
void AFlyingBook::Update(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBook.Update"));
    struct Params_Update {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_Update params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void AFlyingBook::ActivateSpellReaction(bool newActivate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBook.ActivateSpellReaction"));
    struct Params_ActivateSpellReaction {
        bool newActivate; // 0x0
    }; // Size: 0x1
    Params_ActivateSpellReaction params{};
    params.newActivate = (bool)newActivate;
    ProcessEvent(func, &params);
}
