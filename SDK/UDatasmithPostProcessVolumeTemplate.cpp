#include "FDatasmithPostProcessSettingsTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#include "UDatasmithPostProcessVolumeTemplate.hpp"
UDatasmithPostProcessVolumeTemplate* UDatasmithPostProcessVolumeTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithPostProcessVolumeTemplate");
    return (UDatasmithPostProcessVolumeTemplate*)res;
}
