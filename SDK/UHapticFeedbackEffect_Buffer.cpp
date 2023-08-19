#include "UHapticFeedbackEffect_Base.hpp"
#include "UHapticFeedbackEffect_Buffer.hpp"
UHapticFeedbackEffect_Buffer* UHapticFeedbackEffect_Buffer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HapticFeedbackEffect_Buffer");
    return (UHapticFeedbackEffect_Buffer*)res;
}
