#include "UAssetRegistryImpl.hpp"
#include "UObject.hpp"
UAssetRegistryImpl* UAssetRegistryImpl::StaticClass() {
    static auto res = find_uobject("Class /Script/AssetRegistry.AssetRegistryImpl");
    return (UAssetRegistryImpl*)res;
}
