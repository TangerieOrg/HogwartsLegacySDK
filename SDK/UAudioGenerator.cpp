#include "UAudioGenerator.hpp"
#include "UObject.hpp"
UAudioGenerator* UAudioGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/AudioMixer.AudioGenerator");
    return (UAudioGenerator*)res;
}
