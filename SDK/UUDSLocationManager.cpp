#include "UObject.hpp"
#include "UUDSLocationManager.hpp"
#include "UUDSManager.hpp"
UUDSLocationManager* UUDSLocationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UDSLocationManager");
    return (UUDSLocationManager*)res;
}
