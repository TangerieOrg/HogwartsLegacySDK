#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsBoundsScale.hpp"
USpawnByPrimitiveOptionsBoundsScale* USpawnByPrimitiveOptionsBoundsScale::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsBoundsScale");
    return (USpawnByPrimitiveOptionsBoundsScale*)res;
}
