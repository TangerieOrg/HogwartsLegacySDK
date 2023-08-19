#include "UFXEnd.hpp"
#include "UMultiFX2End_Vfx.hpp"
#include "UParticleSystem.hpp"
UMultiFX2End_Vfx* UMultiFX2End_Vfx::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2End_Vfx");
    return (UMultiFX2End_Vfx*)res;
}
