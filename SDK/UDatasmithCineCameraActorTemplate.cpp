#include "FDatasmithCameraLookatTrackingSettingsTemplate.hpp"
#include "UDatasmithCineCameraActorTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
UDatasmithCineCameraActorTemplate* UDatasmithCineCameraActorTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithCineCameraActorTemplate");
    return (UDatasmithCineCameraActorTemplate*)res;
}
