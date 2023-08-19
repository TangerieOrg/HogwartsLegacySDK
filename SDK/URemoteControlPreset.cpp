#include "FGuid.hpp"
#include "FRemoteControlPresetLayout.hpp"
#include "UObject.hpp"
#include "URemoteControlBinding.hpp"
#include "URemoteControlExposeRegistry.hpp"
#include "URemoteControlPreset.hpp"
URemoteControlPreset* URemoteControlPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/RemoteControl.RemoteControlPreset");
    return (URemoteControlPreset*)res;
}
