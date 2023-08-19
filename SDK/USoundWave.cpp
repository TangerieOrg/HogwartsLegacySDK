#include "ESoundGroup.hpp"
#include "ESoundWaveLoadingBehavior.hpp"
#include "ESoundwaveSampleRateSettings.hpp"
#include "FSoundModulationDefaultRoutingSettings.hpp"
#include "FSoundWaveEnvelopeTimeData.hpp"
#include "FSoundWaveSpectralTimeData.hpp"
#include "FSubtitleCue.hpp"
#include "UCurveTable.hpp"
#include "USoundBase.hpp"
#include "USoundWave.hpp"
USoundWave* USoundWave::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundWave");
    return (USoundWave*)res;
}
