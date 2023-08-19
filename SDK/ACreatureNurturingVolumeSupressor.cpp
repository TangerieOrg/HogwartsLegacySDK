#include "ACreatureNurturingVolumeBase.hpp"
#include "ACreatureNurturingVolumeSupressor.hpp"
ACreatureNurturingVolumeSupressor* ACreatureNurturingVolumeSupressor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureNurturingVolumeSupressor");
    return (ACreatureNurturingVolumeSupressor*)res;
}
