#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFXUpdate_LocationRotationScale.hpp"
#include "UFXUpdate_Tick.hpp"
UFXUpdate_LocationRotationScale* UFXUpdate_LocationRotationScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXUpdate_LocationRotationScale");
    return (UFXUpdate_LocationRotationScale*)res;
}
