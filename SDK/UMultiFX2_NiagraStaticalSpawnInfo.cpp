#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnMultiStaticInfo.hpp"
#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
#include "UMultiFX2_NiagraStaticalSpawnInfo.hpp"
UMultiFX2_NiagraStaticalSpawnInfo* UMultiFX2_NiagraStaticalSpawnInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraStaticalSpawnInfo");
    return (UMultiFX2_NiagraStaticalSpawnInfo*)res;
}
