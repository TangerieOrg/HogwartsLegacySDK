#include "FCurtainStageEntry.hpp"
#include "UCurtainStageSettings.hpp"
#include "UObject.hpp"
UCurtainStageSettings* UCurtainStageSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.CurtainStageSettings");
    return (UCurtainStageSettings*)res;
}
