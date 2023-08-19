#include "ELightUnits.hpp"
#include "UDatasmithObjectTemplate.hpp"
#include "UDatasmithPointLightComponentTemplate.hpp"
UDatasmithPointLightComponentTemplate* UDatasmithPointLightComponentTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithPointLightComponentTemplate");
    return (UDatasmithPointLightComponentTemplate*)res;
}
