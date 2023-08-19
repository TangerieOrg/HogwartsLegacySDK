#include "USpawnByPrimitiveOptions.hpp"
#include "USpawnByPrimitiveOptionsShadows.hpp"
USpawnByPrimitiveOptionsShadows* USpawnByPrimitiveOptionsShadows::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnByPrimitiveOptionsShadows");
    return (USpawnByPrimitiveOptionsShadows*)res;
}
