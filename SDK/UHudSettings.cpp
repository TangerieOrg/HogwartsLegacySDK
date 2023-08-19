#include "UHudSettings.hpp"
#include "UObject.hpp"
UHudSettings* UHudSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/EngineSettings.HudSettings");
    return (UHudSettings*)res;
}
