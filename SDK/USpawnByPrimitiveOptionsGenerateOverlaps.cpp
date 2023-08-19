#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsGenerateOverlaps.hpp"
USpawnByPrimitiveOptionsGenerateOverlaps* USpawnByPrimitiveOptionsGenerateOverlaps::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsGenerateOverlaps");
    return (USpawnByPrimitiveOptionsGenerateOverlaps*)res;
}
