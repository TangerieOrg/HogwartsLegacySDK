#include "UHapticFeedbackEffect_Base.hpp"
#include "UObject.hpp"
UHapticFeedbackEffect_Base* UHapticFeedbackEffect_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HapticFeedbackEffect_Base");
    return (UHapticFeedbackEffect_Base*)res;
}
