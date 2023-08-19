#include "UDeveloperSettings.hpp"
#include "ULandscapeSettings.hpp"
ULandscapeSettings* ULandscapeSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeSettings");
    return (ULandscapeSettings*)res;
}
