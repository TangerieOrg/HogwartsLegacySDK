#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnAttachedInfo.hpp"
#include "UMultiFX2_NiagraPrimSpawnInfo.hpp"
#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
UMultiFX2_NiagraPrimSpawnInfo* UMultiFX2_NiagraPrimSpawnInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraPrimSpawnInfo");
    return (UMultiFX2_NiagraPrimSpawnInfo*)res;
}
