#include "AActor.hpp"
#include "UAncientMagicEffect.hpp"
#include "UAncientMagicEffect_Test.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
UAncientMagicEffect_Test* UAncientMagicEffect_Test::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientMagicEffect_Test");
    return (UAncientMagicEffect_Test*)res;
}
void UAncientMagicEffect_Test::CollisionDetected(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicEffect_Test.CollisionDetected"));
    struct Params_CollisionDetected {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_CollisionDetected params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
