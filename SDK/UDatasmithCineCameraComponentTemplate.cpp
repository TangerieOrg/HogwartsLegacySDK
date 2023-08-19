#include "FDatasmithCameraFilmbackSettingsTemplate.hpp"
#include "FDatasmithCameraFocusSettingsTemplate.hpp"
#include "FDatasmithCameraLensSettingsTemplate.hpp"
#include "FDatasmithPostProcessSettingsTemplate.hpp"
#include "UDatasmithCineCameraComponentTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
UDatasmithCineCameraComponentTemplate* UDatasmithCineCameraComponentTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithCineCameraComponentTemplate");
    return (UDatasmithCineCameraComponentTemplate*)res;
}
