#include "UAnimClassInterface.hpp"
#include "UInterface.hpp"
UAnimClassInterface* UAnimClassInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimClassInterface");
    return (UAnimClassInterface*)res;
}
