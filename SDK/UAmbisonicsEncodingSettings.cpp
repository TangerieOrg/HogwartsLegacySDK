#include "UAmbisonicsEncodingSettings.hpp"
#include "USoundfieldEncodingSettingsBase.hpp"
UAmbisonicsEncodingSettings* UAmbisonicsEncodingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/SoundFields.AmbisonicsEncodingSettings");
    return (UAmbisonicsEncodingSettings*)res;
}
