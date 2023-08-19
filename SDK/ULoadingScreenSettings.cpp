#include "FLoadingScreenDescription.hpp"
#include "FSlateFontInfo.hpp"
#include "UDeveloperSettings.hpp"
#include "ULoadingScreenSettings.hpp"
#include "UMaterialInstance.hpp"
ULoadingScreenSettings* ULoadingScreenSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/LoadingScreen.LoadingScreenSettings");
    return (ULoadingScreenSettings*)res;
}
