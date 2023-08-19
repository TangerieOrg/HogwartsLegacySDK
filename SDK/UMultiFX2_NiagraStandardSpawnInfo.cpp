#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
#include "UMultiFX2_NiagraStandardSpawnInfo.hpp"
UMultiFX2_NiagraStandardSpawnInfo* UMultiFX2_NiagraStandardSpawnInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraStandardSpawnInfo");
    return (UMultiFX2_NiagraStandardSpawnInfo*)res;
}
