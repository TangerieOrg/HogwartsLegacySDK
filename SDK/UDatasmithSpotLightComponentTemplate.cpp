#include "UDatasmithObjectTemplate.hpp"
#include "UDatasmithSpotLightComponentTemplate.hpp"
UDatasmithSpotLightComponentTemplate* UDatasmithSpotLightComponentTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate");
    return (UDatasmithSpotLightComponentTemplate*)res;
}
