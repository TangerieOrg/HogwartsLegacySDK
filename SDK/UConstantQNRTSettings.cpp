#include "EAudioSpectrumType.hpp"
#include "EConstantQFFTSizeEnum.hpp"
#include "EConstantQNormalizationEnum.hpp"
#include "EFFTWindowType.hpp"
#include "UAudioSynesthesiaNRTSettings.hpp"
#include "UConstantQNRTSettings.hpp"
UConstantQNRTSettings* UConstantQNRTSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioSynesthesia.ConstantQNRTSettings");
    return (UConstantQNRTSettings*)res;
}
