#include "EDLSSSettingOverride.hpp"
#include "UDLSSOverrideSettings.hpp"
#include "UObject.hpp"
UDLSSOverrideSettings* UDLSSOverrideSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/DLSS.DLSSOverrideSettings");
    return (UDLSSOverrideSettings*)res;
}
