#include "FEnvironmentalGlobalsScalarName.hpp"
#include "UPostProcessingVarsDriver.hpp"
#include "UPostProcessingVarsDriverEnvironmentalGlobalsExtra.hpp"
UPostProcessingVarsDriverEnvironmentalGlobalsExtra* UPostProcessingVarsDriverEnvironmentalGlobalsExtra::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarsDriverEnvironmentalGlobalsExtra");
    return (UPostProcessingVarsDriverEnvironmentalGlobalsExtra*)res;
}
