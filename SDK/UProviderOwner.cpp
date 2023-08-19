#include "UInterface.hpp"
#include "UProviderOwner.hpp"
UProviderOwner* UProviderOwner::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ProviderOwner");
    return (UProviderOwner*)res;
}
