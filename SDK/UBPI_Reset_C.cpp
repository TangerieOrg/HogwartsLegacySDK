#include "AActor.hpp"
#include "UBPI_Reset_C.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UBPI_Reset_C* UBPI_Reset_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Interfaces/BPI_Reset.BPI_Reset_C");
    return (UBPI_Reset_C*)res;
}
void UBPI_Reset_C::ResetBlueprint(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Interfaces/BPI_Reset.BPI_Reset_C.ResetBlueprint"));
    struct Params_ResetBlueprint {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_ResetBlueprint params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
