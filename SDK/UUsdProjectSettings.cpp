#include "FDirectoryPath.hpp"
#include "UDeveloperSettings.hpp"
#include "UUsdProjectSettings.hpp"
UUsdProjectSettings* UUsdProjectSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/USDClasses.UsdProjectSettings");
    return (UUsdProjectSettings*)res;
}
