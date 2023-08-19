#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_OpenDoor.hpp"
UAblAnimRateGetter_OpenDoor* UAblAnimRateGetter_OpenDoor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_OpenDoor");
    return (UAblAnimRateGetter_OpenDoor*)res;
}
