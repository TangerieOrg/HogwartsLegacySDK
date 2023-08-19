#include "UBPI_ActorRotation_C.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UBPI_ActorRotation_C* UBPI_ActorRotation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/ProxyLODHarvest/BPI_ActorRotation.BPI_ActorRotation_C");
    return (UBPI_ActorRotation_C*)res;
}
void UBPI_ActorRotation_C::UpdateRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/ProxyLODHarvest/BPI_ActorRotation.BPI_ActorRotation_C.UpdateRotation"));
    struct Params_UpdateRotation {
    }; // Size: 0x0
    Params_UpdateRotation params{};
    ProcessEvent(func, &params);
}
