#include "FHapticFeedbackDetails_Curve.hpp"
#include "UHapticFeedbackEffect_Base.hpp"
#include "UHapticFeedbackEffect_Curve.hpp"
UHapticFeedbackEffect_Curve* UHapticFeedbackEffect_Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HapticFeedbackEffect_Curve");
    return (UHapticFeedbackEffect_Curve*)res;
}
