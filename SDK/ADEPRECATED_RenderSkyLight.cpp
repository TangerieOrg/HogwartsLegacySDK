#include "AActor.hpp"
#include "ADEPRECATED_RenderSkyLight.hpp"
ADEPRECATED_RenderSkyLight* ADEPRECATED_RenderSkyLight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RenderSkyLight");
    return (ADEPRECATED_RenderSkyLight*)res;
}
