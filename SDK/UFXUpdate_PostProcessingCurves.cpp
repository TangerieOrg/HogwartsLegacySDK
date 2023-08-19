#include "FPostProcessingFXCurveSet.hpp"
#include "UFXUpdate_PostProcessingCurves.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_PostProcessingCurves* UFXUpdate_PostProcessingCurves::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_PostProcessingCurves");
    return (UFXUpdate_PostProcessingCurves*)res;
}
