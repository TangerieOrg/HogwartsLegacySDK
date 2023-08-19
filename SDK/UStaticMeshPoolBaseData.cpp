#include "FConditionalStaticMeshPool.hpp"
#include "UDataAsset.hpp"
#include "UStaticMeshPoolBaseData.hpp"
UStaticMeshPoolBaseData* UStaticMeshPoolBaseData::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.StaticMeshPoolBaseData");
    return (UStaticMeshPoolBaseData*)res;
}
