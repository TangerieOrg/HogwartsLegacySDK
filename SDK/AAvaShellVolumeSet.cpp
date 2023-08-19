#include "AActor.hpp"
#include "AAvaShellVolumeSet.hpp"
#include "AAvaStreamingVolumeSet.hpp"
#include "ATriggerBox.hpp"
#include "ULevelStreamingDynamic.hpp"
AAvaShellVolumeSet* AAvaShellVolumeSet::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaShellVolumeSet");
    return (AAvaShellVolumeSet*)res;
}
