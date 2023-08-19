#include "UDeveloperSettings.hpp"
#include "URendererOverrideSettings.hpp"
URendererOverrideSettings* URendererOverrideSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RendererOverrideSettings");
    return (URendererOverrideSettings*)res;
}
