#include "FAssetMapping.hpp"
#include "UAssetMappingTable.hpp"
#include "UObject.hpp"
UAssetMappingTable* UAssetMappingTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AssetMappingTable");
    return (UAssetMappingTable*)res;
}
