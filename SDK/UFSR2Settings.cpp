#include "EFSR2DeDitherMode.hpp"
#include "EFSR2HistoryFormat.hpp"
#include "EFSR2LandscapeHISMMode.hpp"
#include "EFSR2QualityMode.hpp"
#include "EMaterialShadingModel.hpp"
#include "UDeveloperSettings.hpp"
#include "UFSR2Settings.hpp"
UFSR2Settings* UFSR2Settings::StaticClass() {
    static auto res = find_uobject("Class /Script/FSR2TemporalUpscaling.FSR2Settings");
    return (UFSR2Settings*)res;
}
