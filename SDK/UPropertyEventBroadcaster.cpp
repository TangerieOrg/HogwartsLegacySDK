#include "UInterface.hpp"
#include "UPropertyEventBroadcaster.hpp"
UPropertyEventBroadcaster* UPropertyEventBroadcaster::StaticClass() {
    static auto res = find_uobject("Class /Script/PropertyAccess.PropertyEventBroadcaster");
    return (UPropertyEventBroadcaster*)res;
}
