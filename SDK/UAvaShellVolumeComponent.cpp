#include "ATriggerBox.hpp"
#include "UAvaShellVolumeComponent.hpp"
#include "UAvaStreamingLevelVolumeComponentBase.hpp"
UAvaShellVolumeComponent* UAvaShellVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaShellVolumeComponent");
    return (UAvaShellVolumeComponent*)res;
}
