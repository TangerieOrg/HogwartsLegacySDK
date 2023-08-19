#include "FColor.hpp"
#include "FObjectHabitatFoliageType.hpp"
#include "FObjectSpawnTime.hpp"
#include "FRotator.hpp"
#include "UClass.hpp"
#include "UDynamicObjectInfo.hpp"
#include "UObject.hpp"
UDynamicObjectInfo* UDynamicObjectInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicObjectInfo");
    return (UDynamicObjectInfo*)res;
}
