#include "ULocationManager.hpp"
#include "UObject.hpp"
ULocationManager* ULocationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LocationManager");
    return (ULocationManager*)res;
}
