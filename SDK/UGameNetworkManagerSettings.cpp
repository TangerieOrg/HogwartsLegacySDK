#include "UGameNetworkManagerSettings.hpp"
#include "UObject.hpp"
UGameNetworkManagerSettings* UGameNetworkManagerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/EngineSettings.GameNetworkManagerSettings");
    return (UGameNetworkManagerSettings*)res;
}
