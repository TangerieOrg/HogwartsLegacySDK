#include "UDeveloperSettings.hpp"
#include "UObject.hpp"
UDeveloperSettings* UDeveloperSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/DeveloperSettings.DeveloperSettings");
    return (UDeveloperSettings*)res;
}
