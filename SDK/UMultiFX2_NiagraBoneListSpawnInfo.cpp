#include "UMultiFX2_NiagraBoneListSpawnInfo.hpp"
#include "UMultiFX2_NiagraSpawnInfoBase.hpp"
UMultiFX2_NiagraBoneListSpawnInfo* UMultiFX2_NiagraBoneListSpawnInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraBoneListSpawnInfo");
    return (UMultiFX2_NiagraBoneListSpawnInfo*)res;
}
