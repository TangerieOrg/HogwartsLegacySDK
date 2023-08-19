#include "UObject.hpp"
#include "UPostProcessingVar.hpp"
UPostProcessingVar* UPostProcessingVar::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.PostProcessingVar");
    return (UPostProcessingVar*)res;
}
