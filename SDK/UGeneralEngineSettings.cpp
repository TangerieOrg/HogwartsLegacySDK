#include "UGeneralEngineSettings.hpp"
#include "UObject.hpp"
UGeneralEngineSettings* UGeneralEngineSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/EngineSettings.GeneralEngineSettings");
    return (UGeneralEngineSettings*)res;
}
