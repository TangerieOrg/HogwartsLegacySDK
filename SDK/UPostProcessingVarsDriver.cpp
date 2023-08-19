#include "UObject.hpp"
#include "UPostProcessingVarsDriver.hpp"
UPostProcessingVarsDriver* UPostProcessingVarsDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarsDriver");
    return (UPostProcessingVarsDriver*)res;
}
