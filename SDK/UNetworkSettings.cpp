#include "FNetworkEmulationProfileDescription.hpp"
#include "UDeveloperSettings.hpp"
#include "UNetworkSettings.hpp"
UNetworkSettings* UNetworkSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NetworkSettings");
    return (UNetworkSettings*)res;
}
