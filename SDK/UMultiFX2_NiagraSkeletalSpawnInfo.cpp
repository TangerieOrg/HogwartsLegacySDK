#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnMultiSkeletalInfo.hpp"
#include "UMultiFX2_NiagraSkeletalSpawnInfo.hpp"
#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
UMultiFX2_NiagraSkeletalSpawnInfo* UMultiFX2_NiagraSkeletalSpawnInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraSkeletalSpawnInfo");
    return (UMultiFX2_NiagraSkeletalSpawnInfo*)res;
}
