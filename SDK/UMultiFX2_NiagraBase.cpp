#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_NiagraBase.hpp"
#include "UMultiFX2_NiagraPropertyBase.hpp"
#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
UMultiFX2_NiagraBase* UMultiFX2_NiagraBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraBase");
    return (UMultiFX2_NiagraBase*)res;
}
