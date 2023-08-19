#include "UBlendableInterface.hpp"
#include "UInterface.hpp"
UBlendableInterface* UBlendableInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlendableInterface");
    return (UBlendableInterface*)res;
}
