#include "USoundNode.hpp"
#include "USoundNodeQualityLevel.hpp"
USoundNodeQualityLevel* USoundNodeQualityLevel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SoundNodeQualityLevel");
    return (USoundNodeQualityLevel*)res;
}
