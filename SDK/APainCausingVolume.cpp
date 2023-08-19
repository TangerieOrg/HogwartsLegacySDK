#include "AController.hpp"
#include "APainCausingVolume.hpp"
#include "APhysicsVolume.hpp"
#include "UClass.hpp"
APainCausingVolume* APainCausingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PainCausingVolume");
    return (APainCausingVolume*)res;
}
