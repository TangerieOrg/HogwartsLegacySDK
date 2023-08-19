#include "UObject.hpp"
#include "USoundfieldEncodingSettingsBase.hpp"
USoundfieldEncodingSettingsBase* USoundfieldEncodingSettingsBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase");
    return (USoundfieldEncodingSettingsBase*)res;
}
