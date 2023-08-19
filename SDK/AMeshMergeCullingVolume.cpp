#include "AMeshMergeCullingVolume.hpp"
#include "AVolume.hpp"
AMeshMergeCullingVolume* AMeshMergeCullingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MeshMergeCullingVolume");
    return (AMeshMergeCullingVolume*)res;
}
