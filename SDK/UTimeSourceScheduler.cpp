#include "UTimeSourceScheduler.hpp"
#include "UTimeSourceVolume.hpp"
UTimeSourceScheduler* UTimeSourceScheduler::StaticClass() {
    static auto res = find_uobject("Class /Script/GameScheduler.TimeSourceScheduler");
    return (UTimeSourceScheduler*)res;
}
