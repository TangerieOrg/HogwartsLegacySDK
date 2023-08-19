#include "UMultiFX2_NiagraBase.hpp"
#include "UMultiFX2_NiagraVfxWithVars.hpp"
#include "UNiagaraSystemWithVars.hpp"
UMultiFX2_NiagraVfxWithVars* UMultiFX2_NiagraVfxWithVars::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraVfxWithVars");
    return (UMultiFX2_NiagraVfxWithVars*)res;
}
