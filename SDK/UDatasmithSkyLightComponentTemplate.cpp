#include "ESkyLightSourceType.hpp"
#include "UDatasmithObjectTemplate.hpp"
#include "UDatasmithSkyLightComponentTemplate.hpp"
#include "UTextureCube.hpp"
UDatasmithSkyLightComponentTemplate* UDatasmithSkyLightComponentTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithSkyLightComponentTemplate");
    return (UDatasmithSkyLightComponentTemplate*)res;
}
