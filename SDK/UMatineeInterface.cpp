#include "UInterface.hpp"
#include "UMatineeInterface.hpp"
UMatineeInterface* UMatineeInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MatineeInterface");
    return (UMatineeInterface*)res;
}
