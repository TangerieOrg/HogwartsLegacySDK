#include "UAssetUserData.hpp"
#include "UTextureMipDataProviderFactory.hpp"
UTextureMipDataProviderFactory* UTextureMipDataProviderFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextureMipDataProviderFactory");
    return (UTextureMipDataProviderFactory*)res;
}
