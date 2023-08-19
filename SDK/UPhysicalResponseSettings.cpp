#include "UObject.hpp"
#include "UPhysicalResponseSettings.hpp"
UPhysicalResponseSettings* UPhysicalResponseSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhysicalResponseSettings");
    return (UPhysicalResponseSettings*)res;
}
