#include "UFXAutoTriggerBoolCanPlayerUseAlohomora.hpp"
#include "UFXAutoTriggerBoolLockable.hpp"
UFXAutoTriggerBoolCanPlayerUseAlohomora* UFXAutoTriggerBoolCanPlayerUseAlohomora::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolCanPlayerUseAlohomora");
    return (UFXAutoTriggerBoolCanPlayerUseAlohomora*)res;
}
