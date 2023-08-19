#include "FDayNightCompassParams.hpp"
#include "UDayNightCompass.hpp"
#include "UMaterialInterface.hpp"
#include "USceneComponent.hpp"
#include "UTextRenderComponent.hpp"
UDayNightCompass* UDayNightCompass::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.DayNightCompass");
    return (UDayNightCompass*)res;
}
