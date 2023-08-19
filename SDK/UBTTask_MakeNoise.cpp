#include "UBTTaskNode.hpp"
#include "UBTTask_MakeNoise.hpp"
UBTTask_MakeNoise* UBTTask_MakeNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_MakeNoise");
    return (UBTTask_MakeNoise*)res;
}
