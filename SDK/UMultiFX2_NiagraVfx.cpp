#include "UMultiFX2_NiagraBase.hpp"
#include "UMultiFX2_NiagraVfx.hpp"
#include "UNiagaraSystem.hpp"
UMultiFX2_NiagraVfx* UMultiFX2_NiagraVfx::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraVfx");
    return (UMultiFX2_NiagraVfx*)res;
}
