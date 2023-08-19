#include "AActor.hpp"
#include "ARuntimeVirtualTextureVolume.hpp"
#include "URuntimeVirtualTextureComponent.hpp"
ARuntimeVirtualTextureVolume* ARuntimeVirtualTextureVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RuntimeVirtualTextureVolume");
    return (ARuntimeVirtualTextureVolume*)res;
}
