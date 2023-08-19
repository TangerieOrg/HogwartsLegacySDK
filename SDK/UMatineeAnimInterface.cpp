#include "UInterface.hpp"
#include "UMatineeAnimInterface.hpp"
UMatineeAnimInterface* UMatineeAnimInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MatineeAnimInterface");
    return (UMatineeAnimInterface*)res;
}
