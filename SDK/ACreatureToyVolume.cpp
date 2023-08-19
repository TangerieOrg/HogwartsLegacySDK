#include "ACreatureToyVolume.hpp"
#include "AVolume.hpp"
ACreatureToyVolume* ACreatureToyVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureToyVolume");
    return (ACreatureToyVolume*)res;
}
