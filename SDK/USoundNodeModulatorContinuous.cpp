#include "FModulatorContinuousParams.hpp"
#include "USoundNode.hpp"
#include "USoundNodeModulatorContinuous.hpp"
USoundNodeModulatorContinuous* USoundNodeModulatorContinuous::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeModulatorContinuous");
    return (USoundNodeModulatorContinuous*)res;
}
