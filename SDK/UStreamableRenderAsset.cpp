#include "UObject.hpp"
#include "UStreamableRenderAsset.hpp"
UStreamableRenderAsset* UStreamableRenderAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.StreamableRenderAsset");
    return (UStreamableRenderAsset*)res;
}
