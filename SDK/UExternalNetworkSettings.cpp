#include "UExternalNetworkSettings.hpp"
#include "UObject.hpp"
UExternalNetworkSettings* UExternalNetworkSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExternalNetworkSettings");
    return (UExternalNetworkSettings*)res;
}
