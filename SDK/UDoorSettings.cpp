#include "UClass.hpp"
#include "UDeveloperSettings.hpp"
#include "UDoorSettings.hpp"
UDoorSettings* UDoorSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DoorSettings");
    return (UDoorSettings*)res;
}
