#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
#include "UObject.hpp"
UMultiFX2_NiagraSpawnInfoBase* UMultiFX2_NiagraSpawnInfoBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraSpawnInfoBase");
    return (UMultiFX2_NiagraSpawnInfoBase*)res;
}
