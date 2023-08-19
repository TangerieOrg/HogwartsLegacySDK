#include "AActor.hpp"
#include "AConveyorBelt.hpp"
AConveyorBelt* AConveyorBelt::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConveyorBelt");
    return (AConveyorBelt*)res;
}
