#include "ACreatureNurturingVolume.hpp"
#include "ACreatureNurturingVolumeBase.hpp"
ACreatureNurturingVolume* ACreatureNurturingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureNurturingVolume");
    return (ACreatureNurturingVolume*)res;
}
