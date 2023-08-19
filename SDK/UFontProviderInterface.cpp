#include "UFontProviderInterface.hpp"
#include "UInterface.hpp"
UFontProviderInterface* UFontProviderInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/SlateCore.FontProviderInterface");
    return (UFontProviderInterface*)res;
}
