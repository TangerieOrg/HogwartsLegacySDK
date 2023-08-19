#include "AActor.hpp"
#include "ARemoteControlPresetActor.hpp"
#include "URemoteControlPreset.hpp"
ARemoteControlPresetActor* ARemoteControlPresetActor::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlPresetActor");
    return (ARemoteControlPresetActor*)res;
}
