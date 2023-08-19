#include "FRenderSettingsBlendDomainConsoleLien.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsBlendDomainConsoleLiens.hpp"
URenderSettingsBlendDomainConsoleLiens* URenderSettingsBlendDomainConsoleLiens::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsBlendDomainConsoleLiens");
    return (URenderSettingsBlendDomainConsoleLiens*)res;
}
