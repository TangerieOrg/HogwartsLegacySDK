#include "UInterface.hpp"
#include "UProviderStateHost.hpp"
UProviderStateHost* UProviderStateHost::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.ProviderStateHost");
    return (UProviderStateHost*)res;
}
