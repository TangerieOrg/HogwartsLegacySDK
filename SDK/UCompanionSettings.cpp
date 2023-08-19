#include "FDbSingleColumnInfo.hpp"
#include "FOdcPathSpec.hpp"
#include "FSoftObjectPath.hpp"
#include "UCompanionSettings.hpp"
#include "UObject.hpp"
UCompanionSettings* UCompanionSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CompanionSettings");
    return (UCompanionSettings*)res;
}
