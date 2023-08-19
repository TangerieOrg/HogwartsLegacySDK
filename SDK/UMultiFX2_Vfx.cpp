#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_Vfx.hpp"
#include "UParticleSystem.hpp"
UMultiFX2_Vfx* UMultiFX2_Vfx::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_Vfx");
    return (UMultiFX2_Vfx*)res;
}
