#include "UAssetManager.hpp"
#include "UObject.hpp"
UAssetManager* UAssetManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AssetManager");
    return (UAssetManager*)res;
}
