#include "UObject.hpp"
#include "UPlayerMountOverlaySettings.hpp"
UPlayerMountOverlaySettings* UPlayerMountOverlaySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PlayerMountOverlaySettings");
    return (UPlayerMountOverlaySettings*)res;
}
