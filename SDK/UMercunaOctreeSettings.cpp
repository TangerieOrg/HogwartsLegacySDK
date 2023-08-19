#include "FMercunaOctreeData.hpp"
#include "UDataAsset.hpp"
#include "UMercunaOctreeSettings.hpp"
UMercunaOctreeSettings* UMercunaOctreeSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaOctreeSettings");
    return (UMercunaOctreeSettings*)res;
}
