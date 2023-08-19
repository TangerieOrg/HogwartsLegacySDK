#include "UInterface.hpp"
#include "UPreLoadAssetInterface.hpp"
UPreLoadAssetInterface* UPreLoadAssetInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationArchitectRuntime.PreLoadAssetInterface");
    return (UPreLoadAssetInterface*)res;
}
