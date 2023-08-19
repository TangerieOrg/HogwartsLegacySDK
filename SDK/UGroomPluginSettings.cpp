#include "UGroomPluginSettings.hpp"
#include "UObject.hpp"
UGroomPluginSettings* UGroomPluginSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/HairStrandsCore.GroomPluginSettings");
    return (UGroomPluginSettings*)res;
}
