#include "AActor.hpp"
#include "UBeaconInfo.hpp"
#include "UHUDCompassIcon.hpp"
#include "UObject.hpp"
#include "UPerceptionIconData.hpp"
#include "UPerceptionTextureCacheItem.hpp"
UPerceptionIconData* UPerceptionIconData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerceptionIconData");
    return (UPerceptionIconData*)res;
}
