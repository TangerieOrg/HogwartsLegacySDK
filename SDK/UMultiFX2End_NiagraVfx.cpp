#include "UFXEnd.hpp"
#include "UMultiFX2End_NiagraVfx.hpp"
#include "UNiagaraSystem.hpp"
UMultiFX2End_NiagraVfx* UMultiFX2End_NiagraVfx::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2End_NiagraVfx");
    return (UMultiFX2End_NiagraVfx*)res;
}
