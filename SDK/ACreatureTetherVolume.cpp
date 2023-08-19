#include "ACreatureTetherVolume.hpp"
#include "AVolume.hpp"
ACreatureTetherVolume* ACreatureTetherVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureTetherVolume");
    return (ACreatureTetherVolume*)res;
}
