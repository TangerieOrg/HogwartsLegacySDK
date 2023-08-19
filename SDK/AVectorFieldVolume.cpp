#include "AActor.hpp"
#include "AVectorFieldVolume.hpp"
#include "UVectorFieldComponent.hpp"
AVectorFieldVolume* AVectorFieldVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VectorFieldVolume");
    return (AVectorFieldVolume*)res;
}
