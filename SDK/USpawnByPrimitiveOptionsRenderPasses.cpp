#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsRenderPasses.hpp"
USpawnByPrimitiveOptionsRenderPasses* USpawnByPrimitiveOptionsRenderPasses::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsRenderPasses");
    return (USpawnByPrimitiveOptionsRenderPasses*)res;
}
