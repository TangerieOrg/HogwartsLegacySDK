#include "FGuid.hpp"
#include "UGeneralProjectSettings.hpp"
#include "UObject.hpp"
UGeneralProjectSettings* UGeneralProjectSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/EngineSettings.GeneralProjectSettings");
    return (UGeneralProjectSettings*)res;
}
