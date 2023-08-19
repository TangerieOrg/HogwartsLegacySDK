#include "ATriggerVolume.hpp"
#include "AVolume.hpp"
ATriggerVolume* ATriggerVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TriggerVolume");
    return (ATriggerVolume*)res;
}
