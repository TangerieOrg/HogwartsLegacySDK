#include "UPostProcessingVarsDriver.hpp"
#include "UPostProcessingVarsDriverConst.hpp"
UPostProcessingVarsDriverConst* UPostProcessingVarsDriverConst::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVarsDriverConst");
    return (UPostProcessingVarsDriverConst*)res;
}
