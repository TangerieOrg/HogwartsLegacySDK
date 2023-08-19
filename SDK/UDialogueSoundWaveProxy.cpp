#include "UDialogueSoundWaveProxy.hpp"
#include "USoundBase.hpp"
UDialogueSoundWaveProxy* UDialogueSoundWaveProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DialogueSoundWaveProxy");
    return (UDialogueSoundWaveProxy*)res;
}
