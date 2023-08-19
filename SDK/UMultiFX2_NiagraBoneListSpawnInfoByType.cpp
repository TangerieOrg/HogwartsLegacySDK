#include "UMultiFX2_NiagraBoneListSpawnInfo.hpp"
#include "UMultiFX2_NiagraBoneListSpawnInfoByType.hpp"
UMultiFX2_NiagraBoneListSpawnInfoByType* UMultiFX2_NiagraBoneListSpawnInfoByType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_NiagraBoneListSpawnInfoByType");
    return (UMultiFX2_NiagraBoneListSpawnInfoByType*)res;
}
