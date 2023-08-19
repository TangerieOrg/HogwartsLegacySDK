#include "ENiagraWaterRippleCurveProperty.hpp"
#include "UCurveFloat.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_Water_Ripple_Curve.hpp"
UMultiFX2_Water_Ripple_Curve* UMultiFX2_Water_Ripple_Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_Water_Ripple_Curve");
    return (UMultiFX2_Water_Ripple_Curve*)res;
}
