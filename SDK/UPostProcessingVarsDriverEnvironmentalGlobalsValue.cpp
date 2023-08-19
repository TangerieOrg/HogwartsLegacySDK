#include "EEnvironmentalGlobalsValue.hpp"
#include "UPostProcessingVarsDriver.hpp"
#include "UPostProcessingVarsDriverEnvironmentalGlobalsValue.hpp"
UPostProcessingVarsDriverEnvironmentalGlobalsValue* UPostProcessingVarsDriverEnvironmentalGlobalsValue::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarsDriverEnvironmentalGlobalsValue");
    return (UPostProcessingVarsDriverEnvironmentalGlobalsValue*)res;
}
