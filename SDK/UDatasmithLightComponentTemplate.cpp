#include "FLinearColor.hpp"
#include "UDatasmithLightComponentTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#include "UMaterialInterface.hpp"
#include "UTextureLightProfile.hpp"
UDatasmithLightComponentTemplate* UDatasmithLightComponentTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithLightComponentTemplate");
    return (UDatasmithLightComponentTemplate*)res;
}
