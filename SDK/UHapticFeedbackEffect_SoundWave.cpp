#include "UHapticFeedbackEffect_Base.hpp"
#include "UHapticFeedbackEffect_SoundWave.hpp"
#include "USoundWave.hpp"
UHapticFeedbackEffect_SoundWave* UHapticFeedbackEffect_SoundWave::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HapticFeedbackEffect_SoundWave");
    return (UHapticFeedbackEffect_SoundWave*)res;
}
