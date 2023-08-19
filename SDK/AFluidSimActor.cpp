#include "AActor.hpp"
#include "AFluidSimActor.hpp"
#include "UFluidSimComponent.hpp"
#include "UFluidSimEmitterComponent.hpp"
AFluidSimActor* AFluidSimActor::StaticClass() {
    static auto res = find_uobject("Class /Script/FluidSim.FluidSimActor");
    return (AFluidSimActor*)res;
}
