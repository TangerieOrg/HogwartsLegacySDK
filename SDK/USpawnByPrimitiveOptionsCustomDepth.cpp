#include "ERendererStencilMask.hpp"
#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsCustomDepth.hpp"
USpawnByPrimitiveOptionsCustomDepth* USpawnByPrimitiveOptionsCustomDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsCustomDepth");
    return (USpawnByPrimitiveOptionsCustomDepth*)res;
}
