#include "EVirtualizationMode.hpp"
#include "FSoundConcurrencySettings.hpp"
#include "FSoundSourceBusSendInfo.hpp"
#include "FSoundSubmixSendInfo.hpp"
#include "UAssetUserData.hpp"
#include "UObject.hpp"
#include "USoundAttenuation.hpp"
#include "USoundBase.hpp"
#include "USoundClass.hpp"
#include "USoundEffectSourcePresetChain.hpp"
#include "USoundSubmixBase.hpp"
USoundBase* USoundBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundBase");
    return (USoundBase*)res;
}
